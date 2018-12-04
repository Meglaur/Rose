//This file includes functions that are called upon when the player does a specific re-occuring action within the world,
//such as sleeping or traveling, that isn't linked specifically to a certain area like certain puzzles are.


void PlayerSleep()
{
    ClearScreen();
    cout << "\n\n\n\n\n\n\n\n" << endl;
    cout << "                                    ";

    animationText = "z z Z Z";
    SlowText();
    Pause();

    TopScreen();
    cout << "\n\n" << endl;
    cout << "You woke back up! You feel well rested." << endl;
    cout << "Your health reached full!" << endl;
    Player_Health = Player_MaxHealth;


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
    void Debug();
    void DoublePause();
    void Pause();



    cout << "Leave the Area?";
    if(Inn == true)
    {
        cout << " Warning: Leaving the area will make you unable\nto use the inn.";
    }
    cout << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << endl;
    cin >> decision;
    cout << endl;
    if(decision == 2)
    {
        cout << "You decided not to leave the area." << endl; DoublePause();
    }
    else if (decision == 1)
    {

    if(Inn == true)
    {
        Inn = false;
    }
    tSpeaker = tRose;
    TextColor();
    cout << endl;
    animationText = "Go Where? :";
    FastText();
    cout << endl;

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
     cin >> decision;

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
     cin >> decision;

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

    ClearScreen();
    Gameover = true;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    cout << "                                GAME OVER" << endl;
    animationText = "--------------------------------------------------------------------------------";
    FastText();
    Pause();

    animationText = "                       Would you like to continue?";
    FastText();
    Pause();

    cout << "                                 1. Yes" << endl;
    cout << "                                 2. No" << endl;
    cin >> decision;

    if(decision == 1)
    {
    cout << "\n\n\n" << endl;
    cout << "                        Returning to last save point" << endl;
    cout << "                                  ";
    animationText = ". . .";
    SlowText();
    cout << endl;
    cout << endl;
    }

    cout << "                          Press Enter to continue..." << endl;
    DoublePause();
    Player_Health = Player_MaxHealth;
    if(gPosition == 1 || gPosition == 11 || gPosition == 12 || gPosition == 13 || gPosition == 14 || gPosition == 15 || gPosition == 16)
    {
        gPosition = 1;
    }

    if(gPosition == 2 || gPosition == 21 || gPosition == 22 || gPosition == 23 || gPosition == 24 || gPosition == 25 || gPosition == 26 || gPosition == 27 || gPosition == 28 || gPosition == 29)
    {
        gPosition = 2;
    }
    if(gPosition == 3 || gPosition == 31 || gPosition == 32 || gPosition == 33 || gPosition == 34 || gPosition == 35 || gPosition == 351 || gPosition == 36 || gPosition == 37 || gPosition == 38 || gPosition == 39 || gPosition == 391 || gPosition == 392 || gPosition == 393 || gPosition == 394 || gPosition == 395 || gPosition == 396 || gPosition == 397 || gPosition == 398 || gPosition == 399 || gPosition == 3910 || gPosition == 3911 || gPosition == 3912 || gPosition == 3913 || gPosition == 3914 || gPosition == 3915)
    {
        gPosition = 3;
    }
    if(gPosition == 4 || gPosition == 41 || gPosition == 42 || gPosition == 43 || gPosition == 44 || gPosition == 45 || gPosition == 46 || gPosition == 46 || gPosition == 47 || gPosition == 48 || gPosition == 49)
    {
        gPosition = 4;
    }


    CalculateDisplay();

    if(decision == 2)
    {
        Title_Screen = true;
        TitleScreen();
    }


}



