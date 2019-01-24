//This file contains the code for running the title screen, as well as creating and loading save files, and
//using the game options menu.


void TitleScreen()
{

    void TitleScreenDisplay();
    void TitleScreenDisplayBar();
    void TitleScreenMenu();
    void TitleScreenMove();
    Title_Screen = true;

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
    case 'A':
        fMove = 1;
        break;
    case 'd':
        fMove = 2;
        break;
    case 'D':
        fMove = 3;
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
                        switch(_getch())
                        {
                        case '1':
                        decision = 1;
                        break;
                        case '2':
                        decision = 2;
                        break;
                        }
     cout << endl;

     switch(decision)
     {
     case 1:
        animationText = "Entering Debug Mode";
        FastText();
        Pause();
        Title_Screen = false;

        GameSpeed();



        //this is where you switch around debug code



        gPosition = 38;
        Dungeon_BossRoom = true;
        pElixers = 20;
        TravelStatus = 2;
        pCoins = 110;
        Village_Enter = true;
        Town_SwordRoom = true;
        Dungeon_Entrance = true;
        Dungeon_CrownPuzzle = true;
        Dungeon_Wings = true;
        NymphAttack = false;
        ControlLoop();



        break;
     case 2:
        cout << "1. Controls" << endl;
        cout << endl;
                        switch(_getch())
                        {
                        case '1':
                        decision = 1;
                        break;
                        }
        switch(decision)
        {
        case 1:
            cout << tControls << endl; Pause();
            break;
        }
        break;
        case 3:

            cout << "Are you sure you want to exit the game?\n" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No\n" << endl;
                        switch(_getch())
                        {
                        case '1':
                        decision = 1;
                        break;
                        case '2':
                        decision = 2;
                        break;
                        }
            if(decision == 1)
            {
                exit(1);
            }
     }




     Pause();

}

void LoadSave()
{

    //add chapter status and health bar maybe to file screen for fanciness
    void LoadFile1();

    LoadFile1();
    Pause();


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
         cout << " File 1: " << File1_Name << " " << File1_gPosition << "\n" << endl;
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
    void GameSpeed();


    Title_Screen = false;


    ClearScreen();

        cout << "\n\n\n\n\n\n\n                             ";
        animationText = "Name Your Save File..."; FastText();
        cout << "                                  ----------" << endl;
        cout << "                                  ";
        cin >> File1_Name;
        File1_Used = true;

    ClearScreen();

                cout << "\n\n\n\n\n\n\n                             ";
                animationText = "Name Your Character..."; FastText(); Pause();
                cout << "                                  ----------" << endl;
                cout << "                                  ";
                cin >> pName;


    GameSpeed();


    ClearScreen();


    cout << "\n\n\n\n\n\n\n              ";
    animationText = "Would You like to see the Controls before you begin?";
    FastText(); Pause();
    cout << endl;
    cout << "                       1. Yes                  2. No" << endl;
    cout << endl;
                        switch(_getch())
                        {
                        case '1':
                        decision = 1;
                        break;
                        case '2':
                        decision = 2;
                        break;
                        }
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


    Cutscene_Prolouge();


}

void LoadFile1()
{

        //fstream inFile;
        //inFile.open("User_File1.dat", ios_base::in);


       ifstream inFile;
       inFile.open("C:\\C++ Code Projects\\Rose\\User_File1.dat");




        string FileContents;
        while(inFile.good())
         {
            getline(inFile, FileContents);
            //check what kind of variable it is
            //switch it to that variable
            cout << FileContents << endl;
        }





        //string
       inFile >> File1_Name;
       inFile >> File1_pName; pName = File1_pName;
       //int
       inFile >> File1_Dungeon_dCrown >> File1_Dungeon_dCrown >> File1_Dungeon_dStatue >> File1_Dungeon_eCrown >> File1_Dungeon_eStatue;
       inFile >> File1_Dungeon_rCrown >> File1_Dungeon_rCrown >> File1_Dungeon_rStatue;
       inFile >> File1_Dungeon_BossRoom >> File1_Dungeon_Chest >> File1_Dungeon_Crank >> File1_Dungeon_CrownPuzzle;
       inFile >> File1_Dungeon_Entrance >> File1_Dungeon_FountainSet1 >> File1_Dungeon_FountainSet2 >> File1_Dungeon_FountainSet3 >> File1_Dungeon_LeftWing >> File1_Dungeon_MainFountain;
       inFile >> File1_Dungeon_sCrown >> File1_Dungeon_sStatue >> File1_pCoins >> File1_pElixers >> File1_pFood;
       inFile >> File1_Player_Damage >> File1_Player_Defense >> File1_Player_Health >> File1_Player_XP;
       inFile >> File1_Player_MaxHealth >> File1_pLuck >> File1_RandomLuckValue;
       //bool
       inFile >> File1_Used >> File1_Dungeon_Crowns;
       inFile >> File1_Dungeon_RightWing >> File1_Dungeon_Wings >> File1_Forest_Daisy;
       inFile >> File1_Forest_Gate >> File1_Forest_Hairpin >> File1_Forest_Jewel >> File1_Forest_Mushrooms;
       inFile >>  File1_Grandmas_Items >> File1_Kuhar >> File1_NymphAttack >> File1_Player_Armor;
       inFile >> File1_Player_Shield >> File1_Player_WoodenSword  >> File1_sCutscene_Elder;
       inFile >> File1_sCutscene_End >> File1_sCutscene_GrandmaHelps >> File1_sCutscene_GrandmasList >> File1_sCutscene_OldMan1;
       inFile >> File1_sCutscene_OldMan2 >> File1_sminiScene_Aida >> File1_sminiScene_Chasm >> File1_sminiScene_Dam;
       inFile >> File1_sminiScene_DungeonEnter >> File1_sminiScene_FirstEnemy >> File1_sminiScene_Kuhar >> File1_sminiScene_NymphAppears;
       inFile >> File1_sStatus >> File1_Tiki >> File1_Town_Bushes >> File1_Town_Chest;
       inFile >> File1_Town_Cookbook >> File1_Town_Fountain >> File1_Town_Hilda >> File1_Town_InnDesk;
       inFile >> File1_Town_InnTable >> File1_Town_Paper >> File1_Town_Stove >> File1_Town_SwordRoom;
       inFile >> File1_TravelStatus >> File1_Village_Book >> File1_Village_Enter >> File1_Village_InnTable;
       inFile >> File1_Village_JewelCoins >> File1_Village_Key >> File1_Village_Necklace >> File1_YourHouse_Chest;
       inFile >> File1_YourHouse_Desk >> File1_YourHouse_Fireplace >> File1_YourHouse_Stove >> File1_Used;





       Dungeon_BossRoom = File1_Dungeon_BossRoom;
       Dungeon_Chest = File1_Dungeon_Chest;
       Dungeon_Crank = File1_Dungeon_Crank;
       Dungeon_CrownPuzzle = File1_Dungeon_CrownPuzzle;
       Dungeon_Crowns = File1_Dungeon_Crowns;
       Dungeon_dCrown = File1_Dungeon_dCrown;
       Dungeon_dStatue = File1_Dungeon_dStatue;
       Dungeon_eCrown = File1_Dungeon_eCrown;
       Dungeon_Entrance = File1_Dungeon_Entrance;
       Dungeon_eStatue = File1_Dungeon_eStatue;
       Dungeon_FountainSet1 = File1_Dungeon_FountainSet1;
       Dungeon_FountainSet2 = File1_Dungeon_FountainSet2;
       Dungeon_FountainSet3 = File1_Dungeon_FountainSet3;
       Dungeon_LeftWing = File1_Dungeon_LeftWing;
       Dungeon_MainFountain = File1_Dungeon_MainFountain;
       Dungeon_rCrown = File1_Dungeon_rCrown;
       Dungeon_RightWing = File1_Dungeon_RightWing;
       Dungeon_rStatue = File1_Dungeon_rStatue;
       Dungeon_sCrown = File1_Dungeon_sCrown;
       Dungeon_sStatue = File1_Dungeon_sStatue;
       Dungeon_Wings = File1_Dungeon_Wings;
       Forest_Daisy = File1_Forest_Daisy;
       Forest_Gate = File1_Forest_Gate;
       Forest_Hairpin = File1_Forest_Hairpin;
       Forest_Jewel = File1_Forest_Jewel;
       Forest_Mushrooms = File1_Forest_Mushrooms;
       gPosition = File1_gPosition;
       Grandmas_Items = File1_Grandmas_Items;
       Kuhar = File1_Kuhar;
       NymphAttack = File1_NymphAttack;
       pCoins = File1_pCoins;
       pElixers = File1_pElixers;
       pFood = File1_pFood;
       Player_Armor = File1_Player_Armor;
       Player_Damage = File1_Player_Damage;
       Player_Defense = File1_Player_Defense;
       Player_Health = File1_Player_Health;
       Player_Health = File1_Player_MaxHealth;
       Player_Shield = File1_Player_Shield;
       Player_WoodenSword = File1_Player_WoodenSword;
       Player_XP = File1_Player_XP;
       pLuck = File1_pLuck;
       pName = File1_pName;
       RandomLuckValue = File1_RandomLuckValue;
       sCutscene_Elder = File1_sCutscene_Elder;
       sCutscene_End = File1_sCutscene_End;
       sCutscene_GrandmaHelps = File1_sCutscene_GrandmaHelps;
       sCutscene_GrandmasList = File1_sCutscene_GrandmasList;
       sCutscene_OldMan1 = File1_sCutscene_OldMan1;
       sCutscene_OldMan2 = File1_sCutscene_OldMan2;
       sminiScene_Aida = File1_sminiScene_Aida;
       sminiScene_Chasm = File1_sminiScene_Chasm;
       sminiScene_Dam = File1_sminiScene_Dam;
       sminiScene_DungeonEnter = File1_sminiScene_DungeonEnter;
       sminiScene_FirstEnemy = File1_sminiScene_FirstEnemy;
       sminiScene_Kuhar = File1_sminiScene_Kuhar;
       sStatus = File1_sStatus;
       Tiki = File1_Tiki;
       Town_Bushes = File1_Town_Bushes;
       Town_Chest = File1_Town_Chest;
       Town_Cookbook = File1_Town_Cookbook;
       Town_Fountain = File1_Town_Fountain;
       Town_Hilda = File1_Town_Hilda;
       Town_InnDesk = File1_Town_InnDesk;
       Town_InnTable = File1_Town_InnTable;
       Town_Paper = File1_Town_Paper;
       Town_Stove = File1_Town_Stove;
       Town_SwordRoom = File1_Town_SwordRoom;
       TravelStatus = File1_TravelStatus;
       Village_Book = File1_Village_Book;
       Village_Enter = File1_Village_Enter;
       Village_InnTable = File1_Village_InnTable;
       Village_JewelCoins = File1_Village_JewelCoins;
       Village_Key = File1_Village_Key;
       Village_Necklace = File1_Village_Necklace;
       YourHouse_Chest = File1_YourHouse_Chest;
       YourHouse_Desk = File1_YourHouse_Desk;
       YourHouse_Fireplace = File1_YourHouse_Fireplace;
       YourHouse_Stove = File1_YourHouse_Stove;
       File1_Name = File1_Name;
       File1_Used = File1_Used;









        inFile.close();





}
