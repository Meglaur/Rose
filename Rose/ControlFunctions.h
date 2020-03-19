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


/*       File1_Room.Boss = Room.Boss;
       File1_Chest = Chest;
       File1_Crank = Crank;
       File1_CrownPuzzle = CrownPuzzle;
       File1_Crowns = Crowns;
       File1_dCrown = dCrown;
       File1_dStatue = dStatue;
       File1_eCrown = eCrown;
       File1_Room.Dungeon = Room.Dungeon;
       File1_eStatue = eStatue;
       File1_FountainSet1 = FountainSet1;
       File1_FountainSet2 = FountainSet2;
       File1_FountainSet3 = FountainSet3;
       File1_LeftWing = LeftWing;
       File1_MainFountain = MainFountain;
       File1_rCrown = rCrown;
       File1_RightWing = RightWing;
       File1_rStatue = rStatue;
       File1_sCrown = sCrown;
       File1_sStatue = sStatue;
       File1_Wings = Wings;
       File1_Item.Daisy = Item.Daisy;
       File1_Item.Gate = Item.Gate;
       File1_Item.Hairpin = Item.Hairpin;
       File1_Item.Jewel = Item.Jewel;
       File1_Item.Mushrooms = Item.Mushrooms;
       File1.gPosition = gPosition;
       File1_Grandmas_Items = Grandmas_Items;
       File1_Kuhar = Kuhar;
       File1_NymphAttack = NymphAttack;
       File1_Item.Coins = Item.Coins;
       File1_Item.Elixers = Item.Elixers;
       File1_Item.Food = Item.Food;
       File1_Item.Armor = Item.Armor;
       File1_Player.Damage = Player.Damage;
       File1_Player.Defense = Player.Defense;
       File1_Player.Health = Player.Health;
       File1_Player.MaxHealth = Player.Health;
       File1_Item.Shield = Item.Shield;
       File1_Item.WoodenSword = Item.WoodenSword;
       File1_Player.XP = Player.XP;
       File1_Player.Luck = Player.Luck;
       File1_Player.Name = Player.Name;
       File1_RandomLuckValue = RandomLuckValue;
       File1_cutscene.Elder = cutscene.Elder;
       File1_cutscene.End = cutscene.End;
       File1_cutscene.GrandmaHelps = cutscene.GrandmaHelps;
       File1_cutscene.GrandmasList = cutscene.GrandmasList;
       File1_cutscene.OldMan1 = cutscene.OldMan1;
       File1_cutscene.OldMan2 = cutscene.OldMan2;
       File1_miniscene.Aida = miniscene.Aida;
       File1_miniscene.Chasm = miniscene.Chasm;
       File1_miniscene.Dam = miniscene.Dam;
       File1_miniscene.DungeonEnter = miniscene.DungeonEnter;
       File1_miniscene.FirstEnemy = miniscene.FirstEnemy;
       File1_miniscene.Kuhar = miniscene.Kuhar;
       File1_sStatus = sStatus;
       File1_Tiki = Tiki;
       File1_Town.Bushes = Town.Bushes;
       File1_Item.Chest = Item.Chest;
       File1_Item.Cookbook = Item.Cookbook;
       File1_Item.Fountain = Item.Fountain;
       File1_Item.Hilda = Item.Hilda;
       File1_Item.InnDesk = Item.InnDesk;
       File1_Item.InnTable = Item.InnTable;
       File1_Item.Paper = Item.Paper;
       File1_Item.Stove = Item.Stove;
       File1_Room.SwordRoom = Room.SwordRoom;
       File1_TravelStatus =  TravelStatus;
       File1_Item.Book = Item.Book;
       File1_Room.Village = Room.Village;
       File1_Item.InnTable = Item.InnTable;
       File1_Item.JewelCoins = Item.JewelCoins;
       File1_Item.Key = Item.Key;
       File1_Item.Necklace = Item.Necklace;
       File1_House.Chest = House.Chest;
       File1_House.Desk = House.Desk;
       File1_House.Fireplace = House.Fireplace;
       File1_House.Stove = House.Stove;


       File1.Used = true;

        //fstream outFile;
        //outFile.open("User_File1.dat", ios_base::out);

        ofstream outFile;
        outFile.open("User_File1.dat");

       //string
       outFile << File1.Name << File1_Player.Name;
       outFile << File1.Used << File1_Crowns;
       //int
       outFile << File1_dCrown << File1_dCrown << File1_dStatue << File1_eCrown << File1_eStatue;
       outFile << File1_rCrown << File1_rCrown << File1_rStatue;
       outFile << File1_Room.Boss << File1_Chest << File1_Crank << File1_CrownPuzzle;
       outFile << File1_Room.Dungeon << File1_FountainSet1 << File1_FountainSet2 << File1_FountainSet3 << File1_LeftWing << File1_MainFountain;
       outFile << File1_sCrown << File1_sStatue << File1_Item.Coins << File1_Item.Elixers << File1_Item.Food;
       outFile << File1_Player.Damage << File1_Player.Defense << File1_Player.Health << File1_Player.XP;
       outFile << File1_Player.MaxHealth << File1_Player.Luck << File1_RandomLuckValue << File1.gPosition;
       //bool
       outFile << File1_RightWing << File1_Wings << File1_Item.Daisy;
       outFile << File1_Item.Gate << File1_Item.Hairpin << File1_Item.Jewel << File1_Item.Mushrooms;
       outFile <<  File1_Grandmas_Items << File1_Kuhar << File1_NymphAttack << File1_Item.Armor;
       outFile << File1_Item.Shield << File1_Item.WoodenSword  << File1_cutscene.Elder;
       outFile << File1_cutscene.End << File1_cutscene.GrandmaHelps << File1_cutscene.GrandmasList << File1_cutscene.OldMan1;
       outFile << File1_cutscene.OldMan2 << File1_miniscene.Aida << File1_miniscene.Chasm << File1_miniscene.Dam;
       outFile << File1_miniscene.DungeonEnter << File1_miniscene.FirstEnemy << File1_miniscene.Kuhar << File1_miniscene.NymphAppears;
       outFile << File1_sStatus << File1_Tiki << File1_Town.Bushes << File1_Item.Chest;
       outFile << File1_Item.Cookbook << File1_Item.Fountain << File1_Item.Hilda << File1_Item.InnDesk;
       outFile << File1_Item.InnTable << File1_Item.Paper << File1_Item.Stove << File1_Room.SwordRoom;
       outFile << File1_TravelStatus << File1_Item.Book << File1_Room.Village << File1_Item.InnTable;
       outFile << File1_Item.JewelCoins << File1_Item.Key << File1_Item.Necklace << File1_House.Chest;
       outFile << File1_House.Desk << File1_House.Fireplace << File1_House.Stove << File1.Used;

       outFile.close();


*/

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
            cout << "Your Grandma told you to equip yourself with a sword, shield,\nand some armor before you leave for the Item. " << endl;
            cout << endl;
            cout << "Items obtained:" << endl;
            if(Item.Armor == true)
            {
                cout << " - Armor" << endl;
            }
            if(Item.WoodenSword == true)
            {
                cout << " - Sword" << endl;
            }
            if(Item.Shield == true)
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
            cout << "The Fira people asked you to help them fight against a\nterrible monster they face. You have agreed\nto help them in exchange for their help\ngetting to the Mountains. You need to find a way into the " << endl;
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
    HealthBar(); cout << "      XP: " << Player.XP;
    cout << "\n" << endl;
    cout << "  Coins: " << Item.Coins << endl;
    cout << "  Luck: " << Player.Luck << endl;
    cout << "  Defense: " << Player.Defense << endl;
    cout << "  Damage: " << Player.Damage << endl;
    cout << endl;
    cout << "                              Items:" << endl;
    cout << "            Elixers: " << Item.Elixers << endl;
    cout << "               Food: " << Item.Food << endl;
    cout << endl;
    cout << endl;
    cout << "                           MajorItems:" << endl;
    cout << "            ";


    //once

    if(Item.WoodenSword == true) {cout << "Wooden Sword" << endl; cout << "            ";}

    if(Item.Shield == true) {cout << "Shield" << endl; cout << "            ";}

    if(Item.Armor == true) {cout << "Armor" << endl; cout << "            ";}

    if(Item.Paper == true && cutscene.OldMan2 == false) {cout << "Paper" << endl; cout << "            ";}

    if(Item.Daisy == true && Tiki == false) {cout << "Daisy" << endl; cout << "            ";}

    if(Item.Jewel == true && Item.JewelCoins == false) {cout << "Jewel" << endl; cout << "            ";}

    if(Item.Hairpin == true && Aida == false) {cout << "Aida's Hairpin" << endl; cout << "            ";}

    if(Item.Necklace == true) {cout << "Fira Necklace" << endl; cout << "            ";}

    if(Item.Book == true) {cout << "Rune Book" << endl; cout << "            ";}

    if(Item.Cookbook == true && Kuhar == false) {cout << "Cookbook" << endl; cout << "            ";}

    if(Item.Key == true && Dungeon.Chest == false){cout << "Strange bronze key" << endl; cout << "            ";}

    if(eCrown == 5) {cout << "Emerald Crown" << endl; cout << "            ";}

    if(sCrown == 5) {cout << "Sapphire Crown" << endl; cout << "            ";}

    if(rCrown == 5) {cout << "Ruby Crown" << endl; cout << "            ";}

    if(dCrown == 5) {cout << "Diamond Crown" << endl; cout << "            ";}

    if(Crank == true && miniscene.Dam == false) {cout << "Crank" << endl; cout << "            ";}

    if(Wings == true) {cout << "Mechanical Wings" << endl; cout << "            ";}

    if(RightWing == true && Wings == false) {cout << "Right Wing Piece" << endl; cout << "            ";}

    if(LeftWing == true && Wings == false) {cout << "Left Wing Piece" << endl; cout << "            ";}

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
    cout << "1. Elixers" << " [" << Item.Elixers << "]" << endl;
    cout << "2. Food" << " [" << Item.Food << "]" << endl;
    if(Item.Book == true)
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
        if(Item.Elixers > 0)
        {
            cout << "You used an elixer!" << endl;
            cout << "*Health + 5*" << endl;
            Pause();

            Player.Health += 5;
            if(Player.Health > Player.MaxHealth)
            {
                Player.Health = Player.MaxHealth;
            }

            Item.Elixers -= 1;
        }
        else{cout << "You're out of those!" << endl; Pause();}
        break;
    case 2:
        if(Item.Food > 0)
        {
            cout << "You used some food!" << endl;
            cout << "*Health + 2*" << endl;
            Pause();

            Player.Health += 2;
            if(Player.Health > Player.MaxHealth)
            {
                Player.Health = Player.MaxHealth;
            }

            Item.Food -= 1;
        }
        else{cout << "You're out of food!" << endl; Pause();}
        break;
    case 3:
        cout << "You flip through the pages, which include strange runes\ntranslated with their matching letters and numbers next to them. The\nlast page seems to be meant for writing translations." << endl;
        cout << "\nRune Book Logs:\n" << endl;
        if(Rune_34 == true)
        {
            cout << "Room.Dungeon Markings, Second Position is three." << endl;
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

void CreatorCMD()
{

    void GameSpeed();


      if(gameMode == CreatorMode)
                {
                    cout << "What would you like to do?" << endl;
                    cout << "1. Health 2. Coins 3. Elixers 4. Location." << endl;
                    cout << "5. Damage 6. Defense 7. Access Area 8. Get Item" << endl;
                    cout << "9. Reset Game Speed 10. Nothing" << endl;
                    cin >> CreatorCommand;

                    switch(CreatorCommand)
                    {
                    case 1:
                        cout << "Set Health to: ";
                        cin >> CreatorCommand; Player.MaxHealth = CreatorCommand;
                        Player.Health = Player.MaxHealth;
                        break;
                    case 2:
                        cout << "Set Coins to: ";
                        cin >> CreatorCommand; Item.Coins = CreatorCommand;
                        break;
                    case 3:
                        cout << "Set Elixers to: ";
                        cin >> CreatorCommand; Item.Elixers = CreatorCommand;
                        break;
                    case 4:
                        cout << "Where would you like to go?" << endl;
                        cout << "(Room Codes 1,11-16,2,21-29,3,31-39,391-3915,4,41-49)" << endl;
                        cin >> CreatorCommand;
                        gPosition = CreatorCommand;
                        break;
                    case 5:
                        cout << "Set Player Damage to: ";
                        cin >> CreatorCommand; Player.Damage = CreatorCommand;
                        break;
                    case 6:
                        cout << "Set Player Defense to: ";
                        cin >> CreatorCommand; Player.Defense = CreatorCommand;
                        break;
                    case 7:
                        cout << "Which area would you like access to?" << endl;
                        cout << "1. Old Man Sword Room" << endl;
                        cout << "2. Current Town's Inn" << endl;
                        cout << "3. Dungeon" << endl;
                        cout << "4. Dungeon Cavern (Front)" << endl;
                        cout << "5. Dungeon Cavern (Back)" << endl;
                        cout << "6. Boss Room" << endl;
                        cin >> CreatorCommand;

                        switch(CreatorCommand)
                        {
                        case 1:
                            Room.SwordRoom = true; break;
                        case 2:
                            Inn = true; break;
                        case 3:
                            Room.Dungeon = true; break;
                        case 4:
                            CrownPuzzle = true; break;
                        case 5:
                            Wings = true; break;
                        case 6:
                            Room.Boss = true; break;
                        }
                        break;

                        case 8:
                            cout << "Which Item would you like?" << endl;
                            cout << "1. Armor 2. Wooden Sword 3. Shield" << endl;
                            cout << "4. Daisy 5. Hairpin 6. Paper 7. Jewel" << endl;
                            cout << "8. Rune Book 9. Cookbook 10. Necklace" << endl;
                            cout << "11. Strange Key 12. Crank 13. Wings" << endl;
                            cin >> CreatorCommand;

                            switch(CreatorCommand)
                            {
                            case 1:
                                Item.Armor = true; break;
                            case 2:
                                Item.WoodenSword = true; break;
                            case 3:
                                Item.Shield = true; break;
                            case 4:
                                Item.Daisy = true; break;
                            case 5:
                                Item.Hairpin = true; break;
                            case 6:
                                Item.Paper = true; break;
                            case 7:
                                Item.Jewel = true; break;
                            case 8:
                                Item.Book = true; break;
                            case 9:
                                Item.Cookbook = true; break;
                            case 10:
                                Item.Necklace = true; break;
                            case 11:
                                Item.Key = true; break;
                            case 12:
                                Crank = true; break;
                            case 13:
                                Wings = true; break;
                            }
                        break;

                        case 9:

                            GameSpeed();
                            break;

                        case 10:
                            break;
                    }



                }
}
