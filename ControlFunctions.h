//This file holds the code for pop-ups/functions you can ask the game to perform, such as traveling to another
//area in a travel zone or saving the game. The backround movement functions which make up the basis of the "controller"
//call on these things based on what buttons the user presses


#include "Area1_YourHouse.h"
#include "Area3_Forest.h"
#include "Area4_ElfVillage.h"


void Save()
{

    void ClearScreen();
    void FastText();


    ClearScreen();
    cout << "\n\n\n\n\n\n\n\n" << endl;
    cout << "                               ";
    cout << "Saving Game" << endl;
    Pause();
    cout << "                               ";
    animationText = "  . . .";
    SlowText();
    Pause();


       File1_Dungeon_BossRoom = Dungeon_BossRoom;
       File1_Dungeon_Chest = Dungeon_Chest;
       File1_Dungeon_Crank = Dungeon_Crank;
       File1_Dungeon_CrownPuzzle = Dungeon_CrownPuzzle;
       File1_Dungeon_Crowns = Dungeon_Crowns;
       File1_Dungeon_dCrown = Dungeon_dCrown;
       File1_Dungeon_dStatue = Dungeon_dStatue;
       File1_Dungeon_eCrown = Dungeon_eCrown;
       File1_Dungeon_Entrance = Dungeon_Entrance;
       File1_Dungeon_eStatue = Dungeon_eStatue;
       File1_Dungeon_FountainSet1 = Dungeon_FountainSet1;
       File1_Dungeon_FountainSet2 = Dungeon_FountainSet2;
       File1_Dungeon_FountainSet3 = Dungeon_FountainSet3;
       File1_Dungeon_LeftWing = Dungeon_LeftWing;
       File1_Dungeon_MainFountain = Dungeon_MainFountain;
       File1_Dungeon_rCrown = Dungeon_rCrown;
       File1_Dungeon_RightWing = Dungeon_RightWing;
       File1_Dungeon_rStatue = Dungeon_rStatue;
       File1_Dungeon_sCrown = Dungeon_sCrown;
       File1_Dungeon_sStatue = Dungeon_sStatue;
       File1_Dungeon_Wings = Dungeon_Wings;
       File1_Forest_Daisy = Forest_Daisy;
       File1_Forest_Gate = Forest_Gate;
       File1_Forest_Hairpin = Forest_Hairpin;
       File1_Forest_Jewel = Forest_Jewel;
       File1_Forest_Mushrooms = Forest_Mushrooms;
       File1_gPosition = gPosition;
       File1_Grandmas_Items = Grandmas_Items;
       File1_Kuhar = Kuhar;
       File1_NymphAttack = NymphAttack;
       File1_pCoins = pCoins;
       File1_pElixers = pElixers;
       File1_pFood = pFood;
       File1_Player_Armor = Player_Armor;
       File1_Player_Damage = Player_Damage;
       File1_Player_Defense = Player_Defense;
       File1_Player_Health = Player_Health;
       File1_Player_MaxHealth = Player_Health;
       File1_Player_Shield = Player_Shield;
       File1_Player_WoodenSword = Player_WoodenSword;
       File1_Player_XP = Player_XP;
       File1_pLuck = pLuck;
       File1_pName = pName;
       File1_RandomLuckValue = RandomLuckValue;
       File1_sCutscene_Elder = sCutscene_Elder;
       File1_sCutscene_End = sCutscene_End;
       File1_sCutscene_GrandmaHelps = sCutscene_GrandmaHelps;
       File1_sCutscene_GrandmasList = sCutscene_GrandmasList;
       File1_sCutscene_OldMan1 = sCutscene_OldMan1;
       File1_sCutscene_OldMan2 = sCutscene_OldMan2;
       File1_sminiScene_Aida = sminiScene_Aida;
       File1_sminiScene_Chasm = sminiScene_Chasm;
       File1_sminiScene_Dam = sminiScene_Dam;
       File1_sminiScene_DungeonEnter = sminiScene_DungeonEnter;
       File1_sminiScene_FirstEnemy = sminiScene_FirstEnemy;
       File1_sminiScene_Kuhar = sminiScene_Kuhar;
       File1_sStatus = sStatus;
       File1_Tiki = Tiki;
       File1_Town_Bushes = Town_Bushes;
       File1_Town_Chest = Town_Chest;
       File1_Town_Cookbook = Town_Cookbook;
       File1_Town_Fountain = Town_Fountain;
       File1_Town_Hilda = Town_Hilda;
       File1_Town_InnDesk = Town_InnDesk;
       File1_Town_InnTable = Town_InnTable;
       File1_Town_Paper = Town_Paper;
       File1_Town_Stove = Town_Stove;
       File1_Town_SwordRoom = Town_SwordRoom;
       File1_TravelStatus =  TravelStatus;
       File1_Village_Book = Village_Book;
       File1_Village_Enter = Village_Enter;
       File1_Village_InnTable = Village_InnTable;
       File1_Village_JewelCoins = Village_JewelCoins;
       File1_Village_Key = Village_Key;
       File1_Village_Necklace = Village_Necklace;
       File1_YourHouse_Chest = YourHouse_Chest;
       File1_YourHouse_Desk = YourHouse_Desk;
       File1_YourHouse_Fireplace = YourHouse_Fireplace;
       File1_YourHouse_Stove = YourHouse_Stove;


       File1_Used = true;

        //fstream outFile;
        //outFile.open("User_File1.dat", ios_base::out);

        ofstream outFile;
        outFile.open("User_File1.dat");

       //string
       outFile << File1_Name << File1_pName;
       outFile << File1_Used << File1_Dungeon_Crowns;
       //int
       outFile << File1_Dungeon_dCrown << File1_Dungeon_dCrown << File1_Dungeon_dStatue << File1_Dungeon_eCrown << File1_Dungeon_eStatue;
       outFile << File1_Dungeon_rCrown << File1_Dungeon_rCrown << File1_Dungeon_rStatue;
       outFile << File1_Dungeon_BossRoom << File1_Dungeon_Chest << File1_Dungeon_Crank << File1_Dungeon_CrownPuzzle;
       outFile << File1_Dungeon_Entrance << File1_Dungeon_FountainSet1 << File1_Dungeon_FountainSet2 << File1_Dungeon_FountainSet3 << File1_Dungeon_LeftWing << File1_Dungeon_MainFountain;
       outFile << File1_Dungeon_sCrown << File1_Dungeon_sStatue << File1_pCoins << File1_pElixers << File1_pFood;
       outFile << File1_Player_Damage << File1_Player_Defense << File1_Player_Health << File1_Player_XP;
       outFile << File1_Player_MaxHealth << File1_pLuck << File1_RandomLuckValue << File1_gPosition;
       //bool
       outFile << File1_Dungeon_RightWing << File1_Dungeon_Wings << File1_Forest_Daisy;
       outFile << File1_Forest_Gate << File1_Forest_Hairpin << File1_Forest_Jewel << File1_Forest_Mushrooms;
       outFile <<  File1_Grandmas_Items << File1_Kuhar << File1_NymphAttack << File1_Player_Armor;
       outFile << File1_Player_Shield << File1_Player_WoodenSword  << File1_sCutscene_Elder;
       outFile << File1_sCutscene_End << File1_sCutscene_GrandmaHelps << File1_sCutscene_GrandmasList << File1_sCutscene_OldMan1;
       outFile << File1_sCutscene_OldMan2 << File1_sminiScene_Aida << File1_sminiScene_Chasm << File1_sminiScene_Dam;
       outFile << File1_sminiScene_DungeonEnter << File1_sminiScene_FirstEnemy << File1_sminiScene_Kuhar << File1_sminiScene_NymphAppears;
       outFile << File1_sStatus << File1_Tiki << File1_Town_Bushes << File1_Town_Chest;
       outFile << File1_Town_Cookbook << File1_Town_Fountain << File1_Town_Hilda << File1_Town_InnDesk;
       outFile << File1_Town_InnTable << File1_Town_Paper << File1_Town_Stove << File1_Town_SwordRoom;
       outFile << File1_TravelStatus << File1_Village_Book << File1_Village_Enter << File1_Village_InnTable;
       outFile << File1_Village_JewelCoins << File1_Village_Key << File1_Village_Necklace << File1_YourHouse_Chest;
       outFile << File1_YourHouse_Desk << File1_YourHouse_Fireplace << File1_YourHouse_Stove << File1_Used;

       outFile.close();




}

void Status()
{
    //This Function tells the player what part of the game they are at, and what they need to do next.
    //It's based off of the variable sStatus, which changes every time they complete something and
    //the game progresses.

    void Move(); void Debug(); void ClearScreen();

    switch(sStatus)
    {
        case 1:
            cout << "You just woke up to find your sister gone. You need to find\nyour Grandmother like Rose said." << endl;
            break;
        case 2:
            cout << "Your Grandma told you to equip yourself with a sword, shield,\nand some armor before you leave for the forest. " << endl;
            cout << endl;
            cout << "Items obtained:" << endl;
            if(Player_Armor == true)
            {
                cout << " - Armor" << endl;
            }
            if(Player_WoodenSword == true)
            {
                cout << " - Sword" << endl;
            }
            if(Player_Shield == true)
            {
                cout << " - Shield" << endl;
            }
            break;

        case 3:
            cout << "Grandma gave you a map to the forest, and has asked you to find the\nFira elf people somewhere in the woods." << endl;
            break;

        case 4:
            cout << "You've made it to the elf village, and a Fira named Loni\nhas told you to speak to the mayor about the castle." << endl;
            break;

        case 5:
            cout << "The Fira people asked you to help them fight against a\nterrible monster they face. You have agreed\nto help them in exchange for their help\ngetting to the Mountains. You need to find a way into the dungeon." << endl;
            break;

        case 6:
            cout << "You've entered the dungeon and need to make your way\nthrough it to defeat the boss and save the Fira." << endl;
            break;
    }

    Pause();
    ClearScreen();
    Debug(); Move();

}

void ItemScreen()
{

    void HealthBar();
    void Debug();
    void Move();
    void Pause();
    ClearScreen();






    cout << " _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << endl;
    HealthBar(); cout << "      XP: " << Player_XP;
    cout << "\n" << endl;
    cout << "  Coins: " << pCoins << endl;
    cout << "  Luck: " << pLuck << endl;
    cout << "  Defense: " << Player_Defense << endl;
    cout << "  Damage: " << Player_Damage << endl;
    cout << endl;
    cout << "                              Items:" << endl;
    cout << "            Elixers: " << pElixers << endl;
    cout << "               Food: " << pFood << endl;
    cout << endl;
    cout << endl;
    cout << "                           MajorItems:" << endl;
    cout << "            ";


    //once

    if(Player_WoodenSword == true) {cout << "Wooden Sword" << endl; cout << "            ";}

    if(Player_Shield == true) {cout << "Shield" << endl; cout << "            ";}

    if(Player_Armor == true) {cout << "Armor" << endl; cout << "            ";}

    if(Town_Paper == true && sCutscene_OldMan2 == false) {cout << "Paper" << endl; cout << "            ";}

    if(Forest_Daisy == true && Tiki == false) {cout << "Daisy" << endl; cout << "            ";}

    if(Forest_Jewel == true && Village_JewelCoins == false) {cout << "Jewel" << endl; cout << "            ";}

    if(Forest_Hairpin == true && Aida == false) {cout << "Aida's Hairpin" << endl; cout << "            ";}

    if(Village_Necklace == true) {cout << "Fira Necklace" << endl; cout << "            ";}

    if(Village_Book == true) {cout << "Rune Book" << endl; cout << "            ";}

    if(Town_Cookbook == true && Kuhar == false) {cout << "Cookbook" << endl; cout << "            ";}

    if(Village_Key == true && Dungeon_Chest == false){cout << "Strange bronze key" << endl; cout << "            ";}

    if(Dungeon_eCrown == 5) {cout << "Emerald Crown" << endl; cout << "            ";}

    if(Dungeon_sCrown == 5) {cout << "Sapphire Crown" << endl; cout << "            ";}

    if(Dungeon_rCrown == 5) {cout << "Ruby Crown" << endl; cout << "            ";}

    if(Dungeon_dCrown == 5) {cout << "Diamond Crown" << endl; cout << "            ";}

    if(Dungeon_Crank == true && sminiScene_Dam == false) {cout << "Crank" << endl; cout << "            ";}

    if(Dungeon_Wings == true) {cout << "Mechanical Wings" << endl; cout << "            ";}

    if(Dungeon_RightWing == true) {cout << "Right Wing Piece" << endl; cout << "            ";}

    if(Dungeon_LeftWing == true) {cout << "Left Wing Piece" << endl; cout << "            ";}

    cout << endl;
    cout << endl;
    cout << " _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    Pause();

    ClearScreen();
    Debug(); Move();

}

void UseItem()
{

    void Pause();
    void Debug();
    void Move();


    cout << "Use Item:" << endl;
    cout << "1. Elixers" << " [" << pElixers << "]" << endl;
    cout << "2. Food" << " [" << pFood << "]" << endl;
    {
        cout << "3. Rune Book" << endl;
    }
    cout << "0. Nothing" << endl;
    cout << endl;
                        switch(_getch())
                        {
                        case '1':
                        decision = 1;
                        break;
                        case '2':
                        decision = 2;
                        break;
                        case '3':
                        decision = 3;
                        break;
                        }
    cout << endl;

    switch(decision)
    {
    case 1:
        if(pElixers > 0)
        {
            cout << "You used an elixer!" << endl;
            cout << "*Health + 5*" << endl;
            Pause();

            Player_Health += 5;
            if(Player_Health > Player_MaxHealth)
            {
                Player_Health = Player_MaxHealth;
            }

            pElixers -= 1;
        }
        else{cout << "You're out of those!" << endl; Pause();}
        break;
    case 2:
        if(pFood > 0)
        {
            cout << "You used some food!" << endl;
            cout << "*Health + 2*" << endl;
            Pause();

            Player_Health += 2;
            if(Player_Health > Player_MaxHealth)
            {
                Player_Health = Player_MaxHealth;
            }

            pFood -= 1;
        }
        else{cout << "You're out of food!" << endl; Pause();}
        break;
    case 3:
        cout << "You flip through the pages, which include strange runes\ntranslated with their matching letters and numbers next to them. The\nlast page seems to be meant for writing translations." << endl;
        cout << "\nRune Book Logs:\n" << endl;
        if(Rune_34 == true)
        {
            cout << "Entrance Markings, Second Position is three." << endl;
        }
        if(Rune_35 == true)
        {
            cout << "Cavern Markings, First Position is one. " << endl;
        }
        if(Rune_36 == true)
        {
            cout << "Water Room Markings, Third Position is two." << endl;
        }
        if(Rune_37 == true)
        {
            cout << "Fire Room Markings, Fourth Position is one." << endl;
        }
        Pause();
        break;
    }

        Pause(); Debug(); Move();
}

void ReturntoTitleScreen()
{

    void TitleScreen();
    TitleScreen();
}

void GameSpeed()
{
        void FastText();
        void FastText();

        attackbar_speed = 8;
        enemyframe_speed = 250;

        ClearScreen();
        cout << "\n\n\n\n\n\n\n                             ";
        animationText = "Choose Your Game Speed..."; FastText();
        animationText = "1. Turtle (Slow/Old Computer)\n2. Bunny (Medium Computer with decent speed)\n3. Cheetah(Gaming Computer)\n";
        FastText();

        switch(getch())
        {
        case '1':
            decision = 1;
            break;
        case '2':
            decision = 2;
            break;
        case '3':
            decision = 3;
            break;
        }

        switch(decision)
        {
        case 1:
            attackbar_speed = 0;
            enemyframe_speed = 200;
            break;
        case 2:
            attackbar_speed = 4;
            enemyframe_speed = 225;
            break;
        case 3:
            attackbar_speed = 8;
            enemyframe_speed = 250;
            break;

        }


}

