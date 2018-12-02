//This file holds the code for pop-ups/functions you can ask the game to perform, such as traveling to another
//area in a travel zone or saving the game. The backround movement functions which make up the basis of the "controller"
//call on these things based on what buttons the user presses


#include "Area1_YourHouse.h"
#include "Area3_Forest.h"
#include "Area4_ElfVillage.h"


void Save()
{
    /*

    if File_Save == File_One)
    {
        File1_Health = Player_Health;
        File1_MaxHealth = Player_Health;
        File1_Coins = pCoins;
        File1_Luck = pLuck;
        File1_Elixers = pElixers;
        File1_Food = pFood;
        File1_Defense = Player_Defense;
        File1_Damage = Player_Damage;
        File1_XP = Player_XP;


        //Add all item statuses and cutscene statuses
        //oi its a big job.

    }
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
    if(Player_Coat == true) {cout << "Coat" << endl; cout << "            ";}

    if(Player_WoodenSword == true) {cout << "Wooden Sword" << endl; cout << "            ";}

    if(Player_Shield == true) {cout << "Shield" << endl; cout << "            ";}

    if(Player_SteelSword == true) {cout << "Steel Sword" << endl; cout << "            ";}

    if(Player_Armor == true) {cout << "Armor" << endl; cout << "            ";}

    if(Town_Paper == true && sCutscene_OldMan2 == false) {cout << "Paper" << endl; cout << "            ";}

    if(Forest_Daisy == true && Tiki == false) {cout << "Daisy" << endl; cout << "            ";}

    if(Forest_Jewel == true) {cout << "Jewel" << endl; cout << "            ";}

    if(Forest_Hairpin == true) {cout << "Aida's Hairpin" << endl; cout << "            ";}

    if(Village_Necklace == true) {cout << "Fira Necklace" << endl; cout << "            ";}

    if(City_Cookbook == true && Kuhar == false) {cout << "Cookbook" << endl; cout << "            ";}

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
    cout << "1. Elixers" << endl;
    cout << "2. Food" << endl;
    cout << "3. Nothing" << endl;
    cout << endl;
    cin >> decision;
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
    }

        Pause(); Debug(); Move();
}

void ReturntoTitleScreen()
{

    void TitleScreen();
    TitleScreen();
}
