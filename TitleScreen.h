//This file contains the code for running the title screen, as well as creating and loading save files, and
//using the game options menu.


void TitleScreen()
{

    void TitleScreenDisplay();
    void TitleScreenDisplayBar();
    void TitleScreenMenu();
    void TitleScreenMove();

    fPosition = 1;

    while(Title_Screen == true)
    {
        TitleScreenDisplay();
        TitleScreenDisplayBar();
        TitleScreenMove();
        TitleScreenMenu();

    }



}

void TitleScreenDisplayBar()
{
      if(fPosition == 1)
        {
            cout << "               ----------" << endl;

        }

        if(fPosition == 2)
        {
            cout << "                                  -----------" << endl;

        }

        if(fPosition == 3)
        {
            cout << "                                                       ---------" << endl;

        }

        cout << "\n\n" << endl;
}

void TitleScreenDisplay()
{

    void ClearScreen();

    ClearScreen();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";


    cout << "                          Welcome to Rose, a text" << endl;
    cout << "                           based adventure game!" << endl;
    cout << endl;
    cout << " .............................................................................." << endl;
    cout << endl;
    cout << endl;
    cout << "                New Game           Load Save            Options" << endl;

}

void TitleScreenMove()
{
     switch(_getch())
    {
    case 'a':
        fMove = 1;
        break;
    case 'd':
        fMove = 2;
        break;
    case '\r':
        fMove = 3;
        break;
    }
}

void TitleScreenMenu()
{
    void TitleScreenOptions();
    void NewGame();
    void LoadSave();


    if(fPosition == 1)
        {

            switch(fMove)
            {
            case 1:
                fPosition = 3;
                break;
            case 2:
                fPosition = 2;
                break;
            case 3:
                NewGame();
                break;

            }
        }

        else if(fPosition == 2)
        {
            switch(fMove)
            {
            case 1:
                fPosition = 1;
                break;
            case 2:
                fPosition = 3;
                break;
            case 3:
                LoadSave();
                break;
            }
        }
        else if(fPosition == 3)
        {
            switch(fMove)
            {
            case 1:
                fPosition = 2;
                break;
            case 2:
                fPosition = 1;
                break;
            case 3:
                TitleScreenOptions();
                break;
            }
        }
}

void TitleScreenOptions()
{

    void FastText();
    void SlowText();


     cout << "1. Debug Mode" << endl;
     cout << "2. Help" << endl;
     cout << "3. Exit" << endl;
     cout << endl;
     cin >> decision;
     cout << endl;

     switch(decision)
     {
     case 1:
        animationText = "Entering Debug Mode";
        FastText();
        Pause();
        Title_Screen = false;



        //this is where you switch around debug code
        gPosition = 3;
        TravelStatus = 2;
        pCoins = 110;
        Dungeon_CrownPuzzle = true;
        Dungeon_Wings = true;
        Dungeon_BossRoom = true;
        ControlLoop();



        break;
     case 2:
        cout << "1. Controls" << endl;
        cout << endl;
        cin >> decision;
        switch(decision)
        {
        case 1:
            cout << tControls << endl; Pause();
            break;
        }
     }


     Pause();

}

void LoadSave()
{

    //add chapter status and health bar maybe to file screen for fanciness




     if(File1_Used == false && File2_Used == false & File3_Used == false)
     {
         cout << "There is no save files loaded at this time" << endl;
         Pause();
     }
     else
     {


         if(File1_Used == true)
        {
         cout << "---------------------------------------------" << endl;
         cout << " File 1: " << File1_Name << "\n" << endl;
         cout << " Chapter: " << endl; //add status something here
         HealthBar(); //add specific healthbars to users later
         cout << endl;
         cout << "---------------------------------------------" << endl;
         cout << endl;
        }
        if(File2_Used == true)
        {
         cout << "---------------------------------------------" << endl;
         cout << " File 2: " << File2_Name << "\n" << endl;
         cout << " Chapter: " << endl; //add status something here
         HealthBar(); //add specific healthbars to users later
         cout << endl;
         cout << "---------------------------------------------" << endl;
         cout << endl;
        }
        if(File3_Used == true)
        {
         cout << "---------------------------------------------" << endl;
         cout << " File 3: " << File3_Name << "\n" << endl;
         cout << " Chapter: " << endl; //add status something here
         HealthBar(); //add specific healthbars to users later
         cout << endl;
         cout << "---------------------------------------------" << endl;
         cout << endl;
        }


        cout << endl;
        cout << "Which file?" << endl;
        cin >> decision;
        cout << endl;
        if(decision == 1)
        {
            Title_Screen = false;
            ControlLoop();
        }
        else if(decision == 2)
        {
            //same here
        }
        else if(decision == 3)
        {
            //ditto
        }


        Pause();


     }



}

void NewGame()
{

    void Cutscene_Prolouge();
    void SlowText();


    Title_Screen = false;


    ClearScreen();

    if(File1_Used == false)
    {
        cout << "\n\n\n\n\n\n\n                             ";
        animationText = "Name Your Save File..."; FastText();
        cout << "                                  ----------" << endl;
        cout << "                                  ";
        cin >> File1_Name;
        File1_Used = true;
    }
    else if(File1_Used == true && File2_Used == false)
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
        cin >> decision;
        cout << endl;
        cout << endl;
        if(decision == 1)
        {
            cout << "Which save file do you want to replace?" << endl;
            cout << endl;
            cout << "1. " << File1_Name << endl;
            cout << "2. " << File2_Name << endl;
            cout << "3. " << File3_Name << endl;
            cin >> decision;
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

    ClearScreen();

                cout << "\n\n\n\n\n\n\n                             ";
                animationText = "Name Your Character..."; FastText();
                cout << "                                  ----------" << endl;
                cout << "                                  ";
                cin >> pName;

    ClearScreen();

    cout << "\n\n\n\n\n\n\n              ";
    animationText = "Would You like to see the Controls before you begin?";
    FastText();
    cout << endl;
    cout << "                       1. Yes                  2. No" << endl;
    cout << endl;
    cin >> decision;
    cout << "\n\n" << endl;

    if(decision == 1)
    {
        cout << tControls;
        cout << endl;
        Pause();
        Pause();
    }


    ClearScreen();
    cout << "\n\n\n\n\n\n\n";
    cout << "                      ";
    animationText = "Beginning Game Now..Good Luck!";
    FastText();
    cout << "                                 ";

    animationText = ".  .  .";
    SlowText();


    //un comment when actually playing.
    Cutscene_Prolouge();

    //testing changes
    //gPosition = 3;
    // TravelStatus = 2;


}
