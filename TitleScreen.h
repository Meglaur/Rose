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


     cout << "1. Debug Mode (I run this with certain code already run for testing purposes)" << endl;
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
        Room.Boss = true;
        Player.Health = 900;
        Player.Damage = 20;
        TravelStatus = 2;
        Item.Coins = 110;
        Room.Village = true;
        Room.SwordRoom = true;
        Room.Dungeon = true;
        CrownPuzzle = true;
        Wings = true;
        NymphAttack = false;
        ControlLoop();



        break;
     case 2:
        cout << "1. Controls" << endl;
        cout << "2. It's not working" << endl;
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
        switch(decision)
        {
        case 1:
            cout << Text.Controls << endl; Pause();
            break;
        case 2:
            cout << "1. I have a user manual in the file this exe is in, labeled Manual.txt,\nlook there for your problem first." << endl;
            cout << "2. If your question isnt answered there, contact me :) 1-815-383-6695" << endl;
        }
        break;

     }




     Pause();

}

void LoadSave()
{

    //add chapter status and health bar maybe to file screen for fanciness
    void LoadFile1();

    LoadFile1();
    Pause();


     if(File1.Used == false && File2.Used == false & File3.Used == false)
     {
         cout << "There is no save files loaded at this time" << endl;
         Pause();
     }
     else
     {


         if(File1.Used == true)
        {
         cout << "---------------------------------------------" << endl;
         cout << " File 1: " << File1.Name << " " << File1.gPosition << "\n" << endl;
         HealthBar(); //add specific healthbars to users later
         cout << endl;
         cout << "---------------------------------------------" << endl;
         cout << endl;
        }
        if(File2.Used == true)
        {
         cout << "---------------------------------------------" << endl;
         cout << " File 2: " << File2.Name << "\n" << endl;
         cout << " Chapter: " << endl; //add status something here
         HealthBar(); //add specific healthbars to users later
         cout << endl;
         cout << "---------------------------------------------" << endl;
         cout << endl;
        }
        if(File3.Used == true)
        {
         cout << "---------------------------------------------" << endl;
         cout << " File 3: " << File3.Name << "\n" << endl;
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


   // ClearScreen();

       /* cout << "\n\n\n\n\n\n\n                             ";
        animationText = "Name Your Save File..."; FastText();
        cout << "                                  ----------" << endl;
        cout << "                                  ";
        cin >> File1.Name;
        File1.Used = true; */

    ClearScreen();

                cout << "\n\n\n\n\n\n\n                             ";
                animationText = "Name Your Character..."; FastText(); Pause();
                cout << "                                  ----------" << endl;
                cout << "                                  ";
                cin >> Player.Name;


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
        cout << Text.Controls;
        cout << endl;
        Pause();
        Pause();
    }

    if(decision == 2)
    {
    cout << "\n\n" << endl;
    cout << "You can review the controls at any time by pressing 'C'" << endl;
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

   /*     //fstream inFile;
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
       inFile >> File1.Name;
       inFile >> File1_Player.Name; Player.Name = File1_Player.Name;
       //int
       inFile >> File1_dCrown >> File1_dCrown >> File1_dStatue >> File1_eCrown >> File1_eStatue;
       inFile >> File1_rCrown >> File1_rCrown >> File1_rStatue;
       inFile >> File1_Room.Boss >> File1_Chest >> File1_Crank >> File1_CrownPuzzle;
       inFile >> File1_Entrance >> File1_FountainSet1 >> File1_FountainSet2 >> File1_FountainSet3 >> File1_LeftWing >> File1_MainFountain;
       inFile >> File1_sCrown >> File1_sStatue >> File1_Item.Coins >> File1_Item.Elixers >> File1_Item.Food;
       inFile >> File1_Player.Damage >> File1_Player.Defense >> File1_Player.Health >> File1_Player.XP;
       inFile >> File1_Player.MaxHealth >> File1_Player.Luck >> File1_RandomLuckValue;
       //bool
       inFile >> File1.Used >> File1_Crowns;
       inFile >> File1_RightWing >> File1_Wings >> File1_Item.Daisy;
       inFile >> File1_Item.Gate >> File1_Item.Hairpin >> File1_Item.Jewel >> File1_Item.Mushrooms;
       inFile >>  File1_Grandmas_Items >> File1_Kuhar >> File1_NymphAttack >> File1_Item.Armor;
       inFile >> File1_Item.Shield >> File1_Item.WoodenSword  >> File1_cutscene.Elder;
       inFile >> File1_cutscene.End >> File1_cutscene.GrandmaHelps >> File1_cutscene.GrandmasList >> File1_cutscene.OldMan1;
       inFile >> File1_cutscene.OldMan2 >> File1_miniscene.Aida >> File1_miniscene.Chasm >> File1_miniscene.Dam;
       inFile >> File1_miniscene.DungeonEnter >> File1_miniscene.FirstEnemy >> File1_miniscene.Kuhar >> File1_miniscene.NymphAppears;
       inFile >> File1_sStatus >> File1_Tiki >> File1_Town.Bushes >> File1_Item.Chest;
       inFile >> File1_Item.Cookbook >> File1_Item.Fountain >> File1_Item.Hilda >> File1_Item.InnDesk;
       inFile >> File1_Item.InnTable >> File1_Item.Paper >> File1_Item.Stove >> File1_Room.SwordRoom;
       inFile >> File1_TravelStatus >> File1_Item.Book >> File1_Room.Village >> File1_Item.InnTable;
       inFile >> File1_Item.JewelCoins >> File1_Item.Key >> File1_Item.Necklace >> File1_House.Chest;
       inFile >> File1_House.Desk >> File1_House.Fireplace >> File1_House.Stove >> File1.Used;





       Room.Boss = File1_Room.Boss;
       Chest = File1_Chest;
       Crank = File1_Crank;
       CrownPuzzle = File1_CrownPuzzle;
       Crowns = File1_Crowns;
       dCrown = File1_dCrown;
       dStatue = File1_dStatue;
       eCrown = File1_eCrown;
       Entrance = File1_Entrance;
       eStatue = File1_eStatue;
       FountainSet1 = File1_FountainSet1;
       FountainSet2 = File1_FountainSet2;
       FountainSet3 = File1_FountainSet3;
       LeftWing = File1_LeftWing;
       MainFountain = File1_MainFountain;
       rCrown = File1_rCrown;
       RightWing = File1_RightWing;
       rStatue = File1_rStatue;
       sCrown = File1_sCrown;
       sStatue = File1_sStatue;
       Wings = File1_Wings;
       Item.Daisy = File1_Item.Daisy;
       Item.Gate = File1_Item.Gate;
       Item.Hairpin = File1_Item.Hairpin;
       Item.Jewel = File1_Item.Jewel;
       Item.Mushrooms = File1_Item.Mushrooms;
       gPosition = File1.gPosition;
       Grandmas_Items = File1_Grandmas_Items;
       Kuhar = File1_Kuhar;
       NymphAttack = File1_NymphAttack;
       Item.Coins = File1_Item.Coins;
       Item.Elixers = File1_Item.Elixers;
       Item.Food = File1_Item.Food;
       Item.Armor = File1_Item.Armor;
       Player.Damage = File1_Player.Damage;
       Player.Defense = File1_Player.Defense;
       Player.Health = File1_Player.Health;
       Player.Health = File1_Player.MaxHealth;
       Item.Shield = File1_Item.Shield;
       Item.WoodenSword = File1_Item.WoodenSword;
       Player.XP = File1_Player.XP;
       Player.Luck = File1_Player.Luck;
       Player.Name = File1_Player.Name;
       RandomLuckValue = File1_RandomLuckValue;
       cutscene.Elder = File1_cutscene.Elder;
       cutscene.End = File1_cutscene.End;
       cutscene.GrandmaHelps = File1_cutscene.GrandmaHelps;
       cutscene.GrandmasList = File1_cutscene.GrandmasList;
       cutscene.OldMan1 = File1_cutscene.OldMan1;
       cutscene.OldMan2 = File1_cutscene.OldMan2;
       miniscene.Aida = File1_miniscene.Aida;
       miniscene.Chasm = File1_miniscene.Chasm;
       miniscene.Dam = File1_miniscene.Dam;
       miniscene.DungeonEnter = File1_miniscene.DungeonEnter;
       miniscene.FirstEnemy = File1_miniscene.FirstEnemy;
       miniscene.Kuhar = File1_miniscene.Kuhar;
       sStatus = File1_sStatus;
       Tiki = File1_Tiki;
       Town.Bushes = File1_Town.Bushes;
       Item.Chest = File1_Item.Chest;
       Item.Cookbook = File1_Item.Cookbook;
       Item.Fountain = File1_Item.Fountain;
       Item.Hilda = File1_Item.Hilda;
       Item.InnDesk = File1_Item.InnDesk;
       Item.InnTable = File1_Item.InnTable;
       Item.Paper = File1_Item.Paper;
       Item.Stove = File1_Item.Stove;
       Room.SwordRoom = File1_Room.SwordRoom;
       TravelStatus = File1_TravelStatus;
       Item.Book = File1_Item.Book;
       Room.Village = File1_Room.Village;
       Item.InnTable = File1_Item.InnTable;
       Item.JewelCoins = File1_Item.JewelCoins;
       Item.Key = File1_Item.Key;
       Item.Necklace = File1_Item.Necklace;
       House.Chest = File1_House.Chest;
       House.Desk = File1_House.Desk;
       House.Fireplace = File1_House.Fireplace;
       House.Stove = File1_House.Stove;
       File1.Name = File1.Name;
       File1.Used = File1.Used;









        inFile.close();


*/


}
