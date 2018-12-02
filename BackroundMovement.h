//This file runs the backround code for moving around in the game and calculating the position the player is currently
//at.


#include "Display.h"

void ControlLoop()
{
    //This Function runs Move(); and CalculatePosition(); in a loop, effectively letting
    //the player move around while the computer calculates where they are with every movement.\
    //It is the main loop that runs the game.


    void CalculatePosition();
    void CalculateDisplay();
    void Move();
    void GameOver();

    Gameover = false;


        if(Gameover == false)
        {
            TopScreen();
        }
        if(Gameover == false)
        {
            Move();
        }
        if(Gameover == false)
        {
            CalculatePosition();
        }
        if(Gameover == false)
        {
            CalculateDisplay();
        }





}

void CalculatePosition()
{

    //This Function continuously runs to calculate where the player is
    //at all times and run the corresponding function for the room their in.

    void Area_YourHouse();
    void Area_Town();
    void Area_Forest();
    void Area_ElfVillage();


    if(gPosition == 1 || gPosition == 11 || gPosition == 12 || gPosition == 13 || gPosition == 14 || gPosition == 15 || gPosition == 16)
    {
        Area_YourHouse();
    }

    if(gPosition == 2 || gPosition == 21 || gPosition == 22 || gPosition == 23 || gPosition == 24 || gPosition == 25 || gPosition == 26 || gPosition == 27 || gPosition == 28 || gPosition == 29)
    {
        Area_Town();
    }
    if(gPosition == 3 || gPosition == 31 || gPosition == 32 || gPosition == 33 || gPosition == 34 || gPosition == 35 || gPosition == 351 || gPosition == 36 || gPosition == 37 || gPosition == 38 || gPosition == 39 || gPosition == 391 || gPosition == 392 || gPosition == 393 || gPosition == 394 || gPosition == 395 || gPosition == 396 || gPosition == 397 || gPosition == 398 || gPosition == 399 || gPosition == 3910 || gPosition == 3911 || gPosition == 3912 || gPosition == 3913 || gPosition == 3914 || gPosition == 3915)
    {
        Area_Forest();
    }
    if(gPosition == 4 || gPosition == 41 || gPosition == 42 || gPosition == 43 || gPosition == 44 || gPosition == 45 || gPosition == 46 || gPosition == 46 || gPosition == 47 || gPosition == 48 || gPosition == 49)
    {
        Area_ElfVillage();
    }

}

void Move()
{


    //This Function Allows the Player to control the game by using set of keys
    //on the keyboard.


    void Status();
    void Save();
    void ItemScreen();
    void ReturntoTitleScreen();

    cout << "\n\n";

            switch(_getch())
            {
            case 'w':
                gMove = 1;
                break;
            case 'a':
                gMove = 2;
                break;
            case 'd':
                gMove = 3;
                break;
            case 's':
                gMove = 4;
                break;
            case 'i':
                gMove = 5;
                break;
            case 'u':
                Status();
                break;
            case 'o':
                ItemScreen();
                break;
            case 'c':
                cout << tControls << endl;
                Move();
                break;
            case 'p':
                UseItem();
                break;
            case 'l':
                Save(); Title_Screen = true; ReturntoTitleScreen();
                break;
            }



}











