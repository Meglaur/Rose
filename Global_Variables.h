//Just a bunch of freaking global variables for every instance you can think of. Its all here, probably bad coding
//on my part, but hey, it works, and its organized, so I'm not complaining.



//for some reason my initialization code is here but I ain't gonna mess with it.
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <windows.h>
#include <conio.h>


using namespace std;




                                    //RANDOM USEFUL REOCURRING VARIABLES
int LoopNumber;
int decision;
bool movement = false;




                                    //MINIGAME VARIABLES
bool minigame_win = false;
bool exitminigame = false;



                                    //MENU VARIABLES
bool Title_Screen = true;
int fPosition, fMove;
int dPosition;
int ePosition;







                                    //PLAYER VARIABLES


string pName;
int Player_MaxHealth = 20, Player_Health = 20, Player_Defense = 1, Player_XP = 0, Player_Damage = 2;





                                    //GAME STATUS VARIABLES

//game progress checkpoint status
int sStatus;
int File1_sStatus;

//current available areas to travel based on game progress
int TravelStatus = 1;

//activites statuses
bool Inn = false;





                                        //CUTSCENES


//these start off as false and turn true as the player sees each cutscene, so that they don't repeat

//Cutscenes
bool sCutscene_End = false, sCutscene_OldMan1 = false, sCutscene_OldMan2 = false, sCutscene_GrandmaHelps = false, sCutscene_GrandmasList = false;
bool sCutscene_Elder = false;



//Miniscenes
bool sminiScene_Kuhar = false, sminiScene_Aida = false, sminiScene_FirstEnemy = false;
bool sminiScene_DungeonEnter = false, sminiScene_NymphAppears = false, sminiScene_Dam = false, sminiScene_Chasm = false;
bool sminiScene_MountainTrail = false;



//Cutscenes playing status variables

bool Grandmas_Items = false;



                                        //BATTLE

//Battle Randomizer Variables
int RandomEncounter;


//Enemy Class Variables

string Enemy_Approach, Enemy_Defeat, Enemy_Name, Enemy_Drops, Enemy_DropText, Enemy_HealthBar;
int Enemy_Health, Enemy_Defense, Enemy_Damage, Enemy_XP, Enemy_MaxHealth, Enemy_ItemHealthRegain;
int Enemy_DefenseGame, Enemy_Coindrops, Enemy_Fooddrops, Enemy_Elixerdrops, Enemy_Stages;
bool Enemy_Item = false; bool Enemy_ItemUsed = false; bool Enemy_UsingItem, Enemy_Run = true;
int BossStage;



//Enemies!!


//Forest Enemies
string Three_AngryFlower = "Flower";


//Forest Dungeon Enemies
string Three_Skeleton = "Skeleton";

//Forest Dungeon Boss
string Boss_ForestDungeon;




//Battle Decision/Backround Variables
int BattleChoice, Player_Hit, Enemy_Hit;
bool eTurn = false;

//attack minigame variables
int Battle_Attack, aPosition;

//defense minigame variables

int Battle_Block;


        //battle statuses
            bool eBattleTurn = false, Player_DefenseTurn = false, BattleEvent = false; bool Battle_Run = false;
            bool Boss = false; bool Battle_Defend = false;
            int eMove;








                                        //ITEM CONTAINERS IN WORLD

//AREA 1
bool YourHouse_Stove = false, YourHouse_Chest = false, YourHouse_Fireplace = false, YourHouse_Desk = false;

//AREA 2
bool Town_Fountain, Town_InnDesk, Town_InnTable = true, Town_Bushes, Town_Stove, Town_Chest, Town_Hilda;

//AREA 3
bool Dungeon_Chest;

//AREA 4
bool Village_InnTable = true;





                                                //ITEMS

//MAJOR ITEMS
bool Player_Coat, Player_WoodenSword, Player_SteelSword, Player_Shield, Player_Armor;

//PLAYER COLLECTIVE ITEMS
int pElixers = 0, pLuck = 0,  pCoins = 0, pFood = 0;

//AREA 2
bool Town_Paper;

//AREA 3
bool Forest_Mushrooms, Forest_Daisy, Forest_Jewel, Forest_Hairpin;

//AREA 4
bool Village_Necklace, Village_Key;

//AREA ????
bool City_Cookbook;




                                    //ROOM ACCESSIBILITY VARIABLES

//AREA 2
bool Town_SwordRoom;

//AREA 3
bool Forest_Gate, Dungeon_Entrance, Dungeon_BossRoom;

//AREA 4
bool Village_Enter;



                                        //PUZZLE VARIABLES

//AREA 3
bool Dungeon_Crowns, Dungeon_CrownPuzzle;
int Dungeon_rCrown, Dungeon_sCrown, Dungeon_dCrown, Dungeon_eCrown, Dungeon_rStatue, Dungeon_sStatue, Dungeon_dStatue, Dungeon_eStatue;

bool NymphAttack, Dungeon_Crank;
int nymphPosition;

bool Dungeon_Wings = false, Dungeon_LeftWing = false, Dungeon_RightWing = false;

bool Dungeon_FountainSet1, Dungeon_FountainSet2, Dungeon_FountainSet3, Dungeon_MainFountain;
int Dungeon_FountainSet = 0, Dungeon_FountainCycle = 0, Dungeon_FountainOrder = 0, Dungeon_FountainGuess = 0;
int Dungeon_WhichFountain = 0, Dungeon_FountainOrder_Position1 = 0, Dungeon_FountainOrder_Position2 = 0, Dungeon_FountainOrder_Position3 = 0, Dungeon_FountainOrder_Position4 = 0;

bool FirePuzzle_PillarsON;
















                                        //CONVERSION VARIABLES

string food = "food", coins = "coins", luck = "luck", elixers = "elixers";



                                        //SIDEQUEST STATUSES
bool Tiki, Kuhar, Aida;





                                    //GAME BACKROUND VARIABLES

//Game Over Variables
bool Gameover = false;

//Controller variables
        //overall game controller
            int gMove;

        //battle menu screen controller
            int BattleScreen_Move;

//Players current position in the game world
            int gPosition;

//Display Variables


        //current movement options
            string dirUp, dirDown, dirLeft, dirRight, dirInt;






                                        //TEXT INFO



//Text Blocks/name data in game, as well as used for color based on character speaking
string tControls = "Controls: \n W: Go Forward \n A: Go Left \n D: Go Right \n S: Go Backwards \n I: Interact with object \n U: View current status \n O: Look at items \n P: Use an item\n L: Title Screen\n C: Show Controls. *You can press C anytime to review these controls";
string tRose = "Rose: ";
string tUnknown = "???: ";
string NymphFollowMessage = "The Nymph hears you, and gets closer!";

//Backround game text info
string tTopScreen, tItemGet, tBattle, text, White, Enemy, tHelper;
string cName;
bool Cutscene, Slowtext, Superfasttext;
string animationText, tHealthBar, tSpeaker;
bool animationpause;
bool textswitch = false;






                                //DIALOGUE SWITCHING VARIABLES

int Loni = 0;





                                        //USER FILES

//File 1
string File1_Name;
bool File1_Used;

int File1_Health, File1_Coins, File1_Luck, File1_Elixers, File1_Food, File1_MaxHealth, File1_Defense, File1_Damage;


//File 2
string File2_Name;
bool File2_Used;

//File 3
string File3_Name;
bool File3_Used;

