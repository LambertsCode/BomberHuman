using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bomb : MonoBehaviour
{

    public ParticleSystem mainPartical;
    public PlayerBrain ownerBrain;

    public GameManager gameManager;
    public StateManager stateManager;
    public EnemyManager enemyManager;

    public FloatVariable bombTimerLength;
    public float explosionTick;
    bool exploded = true;

    public AudioSource audioSource;
    public AudioClip beepingSound;
    public AudioClip explosionSound;

    private void OnEnable()
    {
        //TODO Pariticals and Systems
        gameManager = stateManager.gameManager;

        explosionTick = Time.time + bombTimerLength.value;

        var particle = mainPartical.main;
        var particles = mainPartical.subEmitters;

        particle.startLifetime = bombTimerLength.value;

        for(int i=0; i<particles.subEmittersCount; i++)
        {
            var emitter = particles.GetSubEmitterSystem(i).main;
            emitter.startDelay = bombTimerLength.value;
        }

        exploded = false;

        if (ownerBrain)
        {
            ownerBrain.AddActiveBomb(this);
        }
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if(!exploded && Time.time > explosionTick)
        {
            exploded = true;
            HandleExplosion();
        }
    }

    private void HandleExplosion()
    {
        Debug.Log("Exploding!");

        audioSource.PlayOneShot(explosionSound);

        RaycastHit hit;

        if (Utils.RoundedVector3(gameManager.player1.playerGO.transform.position) == transform.position)
        {
            gameManager.OnPlayerKilled(gameManager.player1);
        }

        if (gameManager.player2.playerGO && Utils.RoundedVector3(gameManager.player2.playerGO.transform.position) == transform.position)
        {
            gameManager.OnPlayerKilled(gameManager.player2);
        }

        if(gameManager.gameMode == GameMode.Singleplayer)
        {
            for(int i = 0; i < gameManager.enemyManager.spawnedEnemies.Count; i++)
            {
                if (Utils.RoundedVector3(gameManager.enemyManager.spawnedEnemies[i].transform.position) == transform.position)
                {
                    Destroy(gameManager.enemyManager.spawnedEnemies[i].gameObject);
                }
            }
        }
        


        for (int i = 0; i < 4; i++){
            transform.rotation = Quaternion.Euler(0, 90 * i, 0);
            Debug.DrawRay(transform.position, transform.forward * 2f, Color.red, 60f);

            if (Physics.Raycast(transform.position, transform.forward, out hit, 2f))
            {
                Debug.Log("I hit " + hit.transform.name);

                if (hit.transform.tag == "Player")
                {
                    gameManager.OnPlayerKilled(hit.transform.GetComponent<Player>().playerBrain);
                }
                else if (hit.transform.tag == "BreakableBlock")
                {
                    Destroy(hit.transform.gameObject);
                }
                else if(hit.transform.tag == "Enemy")
                {
                    Destroy(hit.transform.gameObject);
                    gameManager.OnEnemyKilled();
                }
            }
        }


        Destroy(gameObject, 0.6f);
    }

    private void OnDestroy()
    {
        if (ownerBrain)
        {
            ownerBrain.RemoveBomb(this);
        }
    }
}
