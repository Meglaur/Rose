//Just a bunch of freaking global variables for every instance you can think of. Its all here, probably bad coding
//on my part, but hey, it works, and its organized, so I'm not complaining.



//for some reason my initialization code is here but I ain't gonna mess with it.
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <istream>
#include <ostream>
#include <sstream>


using namespace std;


//DIALOGUE SWITCHING VARIABLES
int Loni = 0;

//Cutscenes playing status variables
bool Grandmas_Items = false;

//Battle Randomizer Variables
int RandomEncounter;
int BossStage;

//RANDOM USEFUL REOCURRING VARIABLES
int LoopNumber;
int decision;
bool movement = false;
int RandomLuckValue;

//MINIGAME VARIABLES
bool minigame_win = false;
bool exitminigame = false;

//MENU VARIABLES
bool Title_Screen = true;
int fPosition, fMove, dPosition, ePosition, aPosition;

//game progress checkpoint status
int sStatus;

//current available areas to travel based on game progress
int TravelStatus = 1;

//activites statuses
bool Inn = false;

//Battle Decision/Backround Variables
int BattleChoice;
bool eTurn = false;

//attack minigame variables
int Battle_Attack;

//defense minigame variables
int Battle_Block;

//battle statuses
bool eBattleTurn = false, BattleEvent = false; bool Battle_Run = false;
bool Boss = false; bool Battle_Defend = false;
int eMove;


//CONVERSION VARIABLES
string food = "food", coins = "coins", luck = "luck", elixers = "elixers", enemy;

//SIDEQUEST STATUSES
bool Tiki, Kuhar, Aida;

//GameModes
string CreatorMode = "Creator", PlayerMode = "Player", gameMode = PlayerMode;

//Creator Controls
int CreatorCommand;

//Game Speed Variables
int attackbar_speed, enemyframe_speed;

//Game Over Variables
bool Gameover = false;

//Controller variables
int gMove;

//Players current position in the game world
int gPosition;

//current movement options
string dirUp, dirDown, dirLeft, dirRight, dirInt;

//text variables
bool Cutscene, Slowtext, Superfasttext;
string animationText;
bool animationpause;
bool textswitch = false;






            //TEXT INFO
            class TextInfo
            {
                public:
                    string NymphFollowMessage  = "The Nymph hears you, and gets closer!", TopScreen, HealthBar;
                    string Controls = "Controls: \n W: Go Forward \n A: Go Left \n D: Go Right \n S: Go Backwards \n I: Interact with object \n U: View current status \n O: Look at items \n P: Use an item\n L: Save Game\n C: Show Controls. *You can press C anytime to review these controls";
            }Text;



            //CHARACTER
            class Character
            {
                public:
                    string Rose = "Rose: ", Unknown = "???: ", Speaker, Battle, Helper, Narrator, Name;
            }Character;



            //USER FILES
            class File
            {
                public:
                    string Name;
                    bool Used;
                    int gPosition;
            }File1, File2, File3;



            //CUTSCENES
            class Cutscene
            {
                public:
                    bool End, OldMan1, OldMan2, GrandmaHelps, GrandmasList, Elder;
                    bool Kuhar, Aida, FirstEnemy, DungeonEnter, NymphAppears, Dam, Chasm, tutorial;

            }cutscene, miniscene;



            //PLAYER
            class Player
            {
                public:
                    int MaxHealth = 20, Health = 20, Defense = 1, XP = 0, Damage = 2, Hit, Luck;
                    string Name;
                    bool DefenseTurn = false;

            }Player;



            //ENEMY
            class Enemy
            {
                public:
                    string Approach, Defeat, Name, Drops, DropText, HealthBar;
                    int Health, Defense, Damage, XP, MaxHealth, ItemHealthRegain, DefenseGame, Coindrops, Fooddrops, Elixerdrops, Stages, Hit;
                    bool Item, ItemUsed, UsingItem; bool Run = true;
                    string AngryFlower = "Flower", Skeleton = "Skeleton", Boss;
            }Enemy;




            //CONTAINERS
            class Container
            {
                public:
                    bool Stove, Chest, Fireplace, Desk, Fountain, InnDesk, InnTable, Bushes, Hilda, JewelCoins;

            }Town, Village, House, Forest, Dungeon;



            //ITEMS
            class Item
            {
            public:
                    bool WoodenSword, Shield, Armor, Paper, Cookbook, Mushrooms, Daisy, Jewel, JewelCoins, Hairpin, Necklace, Key, Book;
                    int Elixers = 0, Luck = 0, Coins = 0, Food = 0;
             }Item;



            //ROOM ACCESS
            class RoomAccess
            {
                public:
                    bool SwordRoom, Gate, Boss, Dungeon, Village;
            }Room;



            //PUZZLE VARIABLES
            bool Crowns, CrownPuzzle, NymphAttack, Crank, FirePuzzle_PillarsON, Rune_34, Rune_35, Rune_36, Rune_37;
            int rCrown, sCrown, dCrown, eCrown, rStatue, sStatue, dStatue, eStatue, nymphPosition;
            bool Wings, LeftWing, RightWing, FountainSet1, FountainSet2, FountainSet3, MainFountain;
            int FountainSet, FountainCycle, FountainGuess, WhichFountain, FountainOrder;

            class fountainOrder
            {
                public:
                    int Position1 = 0, Position2 = 0, Position3 = 0, Position4 = 0;
            }fountainOrder;
