
/* This file is for notes and lists for making the game



Current luck value placements are, when an enemy misses + 1, when its an enemies turn and their
health is even and your health odd, when you get any sort of luck

       inFile >> File1_Name >> File1_Used >> File1_pName >> File1_gPosition;
       inFile  >> File1_Dungeon_BossRoom >> File1_Dungeon_Chest >> File1_Dungeon_Crank >> File1_Dungeon_CrownPuzzle;
       inFile >> File1_Dungeon_Crowns >> File1_Dungeon_dCrown >> File1_Dungeon_dCrown >> File1_Dungeon_dStatue;
       inFile >> File1_Dungeon_eCrown >> File1_Dungeon_Entrance >> File1_Dungeon_eStatue >> File1_Dungeon_FountainSet1;
       inFile >> File1_Dungeon_FountainSet2 >> File1_Dungeon_FountainSet3 >> File1_Dungeon_LeftWing >> File1_Dungeon_MainFountain;
       inFile >> File1_Dungeon_rCrown >> File1_Dungeon_rCrown >> File1_Dungeon_rStatue >> File1_Dungeon_RightWing;
       inFile >> File1_Dungeon_sCrown >> File1_Dungeon_sStatue >> File1_Dungeon_Wings >> File1_Forest_Daisy;
       inFile >> File1_Forest_Gate >> File1_Forest_Hairpin >> File1_Forest_Jewel >> File1_Forest_Mushrooms;
       inFile >>  File1_Grandmas_Items >> File1_Kuhar;
       inFile >> File1_NymphAttack >> File1_pCoins >> File1_pElixers >> File1_pFood;
       inFile >> File1_Player_Armor >> File1_Player_Damage >> File1_Player_Defense >> File1_Player_Health;
       inFile >> File1_Player_MaxHealth >> File1_Player_Shield >> File1_Player_WoodenSword >> File1_Player_XP;
       inFile >> File1_pLuck >> File1_RandomLuckValue >> File1_sCutscene_Elder;
       inFile >> File1_sCutscene_End >> File1_sCutscene_GrandmaHelps >> File1_sCutscene_GrandmasList >> File1_sCutscene_OldMan1;
       inFile >> File1_sCutscene_OldMan2 >> File1_sminiScene_Aida >> File1_sminiScene_Chasm >> File1_sminiScene_Dam;
       inFile >> File1_sminiScene_DungeonEnter >> File1_sminiScene_FirstEnemy >> File1_sminiScene_Kuhar >> File1_sminiScene_NymphAppears;
       inFile >> File1_sStatus >> File1_Tiki >> File1_Town_Bushes >> File1_Town_Chest;
       inFile >> File1_Town_Cookbook >> File1_Town_Fountain >> File1_Town_Hilda >> File1_Town_InnDesk;
       inFile >> File1_Town_InnTable >> File1_Town_Paper >> File1_Town_Stove >> File1_Town_SwordRoom;
       inFile >> File1_TravelStatus >> File1_Village_Book >> File1_Village_Enter >> File1_Village_InnTable;
       inFile >> File1_Village_JewelCoins >> File1_Village_Key >> File1_Village_Necklace >> File1_YourHouse_Chest;
       inFile >> File1_YourHouse_Desk >> File1_YourHouse_Fireplace >> File1_YourHouse_Stove >> File1_Used;





    //if(File1_Used == false)
    //{
        cout << "\n\n\n\n\n\n\n                             ";
        animationText = "Name Your Save File..."; FastText();
        cout << "                                  ----------" << endl;
        cout << "                                  ";
        cin >> File1_Name;
        File1_Used = true;
   // }
    /*else if(File1_Used == true && File2_Used == false)
    {
        cout << "\n\n\n\n\n\n\n                             ";
        animationText = "Name Your Save File..."; FastText();
        cout << "                                  ----------" << endl;
        cout << "                                  ";
        cin >> File2_Name;
        File2_Used = true;
    }
    else if(File1_Used == true && File2_Used == true && File3_Used == false)
    {
        cout << "\n\n\n\n\n\n\n                             ";
        animationText = "Name Your Save File..."; FastText();
        cout << "                                  ----------" << endl;
        cout << "                                  ";
        cin >> File3_Name;
        File3_Used = true;
    }
    else if(File1_Used == true && File2_Used == true && File3_Used == true)
    {
        cout << "\n\n\n\n\n\n" << endl;
        cout << "There are no save files left! Erase one?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << endl;
        text
        cout << endl;
        cout << endl;
        if(decision == 1)
        {
            cout << "Which save file do you want to replace?" << endl;
            cout << endl;
            cout << "1. " << File1_Name << endl;
            cout << "2. " << File2_Name << endl;
            cout << "3. " << File3_Name << endl;
            text
            cout << endl;
            switch(decision)
            {
            case 1:
                cout << "Erasing Save File" << endl;
                cout << endl;
                cout << endl;
                animationText = " . . . ";
                SlowText();
                Pause();
                cout << "Save File Deleted." << endl; Pause();
                //this is where you would reset everything
                cout << endl; cout << endl;
                ClearScreen();
                cout << "\n\n\n\n\n\n\n                             ";
                animationText = "Name Your Save File..."; FastText();
                cout << "                                  ----------" << endl;
                cout << "                                  ";
                cin >> File1_Name;
                //add new game file stuff for one here to reset
                break;
            case 2:
                cout << "Erasing Save File" << endl;
                cout << endl;
                cout << endl;
                animationText = " . . . ";
                SlowText();
                Pause();
                cout << "Save File Deleted." << endl; Pause();
                //heres where you would reset everything
                //
                cout << endl; cout << endl;
                ClearScreen();
                cout << "\n\n\n\n\n\n\n                             ";
                animationText = "Name Your Save File..."; FastText();
                cout << "                                  ----------" << endl;
                cout << "                                  ";
                cin >> File2_Name;
                break;
                //reset file two
            case 3:
                cout << "Erasing Save File" << endl;
                cout << endl;
                cout << endl;
                animationText = " . . . ";
                SlowText();
                Pause();
                cout << "Save File Deleted." << endl; Pause();
                cout << endl; cout << endl;
                ClearScreen();
                cout << "\n\n\n\n\n\n\n                             ";
                animationText = "Name Your Save File..."; FastText();
                cout << "                                  ----------" << endl;
                cout << "                                  ";
                cin >> File3_Name;
                break;
                //reset file three



            }
        }
        else if(decision == 2)
        {

        }
    }
*/


bugs:------------------------------------------

traveling menu goes twice when choosing area twoe
textcolor for thelper dont work


TO DO:------------------------


//Add in a transition every time you enter a new area or building. Should have a door (gate,etc.) sound effect
//along with the screen fading dark for a short amount of time. (short for each regular buidling, longer for new areas


NOTES:-----------------------------------------------

//reason color doesnt work in non cutscenes is because topscreen makes color white
//might be able to get rid of tSpeaker mostly with cName switch


//the reason sometimes a string to string comparison like enemy to skeleton or bull doesnt work
//is because if you leave two strings declared with nothing assigned to them like string bull and string skeleton
//then by defualt they will both equal zero/empty, so when you check which one it is it will come back
//enemy is all of them because no matter which it is all are empty so it equals all of them. to fix the
//problem just go into the initilization of the variables and just add random stuff to them so they are different
//you dont even need to use whatever you put as their string





//make a code input option where you can type in change coins etc and if it matches up with preset variables it
//can change something about the game. Limited but useful. setCoins, setHealth, etc.




//error function cannot be defined before{

means that there is a brace missing in a function somewhere in the file, search all them and fix it and you
should be fine















Procedures:

When creating an item in the game that is only used once, instead of rendering
it false again when used, instead add the sequence in which it is used into the
item screen display so that it knows to no longer display the item in inventory
without rendering it false and attainable again with no purpose.



Whenever adding the code for a random battle when entering an area, m,ake sure
the game checks for a game over before bringing the person to position after the battle




A FEW NOTES:


*   sSomething means its a status variable

*   tSomething means its a text variable

* Number system sheet for areas

The First digit is always the area. So Area ones rooms all begin with a one, twos all
begin with a two, etc.

The travel zone of each area is always just the area code number with no room number code after
it

The next numbers are the room code. Usually just one more digit, although if an area has more than that
there might be two digits on the end of some.

Area One_____Your House

1 - Travel Zone (Garden)
11 - Hallway
12 - Kitchen
13 - Library
14 - Your Room
15 - Roses Room
16 - Entryway

Area Two______ Town


2 - Travel Zone (Gate)
21 - Main Square
22 - Shop
23 - House Path
24 - Inn
25 - Upstairs Room in in which you can sleep (only unlocked when bought a night stay)
26 - Old Mans House
27 - Upstairs Room in old mans house with sword and chest of collectives
28 - Grandmas House





