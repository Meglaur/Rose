//This file includes functions that are called upon when the player does a specific re-occuring action within the world,
//such as sleeping or traveling, that isn't linked specifically to a certain area like certain puzzles are.


void PlayerSleep()
{
    //This function runs an animation when the player sleeps in a bed in the world
    //It also heals/possibly gives luck to the player depending on bed


    //Clear to a blank screen
    ClearScreen();

    //add space for centered text
    cout << "\n\n\n\n\n\n\n\n" << endl;
    cout << "                                    ";

    //run animated text, Pause for user to continue
    animationText = "z z Z Z";
    SlowText();
    Pause();

    //Add normal gameplay screen back in
    TopScreen();
    cout << "\n\n" << endl;
    cout << "You woke back up! You feel well rested." << endl;
    cout << "Your health reached full!" << endl;

    //Heal the player fully for sleeping
    Player_Health = Player_MaxHealth;


    //If the player was sleeping in an Inn, give them luck
    if(Inn == true)
    {
        cout << "The soft inn bed made you happy!" << endl;
        cout << "*Luck + 1*" << endl;
        pLuck += 1;
        RandomLuckValue += 1;
    }

    Pause();
}

void TravelZone()
{

    //This function brings up a menu when the player chooses to travel. The player
    //can see a small map of the world and choose the location they want to go
    //to. It also resets certain variables upon leaving areas, including Inn
    //Statuses

    void Debug();
    void DoublePause();
    void Pause();


    //Ask the player if they are sure they want to leave the area they are in.
    cout << "Leave the Area?";

    //If the player purchased a room in the inn and never used it, warn the player
    //that they will lose their purchase upon leaving.
    if(Inn == true)
    {
        cout << " Warning: Leaving the area will make you unable\nto use the inn.";
    }

    cout << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << endl;

    switch(getch())
    {
        case '1': decision = 1; break;
        case '2': decision = 2; break;
    }

    //if the player chooses not to leave, display this message and do nothing
    if(decision == 2)
    {
        cout << "You decided not to leave the area." << endl; DoublePause();
    }
    //if the player chooses to leave:
    else if (decision == 1)
    {

    //cancel Inn Purchases
    if(Inn == true)
    {
        Inn = false;
    }

    //Bring up Map Menu of currently open areas and give the player options
    tSpeaker = tRose;
    TextColor();
    cout << endl;
    animationText = "Go Where? :";
    FastText();
    cout << endl;

    //Only display the parts on the map currently accessible to the player
    switch(TravelStatus)
    {
        case 1:

     cout << "           _______________ " << endl;
	 cout << "           |             | " << endl;
	 cout << "           |    2.Town   | " << endl;
     cout << "            -----   -----	" << endl;
     cout << " 		 | |        " << endl;
     cout << " __" << endl;
     cout << "|  | 1.House - - - - - - - - - " << endl;
     cout << " -- " << endl;

        switch(getch())
     {
     case '1': decision = 1; break;
     case '2': decision = 2; break;
     }

     switch(decision)
     {
     case 1:
         gPosition = 1;
         //reset certain things upon leaving an area
          YourHouse_Desk = false;
         break;
      case 2:
         gPosition = 2; Debug(); Move();
         //reset certain things upon leaving an area
         Town_Bushes = false;
         break;



     }
    break;
    case 2:

     cout << "                                        _______" << endl;
     cout << "                                        |     |" << endl;
     cout << "               _______________         |      |" << endl;
     cout << "               |             |      __-       |" << endl;
     cout << "               |    2.Town   |    _|	      |" << endl;
     cout << "               -----   -----	  |	      |" << endl;
     cout << "        __           | |          |	      |" << endl;
     cout << "       |  | 1.House - - - - - - -   3. Forest |" << endl;
     cout << "        --                        -|          |" << endl;
     cout << "                                   |	      |" << endl;
     cout << "                                   |      ----|" << endl;
     cout << "                                   |_____|    |" << endl;
     cout << "                                   |	      |" << endl;
     cout << "                                   |    |     |" << endl;
     cout << "                                   -----|-------" << endl;
     if(Village_Enter == true)
     cout << "                                        Elf Village" << endl;


     switch(getch())
     {
     case '1': decision = 1; break;
     case '2': decision = 2; break;
     case '3': decision = 3; break;
     }

     switch(decision)
     {
     case 1:
        gPosition = 1;
        //RA
        YourHouse_Desk = false;
        break;

     case 2:
        gPosition = 2; Debug(); Move();
        //RA
        Town_Bushes = false;
        break;

     case 3:
        gPosition = 3; Debug(); Move();
        //RA
        break;

     }
    break;
    }



    tSpeaker = text;
    TextColor();


    }


}

void GameOver()
{

    void TitleScreen();
    void Cutscene_Prolouge();
    void ClearScreen();

    //Clear Screen and display centered, animated text
    ClearScreen();
    Gameover = true;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    cout << "                                GAME OVER" << endl;
    animationText = "--------------------------------------------------------------------------------";
    FastText();
    Pause();



    cout << "\n\n\n" << endl;
    cout << "                        Returning to last save point" << endl;
    cout << "                                  ";
    animationText = ". . .";
    SlowText();
    cout << endl;
    cout << endl;



    cout << "                          Press Enter to continue..." << endl;
    DoublePause();
    //reset players health to full
    Player_Health = Player_MaxHealth;

    //When the player is ready, calculate the area the player is in and bring them to the starting room in that area
    if(gPosition == 1 || gPosition == 11 || gPosition == 12 || gPosition == 13 || gPosition == 14 || gPosition == 15 || gPosition == 16)
    {
        gPosition = 1; CalculateDisplay();
    }

    if(gPosition == 2 || gPosition == 21 || gPosition == 22 || gPosition == 23 || gPosition == 24 || gPosition == 25 || gPosition == 26 || gPosition == 27 || gPosition == 28 || gPosition == 29)
    {
        gPosition = 2; CalculateDisplay();
    }
    if(gPosition == 3 || gPosition == 31 || gPosition == 32 || gPosition == 33 || gPosition == 34 || gPosition == 35 || gPosition == 351 || gPosition == 36 || gPosition == 37 || gPosition == 38 || gPosition == 39 || gPosition == 391 || gPosition == 392 || gPosition == 393 || gPosition == 394 || gPosition == 395 || gPosition == 396 || gPosition == 397 || gPosition == 398 || gPosition == 399 || gPosition == 3910 || gPosition == 3911 || gPosition == 3912 || gPosition == 3913 || gPosition == 3914 || gPosition == 3915)
    {
        gPosition = 3; CalculateDisplay();
    }
    if(gPosition == 4 || gPosition == 41 || gPosition == 42 || gPosition == 43 || gPosition == 44 || gPosition == 45 || gPosition == 46 || gPosition == 46 || gPosition == 47 || gPosition == 48 || gPosition == 49)
    {
        gPosition = 4; CalculateDisplay();
    }


    CalculateDisplay();

    //send the player back to the title screen.
    if(decision == 2)
    {
        Title_Screen = true;
        TitleScreen();
    }


}



