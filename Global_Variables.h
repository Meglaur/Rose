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




                                    //RANDOM USEFUL REOCURRING VARIABLES
int LoopNumber;
int decision;
bool movement = false;
int RandomLuckValue;
//File1
int File1_RandomLuckValue = false;




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
//File1
string File1_pName;


int Player_MaxHealth = 20, Player_Health = 20, Player_Defense = 1, Player_XP = 0, Player_Damage = 2;
//File1
int File1_Player_MaxHealth = 20, File1_Player_Health = 20, File1_Player_Defense = 1, File1_Player_XP = 0, File1_Player_Damage = 2;




                                    //GAME STATUS VARIABLES

//game progress checkpoint status
int sStatus;
int File1_sStatus;


//current available areas to travel based on game progress
int TravelStatus = 1;
//File1
int File1_TravelStatus = 1;



//activites statuses
bool Inn = false;





                                        //CUTSCENES


//these start off as false and turn true as the player sees each cutscene, so that they don't repeat

//Cutscenes
bool sCutscene_End = false, sCutscene_OldMan1 = false, sCutscene_OldMan2 = false, sCutscene_GrandmaHelps = false, sCutscene_GrandmasList = false;
bool sCutscene_Elder = false;
//File1
bool File1_sCutscene_End = false, File1_sCutscene_OldMan1 = false, File1_sCutscene_OldMan2 = false, File1_sCutscene_GrandmaHelps = false, File1_sCutscene_GrandmasList = false;
bool File1_sCutscene_Elder = false;



//Miniscenes
bool sminiScene_Kuhar = false, sminiScene_Aida = false, sminiScene_FirstEnemy = false;
bool sminiScene_DungeonEnter = false, sminiScene_NymphAppears = false, sminiScene_Dam = false, sminiScene_Chasm = false;

//File1
bool File1_sminiScene_Kuhar = false, File1_sminiScene_Aida = false, File1_sminiScene_FirstEnemy = false;
bool File1_sminiScene_DungeonEnter = false, File1_sminiScene_NymphAppears = false, File1_sminiScene_Dam = false, File1_sminiScene_Chasm = false;






//Cutscenes playing status variables

bool Grandmas_Items = false;
//File1
bool File1_Grandmas_Items = false;



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
//File1
bool File1_YourHouse_Stove = false, File1_YourHouse_Chest = false, File1_YourHouse_Fireplace = false, File1_YourHouse_Desk = false;


//AREA 2
bool Town_Fountain, Town_InnDesk, Town_InnTable = true, Town_Bushes, Town_Stove, Town_Chest, Town_Hilda;
//File1
bool File1_Town_Fountain, File1_Town_InnDesk, File1_Town_InnTable = true, File1_Town_Bushes, File1_Town_Stove, File1_Town_Chest, File1_Town_Hilda;


//AREA 3
bool Dungeon_Chest;
//File1
bool File1_Dungeon_Chest;


//AREA 4
bool Village_InnTable = true, Village_JewelCoins = false;
//File1
bool File1_Village_InnTable = true, File1_Village_JewelCoins = false;




                                                //ITEMS

//MAJOR ITEMS
bool Player_WoodenSword, Player_Shield, Player_Armor;
//File1
bool File1_Player_WoodenSword, File1_Player_Shield, File1_Player_Armor;


//PLAYER COLLECTIVE ITEMS
int pElixers = 0, pLuck = 0,  pCoins = 0, pFood = 0;
//File1
int File1_pElixers = 0, File1_pLuck = 0,  File1_pCoins = 0, File1_pFood = 0;


//AREA 2
bool Town_Paper, Town_Cookbook;
//File1
bool File1_Town_Paper, File1_Town_Cookbook;


//AREA 3
bool Forest_Mushrooms, Forest_Daisy, Forest_Jewel, Forest_Hairpin;
//File1
bool File1_Forest_Mushrooms, File1_Forest_Daisy, File1_Forest_Jewel, File1_Forest_Hairpin;


//AREA 4
bool Village_Necklace, Village_Key, Village_Book;
//File1
bool File1_Village_Necklace, File1_Village_Key, File1_Village_Book;







                                    //ROOM ACCESSIBILITY VARIABLES

//AREA 2
bool Town_SwordRoom;
//File1
bool File1_Town_SwordRoom;

//AREA 3
bool Forest_Gate, Dungeon_Entrance, Dungeon_BossRoom;
//File1
bool File1_Forest_Gate, File1_Dungeon_Entrance, File1_Dungeon_BossRoom;

//AREA 4
bool Village_Enter;
//File1
bool File1_Village_Enter;



                                        //PUZZLE VARIABLES

//AREA 3
bool Dungeon_Crowns, Dungeon_CrownPuzzle;
int Dungeon_rCrown, Dungeon_sCrown, Dungeon_dCrown, Dungeon_eCrown, Dungeon_rStatue, Dungeon_sStatue, Dungeon_dStatue, Dungeon_eStatue;
//File1
bool File1_Dungeon_Crowns, File1_Dungeon_CrownPuzzle;
int File1_Dungeon_rCrown, File1_Dungeon_sCrown, File1_Dungeon_dCrown, File1_Dungeon_eCrown, File1_Dungeon_rStatue, File1_Dungeon_sStatue, File1_Dungeon_dStatue, File1_Dungeon_eStatue;




bool NymphAttack, Dungeon_Crank;
//File1
bool File1_NymphAttack, File1_Dungeon_Crank;

int nymphPosition;



bool Dungeon_Wings = false, Dungeon_LeftWing = false, Dungeon_RightWing = false;
//File1
bool File1_Dungeon_Wings = false, File1_Dungeon_LeftWing = false, File1_Dungeon_RightWing = false;




bool Dungeon_FountainSet1, Dungeon_FountainSet2, Dungeon_FountainSet3, Dungeon_MainFountain;
int Dungeon_FountainSet = 0, Dungeon_FountainCycle = 0, Dungeon_FountainOrder = 0, Dungeon_FountainGuess = 0;
int Dungeon_WhichFountain = 0, Dungeon_FountainOrder_Position1 = 0, Dungeon_FountainOrder_Position2 = 0, Dungeon_FountainOrder_Position3 = 0, Dungeon_FountainOrder_Position4 = 0;
//File1----
bool File1_Dungeon_FountainSet1, File1_Dungeon_FountainSet2, File1_Dungeon_FountainSet3, File1_Dungeon_MainFountain;
//------




bool FirePuzzle_PillarsON;


bool Rune_34, Rune_35, Rune_36, Rune_37;














                                        //CONVERSION VARIABLES

string food = "food", coins = "coins", luck = "luck", elixers = "elixers";



                                        //SIDEQUEST STATUSES
bool Tiki, Kuhar, Aida;
//File1
bool File1_Tiki, File1_Kuhar, File_Aida;





                                    //GAME BACKROUND VARIABLES

//Game Speed Variables
int attackbar_speed, enemyframe_speed;

//Game Over Variables
bool Gameover = false;

//Controller variables
        //overall game controller
            int gMove;

        //battle menu screen controller
            int BattleScreen_Move;

//Players current position in the game world
            int gPosition;
            //File1
            int File1_gPosition;

//Display Variables


        //current movement options
            string dirUp, dirDown, dirLeft, dirRight, dirInt;






                                        //TEXT INFO



//Text Blocks/name data in game, as well as used for color based on character speaking
string tControls = "Controls: \n W: Go Forward \n A: Go Left \n D: Go Right \n S: Go Backwards \n I: Interact with object \n U: View current status \n O: Look at items \n P: Use an item\n L: Save Game\n C: Show Controls. *You can press C anytime to review these controls";
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


//File 2
string File2_Name;
bool File2_Used;

//File 3
string File3_Name;
bool File3_Used;

