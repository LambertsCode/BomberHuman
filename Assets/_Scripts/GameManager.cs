using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class GameManager : MonoBehaviour
{
    public PlayerBrain player1;
    public PlayerBrain player2;

    public StateManager stateManager;
    public BlockManager blockManager;
    public EnemyManager enemyManager;

    public RectTransform gameStatusText;

    public Text countdownTimerText;

    int countdownTimer = 3;

    float nextCountdownTick = 0;

    public AudioSource audioSource;
    public AudioClip countdownTick;
    public AudioClip countdownEnd;
    public AudioClip music;

    float roundStartTime = 0;
    public FloatVariable roundTimer;

    public GameMode gameMode;

    public float startingRandomizedBlocks = 8;

    public float escalationStartTime = 10f;
    public float escalationFrequency = 5f;
    float nextEscalationTick;
    public FloatVariable escalationTier;
    public GameObject neutralBomb;

    public FloatVariable playerHighScore;


    // Start is called before the first frame update
    void Awake()
    {
        player1.gameManager = this;
        player2.gameManager = this;

        stateManager.gameManager = this;

        stateManager.currentGameState = GameState.PreGame;

        roundTimer.value = 0;

        countdownTimer = 3;

        escalationTier.value = 1;
        nextEscalationTick = escalationStartTime;

        if(gameMode == GameMode.Singleplayer)
        {
            player1.playerScore.value = 0;
            player2.playerScore.value = 0;
        }
    }

    private void Start()
    {
        SpawnRandomBlocks(startingRandomizedBlocks);
    }

    // Update is called once per frame
    void Update()
    {
        if (stateManager.currentGameState == GameState.PreGame && PlayersReady())
        {
            stateManager.currentGameState = GameState.PlayersReady;
            nextCountdownTick = Time.time + 1;
            gameStatusText.gameObject.SetActive(false);
            audioSource.PlayOneShot(countdownTick);
            countdownTimerText.text = countdownTimer + "";
        }
        else if (stateManager.currentGameState == GameState.PlayersReady)
        {
            if (Time.time > nextCountdownTick)
            {
                CountdownTick();
                nextCountdownTick = Time.time + 1;
            }
        }
        else if (stateManager.currentGameState == GameState.GameActive)
        {
            roundTimer.value = Utils.RoundToInt(Time.time - roundStartTime);
            
            if(roundTimer.value > nextEscalationTick)
            {
                TriggerEscalation();
            }
            else if(gameMode == GameMode.Singleplayer && enemyManager.spawnedEnemies.Count == 0)
            {
                TriggerEscalation();
            }
        }
        else if (stateManager.currentGameState == GameState.GameOver)
        {
            if (Input.GetKey(player1.bombKey) || Input.GetKey(player2.bombKey))
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
            }
        }
    }

    private void TriggerEscalation()
    {
       for(int i = 0; i < escalationTier.value; i++)
        {
            if (gameMode == GameMode.Multiplayer)
            {
                bool bombSpawned = false;
                int attempts = 0;

                while (!bombSpawned)
                {
                    int x = Random.Range(-4, 5);
                    int z = Random.Range(-3, 6);
                    Vector3 position = new Vector3(x, 0, z);

                    if (PositionIsOpen(position))
                    {
                        bombSpawned = true;
                        GameObject.Instantiate(neutralBomb, position, Quaternion.identity);
                    }

                    if (attempts > 50)
                        bombSpawned = true;

                    attempts++;
                }
            }
            else if (gameMode == GameMode.Singleplayer)
            {
                bool enemySpawned = false;
                int attempts = 0;

                while (!enemySpawned)
                {
                    int x = Random.Range(-4, 5);
                    int z = Random.Range(-3, 6);
                    Vector3 position = new Vector3(x, 0, z);

                    int enemyNumber = Random.Range(0, enemyManager.enemyTypes.Count);

                    if (PositionIsOpen(position))
                    {
                        enemySpawned = true;
                        GameObject.Instantiate(enemyManager.enemyTypes[enemyNumber], position, Quaternion.identity);
                    }

                    if (attempts > 50)
                        enemySpawned = true;

                    attempts++;
                }
            }
        }
        nextEscalationTick += escalationFrequency;
        escalationTier.value++;

    }

    void CountdownTick()
    {
        countdownTimer--;
        if (countdownTimer == 0)
        {
            audioSource.PlayOneShot(countdownEnd);
            stateManager.currentGameState = GameState.GameActive;
            countdownTimerText.text = "";
            roundStartTime = Time.time;

            if (music)
            {
                audioSource.clip = music;
                audioSource.loop = true;
                audioSource.Play();
            }

        }
        else
        {
            countdownTimerText.text = countdownTimer + "";
            audioSource.PlayOneShot(countdownTick);
        }
    }

    public void OnPlayerKilled(PlayerBrain playerKilled)
    {
        if(stateManager.currentGameState == GameState.GameActive)
        {

        }

        if (gameMode == GameMode.Multiplayer)
        {
            if (playerKilled == player1)
            {
                Debug.Log("Player 2 Wins!");
                countdownTimerText.fontSize = 95;
                countdownTimerText.text = "Player 2 Wins! \n Hit Bomb Key to Restart";
                player2.playerScore.value++;
            }
            else if (playerKilled == player2)
            {
                Debug.Log("Player 1 Wins!");
                countdownTimerText.fontSize = 95;
                countdownTimerText.text = "Player 1 Wins! \n Hit Bomb Key to Restart";
                player1.playerScore.value++;
            }
        }
        else
        {
            if (player1.playerScore.value > playerHighScore.value)
            {
                playerHighScore.SetValue(player1.playerScore.value);
                PlayerPrefs.SetFloat("PlayerHighScore", PlayerPrefs.GetFloat("PlayerScore"));
            }
            for(int i=0; i < enemyManager.spawnedEnemies.Count; i++)
            {
                if (enemyManager.spawnedEnemies[i].animator.GetBool("moving"))
                {
                    enemyManager.spawnedEnemies[i].animator.SetBool("moving", false);
                }
                
            }

            for (int i = 0; i < player1.activeBombs.Count; i++)
            {
                //player1.activeBombs[i].SetBool(enabled, false);
            }

            countdownTimerText.fontSize = 30;
            countdownTimerText.text = "Game Over! \n Hit Bomb Key to Restart";
        }

        stateManager.currentGameState = GameState.GameOver;
        player1.ready = false;
        player2.ready = false;
    }

    bool PlayersReady()
    {
        if (player1.ready && !player2.playerGO)
        {
            return true;
        }

        if (player1.ready && player2.ready)
        {
            return true;
        }

        return false;
    }

    private void SpawnRandomBlocks(float count)
    {
        if (!blockManager.breakableBlockPrefab)
            return;


        for (int i = 0; i < count; i++)
        {
            bool blockSpawned = false;

            int attempts = 0;

            while (!blockSpawned)
            {
                int x = Random.Range((int)blockManager.minBlock.x, (int)blockManager.maxBlock.x);
                int z = Random.Range((int)blockManager.minBlock.y, (int)blockManager.maxBlock.y);

                Vector3 position = new Vector3(x, 0, z);
                if (PositionIsOpen(position))
                {
                    blockSpawned = true;
                    GameObject.Instantiate(blockManager.breakableBlockPrefab, position, Quaternion.identity);
                }

                if (attempts > 50)
                    blockSpawned = true;

                attempts++;
            }
        }
    }

    bool PositionIsOpen(Vector3 position)
    {
        if (blockManager.activeBlocksDictionary.ContainsKey(position))
        {
            return false;
        }

        if(player1.playerGO && position == Utils.RoundedVector3(player1.playerGO.transform.position))
        {
            return false;
        }

        if (player2.playerGO && position == Utils.RoundedVector3(player2.playerGO.transform.position))
        {
            return false;
        }

        return true;
    }

    public void OnEnemyKilled()
    {
        player1.playerScore.value++;
    }

    public void LoadSinglePlayer()
    {
        SceneManager.LoadScene("SingleplayerScene");
    }

    public void LoadMultiplayer()
    {
        SceneManager.LoadScene("MultiplayerScene");
    }

}
        
