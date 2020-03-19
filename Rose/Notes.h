
/* This file is for notes and lists for making the game



Current luck value placements are, when an enemy misses + 1, when its an enemies turn and their
health is even and your health odd, when you get any sort of luck

       inFile >> File1.Name >> File1.Used >> File1_Player.Name >> File1.gPosition;
       inFile  >> File1_Room.Boss >> File1_Chest >> File1_Crank >> File1_CrownPuzzle;
       inFile >> File1_Crowns >> File1_dCrown >> File1_dCrown >> File1_dStatue;
       inFile >> File1_eCrown >> File1_Room.Dungeon >> File1_eStatue >> File1_FountainSet1;
       inFile >> File1_FountainSet2 >> File1_FountainSet3 >> File1_LeftWing >> File1_MainFountain;
       inFile >> File1_rCrown >> File1_rCrown >> File1_rStatue >> File1_RightWing;
       inFile >> File1_sCrown >> File1_sStatue >> File1_Wings >> File1_Item.Daisy;
       inFile >> File1_Item.Gate >> File1_Item.Hairpin >> File1_Item.Jewel >> File1_Item.Mushrooms;
       inFile >>  File1_Grandmas_Items >> File1_Kuhar;
       inFile >> File1_NymphAttack >> File1_Item.Coins >> File1_Item.Elixers >> File1_Item.Food;
       inFile >> File1_Item.Armor >> File1_Player.Damage >> File1_Player.Defense >> File1_Player.Health;
       inFile >> File1_Player.MaxHealth >> File1_Item.Shield >> File1_Item.WoodenSword >> File1_Player.XP;
       inFile >> File1_Player.Luck >> File1_RandomLuckValue >> File1_cutscene.Elder;
       inFile >> File1_cutscene.End >> File1_cutscene.GrandmaHelps >> File1_cutscene.GrandmasList >> File1_cutscene.OldMan1;
       inFile >> File1_cutscene.OldMan2 >> File1_miniscene.Aida >> File1_miniscene.Chasm >> File1_miniscene.Dam;
       inFile >> File1_miniscene.DungeonEnter >> File1_miniscene.FirstEnemy >> File1_miniscene.Kuhar >> File1_miniscene.NymphAppears;
       inFile >> File1_sStatus >> File1_Tiki >> File1_Town.Bushes >> File1_Item.Chest;
       inFile >> File1_Item.Cookbook >> File1_Item.Fountain >> File1_Item.Hilda >> File1_Item.InnDesk;
       inFile >> File1_Item.InnTable >> File1_Item.Paper >> File1_Item.Stove >> File1_Room.SwordRoom;
       inFile >> File1_TravelStatus >> File1_Item.Book >> File1_Room.Village >> File1_Item.InnTable;
       inFile >> File1_Item.JewelCoins >> File1_Item.Key >> File1_Item.Necklace >> File1_House.Chest;
       inFile >> File1_House.Desk >> File1_House.Fireplace >> File1_House.Stove >> File1.Used;





    //if(File1.Used == false)
    //{
        cout << "\n\n\n\n\n\n\n                             ";
        animationText = "Name Your Save File..."; FastText();
        cout << "                                  ----------" << endl;
        cout << "                                  ";
        cin >> File1.Name;
        File1.Used = true;
   // }
    /*else if(File1.Used == true && File2.Used == false)
    {
        cout << "\n\n\n\n\n\n\n                             ";
        animationText = "Name Your Save File..."; FastText();
        cout << "                                  ----------" << endl;
        cout << "                                  ";
        cin >> File2.Name;
        File2.Used = true;
    }
    else if(File1.Used == true && File2.Used == true && File3.Used == false)
    {
        cout << "\n\n\n\n\n\n\n                             ";
        animationText = "Name Your Save File..."; FastText();
        cout << "                                  ----------" << endl;
        cout << "                                  ";
        cin >> File3.Name;
        File3.Used = true;
    }
    else if(File1.Used == true && File2.Used == true && File3.Used == true)
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
            cout << "1. " << File1.Name << endl;
            cout << "2. " << File2.Name << endl;
            cout << "3. " << File3.Name << endl;
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
                cin >> File1.Name;
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
                cin >> File2.Name;
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
                cin >> File3.Name;
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
textcolor for Character.Helper dont work


TO DO:------------------------


//Add in a transition every time you enter a new area or building. Should have a door (gate,etc.) sound effect
//along with the screen fading dark for a short amount of time. (short for each regular buidling, longer for new areas


NOTES:-----------------------------------------------

//reason color doesnt work in non cutscenes is because topscreen makes color white
//might be able to get rid of Character.Speaker mostly with Character.Name switch


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





