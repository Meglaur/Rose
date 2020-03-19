
void CalculateEnemy()
{

    //tell the game what stats to give the enemy in battle based on who your fighting


    if(enemy == Enemy.AngryFlower)
    {
        Enemy.Name = "Angry Flower";
        Enemy.Health = 10;
        Enemy.Damage = 3;
        Enemy.Defense = 0;
        Enemy.Approach = "                      An angry flower approaches you!";
        Enemy.Defeat = "You defeat the rabid flower, and it falls to the ground.";
        Enemy.Drops = food;
        Enemy.DropText = "Flower Seeds";
        Enemy.XP = 97;
        Enemy.MaxHealth = 10;
        Enemy.DefenseGame = 1;
        Enemy.UsingItem = true;
        Enemy.ItemHealthRegain = 3;
        Enemy.Fooddrops = 3;
        if(cutscene.FirstEnemy == false) {Enemy.Run = false;}
        else {Enemy.Run = true;}

    }

    else if(enemy == Enemy.Skeleton)
    {
        Enemy.Name = "Mossy Skeleton";
        Enemy.Health = 12;
        Enemy.Damage = 3;
        Enemy.Defense = 0;
        Enemy.Approach = "              A skeleton covered in moss approaches you!\n\n                          He looks angry!!!";
        Enemy.Defeat = "You defeat the skeleton. Its bones clatter to the ground.";
        Enemy.Drops = elixers;
        Enemy.DropText = "       Coins";
        Enemy.XP = 115;
        Enemy.MaxHealth = 12;
        Enemy.DefenseGame = 2;
        Enemy.UsingItem = true;
        Enemy.ItemHealthRegain = 3;
        Enemy.Coindrops = 5;
        Enemy.Run = true;

    }

    else if(enemy == Enemy.Boss)
    {
        Enemy.Name = "Elemental Ghost";
        Enemy.Health = 15;
        Enemy.Damage = 3;
        Enemy.Defense = 0;
        Enemy.XP = 1000;
        Enemy.MaxHealth = 15;
        Enemy.UsingItem = false;
        Enemy.Stages = 4;
        Boss = true;
        Enemy.Run = false;

        switch(BossStage)

        {
            case 1:
                Enemy.DefenseGame = 3;
                break;
            case 2:
                Enemy.DefenseGame = 4;
                break;
            case 3:
                Enemy.DefenseGame = 5;
                break;
            case 4:
                Enemy.DefenseGame = 6;
                break;

        }



    }


}

void EnemyApproach()
{

    //change the color to red
    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 4);

    ClearScreen();
    cout << "\n\n\n\n\n\n\n";
    cout << Enemy.Approach << endl;
    Pause();

    //glitch prevention
    if(gPosition == 3)
    {
        Pause();
    }

    ClearScreen();
}

void BattleMove()
{
    void CreatorCMD();

    switch(_getch())
    {
    case 'a':
        eMove = 1;
        break;
    case 'd':
        eMove = 2;
        break;
    case '\r':
        eMove = 3;
        break;
    case 'g':
        if(gameMode == PlayerMode)
    {
        cout << "switched to CreatorMode:" << endl;
        gameMode = CreatorMode;
        Pause();
    }
    else if(gameMode == CreatorMode)
    {
        cout << "switched to PlayerMode:" << endl;
        Pause();
        gameMode = PlayerMode;
    }
    break;
    case 'f':
        CreatorCMD();
        break;
    }
}

void BattleScreen()
{
    void HealthBar();
    void EnemyHealthBar();


    Character.Speaker= Character.Battle;
    TextColor();

    ClearScreen();

    cout << "______________________________________________________________________________" << endl;
    cout << endl;
    cout << "                               " << Enemy.Name << endl;
    cout << endl;
    HealthBar();
    EnemyHealthBar();
    cout << "______________________________________________________________________________" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                Attack            Items             Options" << endl;

}

void BattleDisplay()
{
       if(ePosition == 1)
        {
            cout << "               --------" << endl;
        }

        if(ePosition == 2)
        {
            cout << "                                 -------" << endl;
        }

        if(ePosition == 3)
        {
            cout << "                                                    -------" << endl;
        }

        cout << "\n\n" << endl;
}

void BattleMenu()
{

    void BattleRun();
    void BattleItems();
    void BattleAttack();
    void BattleOptions();

      if(ePosition == 1)
        {
            switch(eMove)
            {
            case 1:
                ePosition = 3;
                break;
            case 2:
                ePosition = 2;
                break;
            case 3:
                BattleAttack();
                break;

            }
        }

        else if(ePosition == 2)
        {
            switch(eMove)
            {
            case 1:
                ePosition = 1;
                break;
            case 2:
                ePosition = 3;
                break;
            case 3:
                BattleItems();
                break;
            }
        }
        else if(ePosition == 3)
        {
            switch(eMove)
            {
            case 1:
                ePosition = 2;
                break;
            case 2:
                ePosition = 1;
                break;
            case 3:
                BattleOptions();
            }
        }



}

void BattleLoop()
{
    void BattleMove();
    void BattleScreen();
    void BattleMenu();
    void BattleDisplay();
    void Enemy_Turn();
    void GameOver();


    if(eTurn == true)
    {
        Enemy_Turn();
    }

    if(Player.Health > 0)
    {
        BattleScreen();
    }
    if(Player.Health > 0)
    {
        BattleDisplay();
    }
    if(Player.Health > 0)
    {
        BattleMove();
    }
    if(Player.Health > 0)
    {
        BattleMenu();
    }
}

void Battle()
{
    void CalculateEnemy();
    void EnemyApproach();
    void BattleLoop();
    void BattleDefeat();
    void GameOver();



    CalculateEnemy();
    EnemyApproach();
    ePosition = 1;
    Boss = false;

    eTurn = false;
    Battle_Run = false;
    Enemy.Health = Enemy.MaxHealth;

    while(Enemy.Health > 0 && Battle_Run == false)
    {
        BattleLoop();
        if(Player.Health <= 0)
        {
        GameOver(); break;
        break;
        }
    }

   if(Player.Health > 0 && Enemy.Health <= 0)
   {
       BattleDefeat();
   }
}

void BossBattle()
{

    void CalculateEnemy();
    void EnemyApproach();
    void BattleLoop();
    void BattleDefeat();
    void GameOver();
    void Cutscene_DungeonBossApproach();
    void Cutscene_DungeonBossDefeat();



    BossStage = 1;
    CalculateEnemy();
    ePosition = 1;


    Boss = true;

    eTurn = false;
    Battle_Run = false;
    Enemy.Health = Enemy.MaxHealth;

    while(Enemy.Health > 0)
    {
        BattleLoop();
        if(Player.Health <= 0)
        {
        GameOver();
        break;
        }
        if(Enemy.Health <= 0 && BossStage < Enemy.Stages)
        {
            if(enemy == Enemy.Boss)
            {
                switch(BossStage)
                {
                case 1:
                    Cutscene = true;
                    animationText = "The owl bursts back into smoke, which begins swirling\nagain. It forms into an enormous Tortoise!";
                    Dialogue();
                    break;
                    Cutscene = false;
                case 2:
                    Cutscene = true;
                    animationText = "The Tortoise falls, and crumbles into white pieces before\nturning to smoke once more. It rises and takes another form,\nthat of a fire breathing dragon!";
                    Dialogue();
                    Cutscene = false;
                    break;
                case 3:
                    Cutscene = true;
                    animationText = "The Dragon fades, and the smoke swirls one last time\nto create its final form. A snake-like wyvern appears from\nthe ground!";
                    Dialogue();
                    Cutscene = false;
                    break;
                }

                eTurn = false;
            }
            BossStage += 1;
            Enemy.Health = Enemy.MaxHealth;
            CalculateEnemy(); //this is there so defense minigame can change, within enemy info if statement
            //declare what minigame to use based on what stage of the battle your in.
        }
    }

   if(Player.Health > 0 && Enemy.Health <= 0 && BossStage == Enemy.Stages)
   {
       if(enemy == Enemy.Boss)
       {
          if(enemy == Enemy.Boss) {Cutscene_DungeonBossDefeat(); Boss = false;}
       }
   }
}

void EnemyHealthBar()
{

    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 4);

    switch(Enemy.Health)
    {
        case 1:
            Enemy.HealthBar = "|";
            break;
        case 2:
            Enemy.HealthBar = "||";
            break;
        case 3:
            Enemy.HealthBar = "|||";
            break;
        case 4:
            Enemy.HealthBar = "||||";
            break;
        case 5:
            Enemy.HealthBar = "|||||";
            break;
        case 6:
            Enemy.HealthBar = "||||||";
            break;
        case 7:
            Enemy.HealthBar = "|||||||";
            break;
        case 8:
            Enemy.HealthBar = "||||||||";
            break;
        case 9:
            Enemy.HealthBar = "|||||||||";
            break;
        case 10:
            Enemy.HealthBar = "||||||||||";
            break;
        case 11:
            Enemy.HealthBar = "|||||||||||";
            break;
        case 12:
            Enemy.HealthBar = "||||||||||||";
            break;
        case 13:
            Enemy.HealthBar = "|||||||||||||";
            break;
        case 14:
            Enemy.HealthBar = "||||||||||||||";
            break;
        case 15:
            Enemy.HealthBar = "|||||||||||||||";
            break;
        case 16:
            Enemy.HealthBar = "||||||||||||||||";
            break;
        case 17:
            Enemy.HealthBar = "|||||||||||||||||";
            break;
        case 18:
            Enemy.HealthBar = "||||||||||||||||||";
            break;
        case 19:
            Enemy.HealthBar = "|||||||||||||||||||";
            break;
        case 20:
            Enemy.HealthBar = "||||||||||||||||||||";
            break;
    }


    cout <<"       ";
    cout << Enemy.Name << ": " << Enemy.HealthBar << " : " << Enemy.Health << endl;
}

void RandomEnemyEncounter()
{
        RandomEncounter = Player.Health + Item.Coins + Item.Luck + Player.MaxHealth + Player.Defense + Player.Damage + Player.XP;

        if(RandomEncounter % 2 == 0)
        {
            Battle ();

        }
        else
        {

        }

}

void BattleAttack()
{
    void AttackMiniGame1();

    Character.Speaker = Character.Narrator;
    TextColor();

    AttackMiniGame1();


    if(Battle_Attack == 2)
    {
        Player.Hit = Player.Damage - Enemy.Defense;
    }
    else if(Battle_Attack == 1)
    {
        Player.Hit = Player.Damage - Enemy.Defense - 1;
    }
    else if(Battle_Attack == 0)
    {
        Player.Hit = 0;
    }

    cout << "You did " << Player.Hit << " damage!" << endl;

    Pause();

    Enemy.Health -= Player.Hit;


    eTurn = true;

}

void BattleOptions()
{

    void BattleDefend();
    void BattleRun();

    cout << "1. Run" << endl;
    cout << "2. Defend" << endl;
    cout << "3. Nothing." << endl;
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
    cout << "\n\n" << endl;

    switch(decision)
    {
    case 1:
        if(Enemy.Run == true) {BattleRun();} else {cout << "You cannot run from this fight!" << endl; DoublePause();}
        break;
    case 2:
        BattleDefend();
        break;
    case 3:
        break;
    }

}

void BattleRun()
{
    //the commented lines are for if boss fights go through regular fighting menus. For now
    //ignore them.

    void TextColor();

    Character.Speaker = Character.Narrator;
    TextColor();

    cout << "Run from the enemy?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << endl;
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

    if(decision == 1)
    {
        if(Boss == false)
        {

            cout << "You run from the enemy!" << endl;
            cout << "You lost some XP from running" << endl;
            cout << "*XP - 11*" << endl;
            Pause();
            Player.XP -= 11;
            Battle_Run = true;
        }
        else{cout << "You can't run from this Enemy!" << endl;}

    }
    else
    {
        cout << "You decide not to run from the Enemy." << endl; Pause();
    }


    Pause();
}

void BattleItems()
{

    Character.Speaker = Character.Narrator;
    TextColor();
    cout << "-------------------------------------" << endl;
    cout << "             Items:" << endl;
    cout << endl;
    cout << "1. Elixers - " << Item.Elixers << endl;
    cout << "2. Food - " << Item.Food << endl;
    cout << "3. Nothing" << endl;
    cout << endl;
    cout << "-------------------------------------" << endl;
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

            Item.Elixers -= 1; eTurn = true;
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

            Item.Food -= 1; eTurn = true;
        }
        else{cout << "You're out of food!" << endl; Pause();}
        break;
    }

    Pause();
}

void Enemy_Turn()
{
    //two parts, randomizer for whether or not it uses an item once down the proper amount of health,
    //and a basic attack move for most of the time. Add more ai later on, and several moves for bosses.

    void ClearScreen();
    void DefendMiniGame1();
    void DefendMiniGame2();
    void DefendMiniGame3();
    void DefendMiniGame4();
    void DefendMiniGame5();
    void DefendMiniGame6();

    ClearScreen();

    cout << "\n\n\n" << endl;

    if(Enemy.Health % 2 == 0 && Player.Health % 2 == 1)
    {
        RandomLuckValue += 1;
    }

    if(Enemy.Health < 6 && Enemy.ItemUsed == false && Enemy.UsingItem == true)
    {
        Enemy.Item = true;
    }



    if(Player.Luck > 5 && RandomLuckValue % 2 == 0)
    {
        RandomLuckValue += 1;
        cout << "The Enemy is attacking, but it misses!" << endl;
        Pause();
        eTurn = false;
    }
    else if(Enemy.Item == false)
    {
        cout << "                           ";
        cout << "The " << Enemy.Name << " is attacking!" << endl;

        switch(Enemy.DefenseGame)
        {
        case 1:
            DefendMiniGame1();
            break;
        case 2:
            DefendMiniGame2();
            break;
        case 3:
            DefendMiniGame3();
            break;
        case 4:
            DefendMiniGame4();
            break;
        case 5:
            DefendMiniGame5();
            break;
        case 6:
            DefendMiniGame6();
        }


        if(Battle_Block == 0)
        {
            Enemy.Hit = Enemy.Damage - Player.Defense;
            if(Enemy.Hit <= 0 )
            {
                Enemy.Hit = 0;
            }
            Player.Health -= Enemy.Hit;

            if(Enemy.DefenseGame == 2)
            {
             ClearScreen();
            cout << "\n\n\n\n\n\n" << endl;
            cout << "                 Hit A with correct timing to block the attack!" << endl;
            cout << "\n\n" << endl;

             cout << "\n\n\n\n\n" << endl;
             cout << "                                     ^ " << endl;
             cout << "                                     ^ " << endl;
	         cout << "                                   ----- " << endl;
             cout << "                                    | |  " << endl;
             cout << "                                    | | " << endl;
             cout << "                                    | | " << endl;
             cout << "                                    | | " << endl;
             cout << "                                    | | " << endl;
             cout << "                                    \\ / " << endl;
            }

            cout << "\n\n" << endl;
            cout << "                          ";
            cout << " You lost " << Enemy.Hit << " health!" << endl;
            Pause();
        }
        else if(Battle_Block == 1)
        {
            Enemy.Hit = 0;
            if(Enemy.Hit <= 0)
            {
                Enemy.Hit = 0;
            }
            Player.Health -= Enemy.Hit;
            cout << "\n\n" << endl;
            cout << "                       ";
            cout << "You blocked! You lost " << Enemy.Hit << " health!" << endl;
            Pause();

        }


        Pause();

    }
    else if(Enemy.Item == true)
    {
        cout << "\n\n\n\n\n\n\n\n\n" << endl;
        cout << "                ";
        cout << "The " << Enemy.Name << " regained " << Enemy.ItemHealthRegain << " health!" << endl;
        Enemy.Health += Enemy.ItemHealthRegain;
        if(Enemy.Health > Enemy.MaxHealth)
        {
            Enemy.Health = Enemy.MaxHealth;
        }
        Pause();
        Enemy.Item = false;
        Enemy.ItemUsed = true;
    }





    if(Battle_Defend == true)
    {
        Player.Defense -= 2;
    }

    eTurn = false;


}

void BattleDefeat()
{

    ClearScreen();
    cout << "\n\n\n\n\n\n           ";
    cout << Enemy.Defeat << endl;
    Pause();
    cout << "                              ";
    cout << "You gained " << Enemy.XP << " XP!" << endl;
    Player.XP += Enemy.XP;
    Pause();
    cout << "                         ";
    cout << "You got " << Enemy.DropText << "!" << endl;

    if(Enemy.Drops == food)
    {
        Item.Food += Enemy.Fooddrops;
        cout << "                                 ";
        cout << "*Food + " << Enemy.Fooddrops << "*" << endl;
    }
    else if(Enemy.Drops == coins)
    {
        Item.Coins += Enemy.Coindrops;

        cout << "                                 ";
        cout << "*Coins + " << Enemy.Coindrops << "*" << endl;
    }
    else if(Enemy.Drops == elixers)
    {
        Item.Elixers += Enemy.Elixerdrops;
        cout << "                                ";
        cout << "*Elixers + " << Enemy.Elixerdrops << "*" << endl;
    }


    Pause();
    ClearScreen();
}

void BattleDefend()
{
    cout << "You decide to defend this turn!" << endl;
    cout << "*Defense + 2 for one turn*" << endl;

    Battle_Defend = true;

    Player.Defense += 2;

    DoublePause();

    eTurn = true;

}


void AttackMiniGame1()
{

    void ClearScreen();


    Battle_Attack = 3;
    aPosition = 1;

    while(Battle_Attack == 3)
    {
        ClearScreen();
        cout << "\n\n\n\n\n\n\n\n\n                   Press spacebar with the right timing!" << endl;
        cout << "                           ";

        aPosition += 1;





        if(aPosition >= 21)
        {
            aPosition = 1;
        }

    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

    switch(aPosition)
    {
    case 1:
        cout << "|------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 2:
        cout << "-|-----"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 3:
        cout << "--|----"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 4:
        cout << "---|---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 5:
        cout << "----|--"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 6:
        cout << "-----|-"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 7:
        cout << "------|"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 1;
        }
        break;
    case 8:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "|-"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 1;
        }
        break;
    case 9:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "-|"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 2;
        }
        break;
    case 10:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "|--"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 2;
        }
        break;
    case 11:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "-|-"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 2;
        }
        break;
    case 12:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "--|"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 1;
        }
        break;
    case 13:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "|-"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 1;
        }
        break;
    case 14:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "-|"; SetConsoleTextAttribute(color, 7); cout <<"------" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 15:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"|-----" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 16:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"-|----" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 17:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"--|---" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 18:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"---|--" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 19:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"----|-" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;
    case 20:
        cout << "-------"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 12); cout << "---"; SetConsoleTextAttribute(color, 5); cout << "--"; SetConsoleTextAttribute(color, 7); cout <<"-----|" << endl;
        if(GetKeyState(' ') & 0x8000)
        {
           Battle_Attack = 0;
        }
        break;

    }


    cout << "\n                             ";

           Sleep(attackbar_speed);


    }




}


//FLOWER SEEDS DEFENSE
void DefendMiniGame1()
{


   dPosition = 1;
   Battle_Block = 5;


    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);


              cout << "\n\n\n\n\n\n" << endl;
              cout << "           Hit the spacebar with correct timing to block the attack!" << endl;
              cout << "\n\n" << endl;

 cout << endl;
 cout << endl;
 cout << endl;
 cout << "          _                                 " << endl;
 cout << "        _/ \\/\\                            " << endl;
 cout << "       | \\_|_/__                           " << endl;
 cout << "       /\\/||\\__/                          " << endl;
 cout << "       \\_\\__/\\_\\                        " << endl;
 cout << "     __ \\//_\\_\\                          " << endl;
 cout << "    \\_ \\//___                             " << endl;
 cout << "      \\//___/                              " << endl;
 cout << "      //                                    " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_________@_/\\\\/\\  " << endl;\


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

            Sleep(1000); //This sleep shows the beginning picture of the enemy attack and holds for 1 second

   while(Battle_Block == 5)
   {
       dPosition += 1;
       if (dPosition > 9)
       {
           Sleep(100); //This sleep waits a milisecond before telling you you've missed your shot to block
           Battle_Block = 0;
       }


        ClearScreen();
        cout << "\n\n\n\n\n\n" << endl;
        cout << "                 Hit spacebar with correct timing to block the attack!" << endl;
        cout << "\n\n" << endl;

        Sleep(enemyframe_speed); //This sleep waits a small time between each frame

        switch(dPosition)
        {
            case 1:
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "          _                                 " << endl;
 cout << "        _/ \\/\\                            " << endl;
 cout << "       | \\_|_/__                           " << endl;
 cout << "       /\\/||\\__/                          " << endl;
 cout << "       \\_\\__/\\_\\                        " << endl;
 cout << "     __ \\//_\\_\\                          " << endl;
 cout << "    \\_ \\//___                             " << endl;
 cout << "      \\//___/                              " << endl;
 cout << "      //                                    " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_________@_/\\\\/\\  " << endl;
 Sleep(30);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
case 2:
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "         __                                 " << endl;
 cout << "        _\\ \\                              " << endl;
 cout << "       _\\_\\_\\                            " << endl;
 cout << "      /__/||                                " << endl;
 cout << "       \\_\\_|                              " << endl;
 cout << "     __ \\//                                " << endl;
 cout << "    \\_ \\//___                             " << endl;
 cout << "      \\//___/                              " << endl;
 cout << "      //                                    " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_________@_/\\\\/\\  " << endl;
 Sleep(30);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

              break;
case 3:
cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "       ___                                   " << endl;
 cout << "       \\_\\\\_                              " << endl;
 cout << "       /_|_-\\                               " << endl;
 cout << "      _\\___ \\|                             " << endl;
 cout << "     /__/_//                                 " << endl;
 cout << "    ___  //                                  " << endl;
 cout << "    \\_ \\//___                              " << endl;
 cout << "      \\//___/                               " << endl;
 cout << "      //                                     " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_________@_/\\\\/\\  " << endl;
 Sleep(30);



                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
case 4:
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "         __                                 " << endl;
 cout << "        _\\ \\                              " << endl;
 cout << "       _\\_\\_\\                            " << endl;
 cout << "      /__/||                                " << endl;
 cout << "       \\_\\_|                              " << endl;
 cout << "     __ \\//                                " << endl;
 cout << "    \\_ \\//___                             " << endl;
 cout << "      \\//___/                              " << endl;
 cout << "      //                                    " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_________@_/\\\\/\\  " << endl;
 Sleep(30);
                 if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
case 5:
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "          __                                 " << endl;
 cout << "      ___/ /_                                " << endl;
 cout << "     _\\_\\_/_/_                             " << endl;
 cout << "     \\__/ -\\_/                             " << endl;
 cout << "      \\_\\__/*                              " << endl;
 cout << "    ___ \\//                                 " << endl;
 cout << "    \\_ \\//___                              " << endl;
 cout << "      \\//___/                               " << endl;
 cout << "      //                                     " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_______@_/\\\\/\\  " << endl;
 Sleep(30);
          if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;


case 6:
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "          __                                 " << endl;
 cout << "      ___/ /_                                " << endl;
 cout << "     _\\_\\_/_/_                             " << endl;
 cout << "     \\__/ -\\_/                             " << endl;
 cout << "      \\_\\__/                               " << endl;
 cout << "    ___ \\//    *                            " << endl;
 cout << "    \\_ \\//___                              " << endl;
 cout << "      \\//___/                               " << endl;
 cout << "      //                                     " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_________@_/\\\\/\\  " << endl;
 Sleep(30);

                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

case 7:
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "          __                                 " << endl;
 cout << "      ___/ /_                                " << endl;
 cout << "     _\\_\\_/_/_                             " << endl;
 cout << "     \\__/ -\\_/                             " << endl;
 cout << "      \\_\\__/*                              " << endl;
 cout << "    ___ \\//                                 " << endl;
 cout << "    \\_ \\//___      *                       " << endl;
 cout << "      \\//___/                               " << endl;
 cout << "      //                                     " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_________@_/\\\\/\\  " << endl;
     Sleep(30);
                             if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

case 8:
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "          __                                 " << endl;
 cout << "      ___/ /_                                " << endl;
 cout << "     _\\_\\_/_/_                             " << endl;
 cout << "     \\__/ -\\_/                             " << endl;
 cout << "      \\_\\__/                               " << endl;
 cout << "    ___ \\//      *                          " << endl;
 cout << "    \\_ \\//___                              " << endl;
 cout << "      \\//___/            *                  " << endl;
 cout << "      //                                     " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_________";


    SetConsoleTextAttribute(color, 12);

 cout << "@";

    SetConsoleTextAttribute(color, 7);

cout << "_/\\\\/\\  " << endl;

  Sleep(30);

        if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 1;
                }
                break;

case 9:
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "          __                                 " << endl;
 cout << "      ___/ /_                                " << endl;
 cout << "     _\\_\\_/_/_                             " << endl;
 cout << "     \\__/ -\\_/                             " << endl;
 cout << "      \\_\\__/*                              " << endl;
 cout << "    ___ \\//                                 " << endl;
 cout << "    \\_ \\//___      *                       " << endl;
 cout << "      \\//___/                               " << endl;
 cout << "      //                     *               " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_________@_/\\\\/\\  " << endl;
 Sleep(30);
                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 1;
                }
                break;
case 10:
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "          __                                 " << endl;
 cout << "      ___/ /_                                " << endl;
 cout << "     _\\_\\_/_/_                             " << endl;
 cout << "     \\__/ -\\_/                             " << endl;
 cout << "      \\_\\__/                               " << endl;
 cout << "    ___ \\//      *                          " << endl;
 cout << "    \\_ \\//___                              " << endl;
 cout << "      \\//___/            *                  " << endl;
 cout << "      //                                     " << endl;
 cout << "   /\\//__/\\\\///\\\\///\\/\\_________*_/\\\\/\\  " << endl;
 Sleep(30);

                       if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
            break;

        }






}

}

//SKELETON SWORD DEFENSE
void DefendMiniGame2()
{

    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);


   dPosition = 1;
   Battle_Block = 5;

              cout << "\n\n\n\n\n\n" << endl;
              cout << "           Hit the spacebar with correct timing to block the attack!" << endl;
              cout << "\n\n" << endl;

              cout << "                                   / \\ " << endl;
              cout << "                                   | | " << endl;
              cout << "                                   | | " << endl;
              cout << "                                   | | " << endl;
              cout << "                                   | | " << endl;
              cout << "                                   | | " << endl;
	          cout << "                                  ----- " << endl;
              cout << "                                    V   " << endl;
              cout << "                                    V   " << endl;
              cout << "\n\n" << endl;
              cout << "                                   @                        " << endl;

                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

            Sleep(1000);

   while(Battle_Block == 5)
   {
       dPosition += 1;
       if (dPosition > 6)
       {
           Sleep(100);
           Battle_Block = 0;
       }




        ClearScreen();
        cout << "\n\n\n\n\n\n" << endl;
        cout << "                 Hit spacebar with correct timing to block the attack!" << endl;
        cout << "\n\n" << endl;

        Sleep(enemyframe_speed);

        switch(dPosition)
        {
            case 1:


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 2:
                cout << endl;
              cout << "                          " << "  _ " << endl;
              cout << "                          " << " | \ " << endl;
              cout << "                          " << "  \\  \\ " << endl;
              cout << "                          " << "   \\  \\ " << endl;
              cout << "                          " << "    \\  \\ " << endl;
              cout << "                          " << "     \\  / " << endl;
              cout << "                          " << "      \\/\\\\ " << endl;
              cout << "                          " << "         \\\\_      " << endl;
              cout << "\n\n" << endl;
              cout << "                                   @                        " << endl;
               Sleep(30);




                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

              break;
            case 3:
                cout << "\n\n\n\n\n" << endl;
              cout << "                         _________| " << endl;
              cout << "                        /         |>> " << endl;
              cout << "                        \\---------| " << endl;
              cout << "\n" << endl;
              cout << "                                   @                        " << endl;
               Sleep(30);



                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 4:
              cout << "\n\n\n\n\n" << endl;
              cout << "                                      _ " << endl;
              cout << "                                     /  " << endl;
              cout << "                                  /\\/  " << endl;
              cout << "                                 /  \\   " << endl;
              cout << "                                /  /	 " << endl;
              cout << "                               /  /  " << endl;
              cout << "                              /  / " << endl;
              cout << "                             /  /" << endl;
              cout << "                             |_/ " << endl;
              cout << endl;
              cout << "                                   ";

    SetConsoleTextAttribute(color, 12);

 cout << "@";

    SetConsoleTextAttribute(color, 7);
               Sleep(30);


                 if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 1;
                }
                break;
            case 5:
             cout << "\n\n\n\n\n" << endl;
             cout << "                                     ^ " << endl;
             cout << "                                     ^ " << endl;
	         cout << "                                   ----- " << endl;
             cout << "                                    | |  " << endl;
             cout << "                                    | | " << endl;
             cout << "                                    | | " << endl;
             cout << "                                    | | " << endl;
             cout << "                                    | | " << endl;
             cout << "                                    \\ / " << endl;

              Sleep(30);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;




        }






   }


}

//OWL Defense
void DefendMiniGame3()
{

    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

   dPosition = 1;
   Battle_Block = 5;

              cout << "\n\n\n\n\n\n" << endl;
              cout << "           Hit the spacebar with correct timing to block the attack!" << endl;
              cout << "\n\n" << endl;

              cout << "            _____               ______               _____         " << endl;
              cout << "           |     \\___          /      \\          ___/     |      " << endl;
		      cout << "                     \\____       )  (       ____/                 " << endl;
			  cout << "                          \\___ \\  \\/  / ___/                    " << endl;
		      cout << "                                 ----                              " << endl;
		      cout << endl;
		      cout << endl;
		      cout << "                     \\__                         __/              " << endl;
              cout << "                                 U   U                             " << endl;
              cout << "                               U   U   U                           " << endl;
              cout << "                                \\    /                            " << endl;
              cout << "                                _    _                             " << endl;
              cout << "\n\n\n\n\n\n\n";
              cout << "                                   @                        " << endl;

                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

            Sleep(enemyframe_speed);

   while(Battle_Block == 5)
   {
       dPosition += 1;
       if (dPosition > 8)
       {
           Sleep(250);
           Battle_Block = 0;
       }




        ClearScreen();
        cout << "\n\n\n\n\n\n" << endl;
        cout << "                 Hit spacebar with correct timing to block the attack!" << endl;
        cout << "\n\n" << endl;

        Sleep(150);

        switch(dPosition)
        {
            case 1:


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 2:
            cout << "            _____               ______               _____         " << endl;
            cout << "           |     \\___          /      \\          ___/     |      " << endl;
            cout << "                     \\____       )  (       ____/                 " << endl;
            cout << "                          \\___ \\  \\/  / ___/                    " << endl;
            cout << "                                 ----                              " << endl;
            cout << endl;
            cout << endl;
            cout << "                     \\__                         __/              " << endl;
            cout << "                                 U   U                             " << endl;
            cout << "                               U   U   U                           " << endl;
            cout << "                                \\    /                            " << endl;
            cout << "                                _    _                             " << endl;
            cout << "\n\n\n\n\n\n\n";
            cout << "                                   @                        " << endl;
            Sleep(30);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

              break;
            case 3:
            cout << "                                 ______                      " << endl;
            cout << "                                /      \\                    " << endl;
            cout << "                                  )  (                       " << endl;
			cout << "                            ___ \\  \\/  / ___               " << endl;
		    cout << "                       ___/       ----       \\___           " << endl;
		    cout << "                    __/                          \\__        " << endl;
		    cout << "                  _/                                \\_      " << endl;
	        cout << "                 /            /   U   U   \\           \\    " << endl;
            cout << "                /            /  U   U   U  \\           \\   " << endl;
            cout << "                ___                                  ___     " << endl;
			cout << "                                 \\    /                     " << endl;
            cout << "                                 _    _                      " << endl;
            cout << "\n\n\n\n\n\n\n";
            cout << "                                    @                        " << endl;
            Sleep(30);

                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 4:
            cout << "                                 ______                      " << endl;
            cout << "                                /      \\                    " << endl;
			cout << "                                  )  (                       " << endl;
			cout << "                            ___ \\  \\/  / ___               " << endl;
			cout << "                         _/       ----       \\_             " << endl;
		    cout << "                        /                      \\            " << endl;
            cout << "                       /                        \\           " << endl;
            cout << "                      /       /   U   U   \\      \\         " << endl;
            cout << "                     /       /  U   U   U  \\      \\        " << endl;
		    cout << "                    /    /                    \\    \\       " << endl;
			cout << "                                 \\    /	                  " << endl;
            cout << "                  ___/	         _    _           \\___       " << endl;
            cout << endl;
            cout << endl;
            cout << "                         ______          _______             " << endl;
            cout << "                         _____/          \\_____              " << endl;
		    cout << "                         \\____            ____/              " << endl;
			cout << "                          ___/            \\___               " << endl;
			cout << "                          \\__      @       __/               " << endl;
            Sleep(30);

                 if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 5:
            cout << "                                 ______                      " << endl;
            cout << "                                /      \\                    " << endl;
            cout << "                                  )  (                       " << endl;
			cout << "                            ___ \\  \\/  / ___               " << endl;
		    cout << "                       ___/       ----       \\___           " << endl;
		    cout << "                    __/                          \\__        " << endl;
		    cout << "                  _/                                \\_      " << endl;
	        cout << "                 /            /   U   U   \\           \\    " << endl;
            cout << "                /            /  U   U   U  \\           \\   " << endl;
            cout << "                ___                                  ___     " << endl;
			cout << "                                 \\    /                     " << endl;
            cout << "                                 _    _                      " << endl;
            cout << endl;
            cout << "                   ______                      _______             " << endl;
            cout << "                   \\_____                      _____/              " << endl;
		    cout << "                    ____/                      \\____              " << endl;
			cout << "                    \\___                        ___/               " << endl;
			cout << "                     __/           @            \\__               " << endl;
            Sleep(30);

                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

            case 6:
            cout << "            _____               ______               _____         " << endl;
            cout << "           |     \\___          /      \\          ___/     |      " << endl;
            cout << "                     \\____       )  (       ____/                 " << endl;
            cout << "                          \\___ \\  \\/  / ___/                    " << endl;
            cout << "                                 ----                              " << endl;
            cout << endl;
            cout << endl;
            cout << "                     \\__                         __/              " << endl;
            cout << "                                 U   U                             " << endl;
            cout << "                               U   U   U                           " << endl;
            cout << "                                \\    /                            " << endl;
            cout << "                                _    _                             " << endl;
            cout << endl;
            cout << "                        ______          _______             " << endl;
            cout << "                        _____/          \\_____              " << endl;
		    cout << "                        \\____            ____/              " << endl;
			cout << "                         ___/            \\___               " << endl;
			cout << "                         \\__      @       __/               " << endl;
            Sleep(30);

                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

            case 7:
            cout << "            _____               ______               _____         " << endl;
            cout << "           |     \\___          /      \\          ___/     |      " << endl;
            cout << "                     \\____       )  (       ____/                 " << endl;
            cout << "                          \\___ \\  \\/  / ___/                    " << endl;
            cout << "                                 ----                              " << endl;
            cout << endl;
            cout << endl;
            cout << "                     \\__                         __/              " << endl;
            cout << "                                 U   U                             " << endl;
            cout << "                               U   U   U                           " << endl;
            cout << "                                \\    /                            " << endl;
            cout << "                                _    _                             " << endl;
            cout << endl;
            cout << "                            ______   _______             " << endl;
            cout << "                            _____/  \\_____              " << endl;
		    cout << "                           \\____    ____/              " << endl;
			cout << "                             ___/    \\___               " << endl;
			cout << "                             \\__  ";

    SetConsoleTextAttribute(color, 12);

 cout << "@";

    SetConsoleTextAttribute(color, 7);


            cout << "   __/               " << endl;
            Sleep(30);


                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 1;
                }
                break;

            case 8:
            cout << "            _____               ______               _____         " << endl;
            cout << "           |     \\___          /      \\          ___/     |      " << endl;
            cout << "                     \\____       )  (       ____/                 " << endl;
            cout << "                          \\___ \\  \\/  / ___/                    " << endl;
            cout << "                                 ----                              " << endl;
            cout << endl;
            cout << endl;
            cout << "                     \\__                         __/              " << endl;
            cout << "                                 U   U                             " << endl;
            cout << "                               U   U   U                           " << endl;
            cout << "                                \\    /                            " << endl;
            cout << "                                _    _                             " << endl;
            cout << endl;
            cout << "                               ______               " << endl;
            cout << "                               _____/                " << endl;
		    cout << "                              \\____                " << endl;
			cout << "                                ___/                  " << endl;
			cout << "                                \\__                   " << endl;
            Sleep(30);


                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;




        }






   }


}

//TURTLE DEFENSE
void DefendMiniGame4()
{

    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

   dPosition = 1;
   Battle_Block = 5;

              cout << "\n\n\n\n\n\n" << endl;
              cout << "           Hit the spacebar with correct timing to block the attack!" << endl;
              cout << "\n\n" << endl;


              cout << "                                           _____________                      " << endl;
              cout << "                                         _/___/_______/ \\_                   " << endl;
		      cout << "                                       _/    /  |    /    \\_                 " << endl;
	          cout << "                              ___     /\\____/   |___/____/  \\               " << endl;
	          cout << "                             / / \\___| /   \\    /       _\\___|__           " << endl;
              cout << "                             \\___ \   |/     |__/______ /     |_/            " << endl;
              cout << "                                 \\___|      |  \\      \\      |             " << endl;
              cout << "                                      \\_____/____\\______\\____/             " << endl;
	          cout << "                                        |  /             |  /                 " << endl;
              cout << "                                        |__              |__                  " << endl;
                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

            Sleep(1000);

   while(Battle_Block == 5)
   {
       dPosition += 1;
       if (dPosition > 10)
       {
           Sleep(100);
           Battle_Block = 0;
       }




        ClearScreen();
        cout << "\n\n\n\n\n\n" << endl;
        cout << "                 Hit spacebar with correct timing to block the attack!" << endl;
        cout << "\n\n" << endl;

        Sleep(enemyframe_speed);

        switch(dPosition)
        {
            case 1:


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 2:
              cout << "                                           _____________                      " << endl;
              cout << "                                         _/___/_______/ \\_                   " << endl;
		      cout << "                                       _/    /  |    /    \\_                 " << endl;
	          cout << "                              ___     /\\____/   |___/____/  \\               " << endl;
	          cout << "                             / ! \\___| /   \\    /       _\\___|__           " << endl;
              cout << "                             \\___ \   |/     |__/______ /     |_/            " << endl;
              cout << "                                 \\___|      |  \\      \\      |             " << endl;
              cout << "                                      \\_____/____\\______\\____/             " << endl;
	          cout << "                                        |  /             |  /                 " << endl;
              cout << "   @                                    |__              |__                  " << endl;
              Sleep(200);



                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

              break;
            case 3:


              cout << "                                           _____________                      " << endl;
              cout << "                                         _/___/_______/ \\_                   " << endl;
		      cout << "                                       _/    /  |    /    \\_                 " << endl;
	          cout << "                              ___     /\\____/   |___/____/  \\               " << endl;
	          cout << "                             / ! \\___| /   \\    /       _\\___|__           " << endl;
              cout << "                             \\___ \   |/     |__/______ /     |_/            " << endl;
              cout << "                                 \\___|      |  \\      \\      |             " << endl;
              cout << "                                      \\_____/____\\______\\____/             " << endl;
	          cout << "                                        |  /             |  /                 " << endl;
              cout << "   @                                    |__              |__                  " << endl;
              Sleep(30);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 4:
            cout << "                                           _____________                      " << endl;
		    cout << "                                         _/___/_______/ \\_                   " << endl;
		    cout << "                                       _/    /  |    /    \\_                 " << endl;
	        cout << "                                      /\\____/   |___/____/  \\               " << endl;
	        cout << "                                     | /   \\    /       _\\___|_             " << endl;
            cout << "                                     |/     |__/______ /     | \\             " << endl;
	        cout << "                                     |      |  \\_     \\______|\\_           " << endl;
	        cout << "                                      \\_____/    \\      /   _/              " << endl;
            cout << "                                        \\___\\_____\\____/___/               " << endl;
            cout << "   @                                      \\__/         \\__/                 " << endl;
              Sleep(30);

                 if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 5:
            cout << "                                       _____________                       " << endl;
		    cout << "                                     _/___/       / \\_                    " << endl;
		    cout << "                                   _/    /__     /    \\_                  " << endl;
	        cout << "                                  /\\____/   \\___/____/__\\               " << endl;
	        cout << "                                 /  _/       /       /   \\                " << endl;
            cout << "                                /__/      __/____   /     \\               " << endl;
	        cout << "                                |_ \\     |       \\__\\_____|             " << endl;
	        cout << "                                  \\_\\____/       /\\  \\__/              " << endl;
            cout << "                                    \\|_  \\_____/   \\_\\/                " << endl;
            cout << "   @                                   \\_______|___/                      " << endl;
              Sleep(30);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

            case 6:
            cout << "                                   _____                              " << endl;
		    cout << "                                 _/ \\___\\_                          " << endl;
			cout << "                               _/   /    \\\\_                        " << endl;
		    cout << "                             _/\\___/_     \\/\\_                     " << endl;
            cout << "                            /   /    \\    /   \\                     " << endl;
            cout << "                           /___/      \\__/__   \\                    " << endl;
            cout << "                          /    \\_____  /    \\__/\\                  " << endl;
	        cout << "                          \\____ /    \\/     _\\__/                  " << endl;
            cout << "   @                           \\______\\____/                        " << endl;
              Sleep(30);

                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

            case 7:
            cout << "                           _____________                       " << endl;
		    cout << "                         _/___/       / \\_                    " << endl;
		    cout << "                       _/    /__     /    \\_                  " << endl;
	        cout << "                      /\\____/   \\___/____/__\\               " << endl;
	        cout << "                     /  _/       /       /   \\                " << endl;
            cout << "                    /__/      __/____   /     \\               " << endl;
	        cout << "                    |_ \\     |       \\__\\_____|             " << endl;
	        cout << "                      \\_\\____/       /\\  \\__/              " << endl;
            cout << "                        \\|_  \\_____/   \\_\\/                " << endl;
            cout << "   @                       \\_______|___/                      " << endl;
              Sleep(30);

                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

            case 8:
            cout << "                       _____                              " << endl;
		    cout << "                     _/ \\___\\_                          " << endl;
			cout << "                   _/   /    \\\\_                        " << endl;
		    cout << "                  /\\___/_     \\/\\_                     " << endl;
            cout << "                /   /    \\    /   \\                     " << endl;
            cout << "               /___/      \\__/__   \\                    " << endl;
            cout << "              /    \\_____  /    \\__/\\                  " << endl;
	        cout << "              \\____ /    \\/     _\\__/                  " << endl;
            cout << "   @               \\______\\____/                        " << endl;
              Sleep(30);

                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 9:
            cout << "           _____________                       " << endl;
		    cout << "         _/___/       / \\_                    " << endl;
		    cout << "       _/    /__     /    \\_                  " << endl;
	        cout << "      /\\____/   \\___/____/__\\               " << endl;
	        cout << "     /  _/       /       /   \\                " << endl;
            cout << "    /__/      __/____   /     \\               " << endl;
	        cout << "    |_ \\     |       \\__\\_____|             " << endl;
	        cout << "     \\_\\____/       /\\  \\__/              " << endl;
            cout << "       \\|_  \\_____/   \\_\\/                " << endl;
            cout << "   ";

    SetConsoleTextAttribute(color, 12);

 cout << "@";

    SetConsoleTextAttribute(color, 7);

            cout << "     \\_______|___/                      " << endl;
              Sleep(30);


                       if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 1;
                }
            break;

            case 10:
            cout << "       _____                              " << endl;
		    cout << "     _/ \\___\\_                          " << endl;
			cout << "   _/   /    \\\\_                        " << endl;
		    cout << "  /\\___/_     \\/\\_                     " << endl;
            cout << "/   /    \\    /   \\                     " << endl;
            cout << "___/      \\__/__   \\                    " << endl;
            cout << "   \\_____  /    \\__/\\                  " << endl;
	        cout << "____ /    \\/     _\\__/                  " << endl;
            cout << "   \\______\\____/                        " << endl;
              Sleep(30);

                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;






        }






}

}

//DRAGON DEFENSE
void DefendMiniGame5()
{


        HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);


       dPosition = 1;
   Battle_Block = 5;



              ClearScreen();
              cout << "\n\n\n\n\n\n" << endl;
              cout << "                 Hit spacebar with correct timing to block the attack!" << endl;
              cout << "\n\n" << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
			  cout << "                              \\_|                      " << endl;
              cout << "                             / -\\                      " << endl;
              cout << "                      /\\_    |/\\__                    " << endl;
              cout << "                    _/   \\   \\\\                      " << endl;
              cout << "                  _/      \\_/ /                        " << endl;
              cout << "                 /            \\                        " << endl;
              cout << "               _/           / |                         " << endl;
              cout << "              /            / /                          " << endl;
              cout << "             /           _/_/                           " << endl;
              cout << "            /            _/                             " << endl;
              cout << "           /          /\\/                              " << endl;
		      cout << "          /_______/\\ / \\\\_                           " << endl;
              cout << "                    \\\\                                " << endl;
              cout << "                    // _                                " << endl;
              cout << "                   \\__/                                " << endl;
              cout << "                                                     @  " << endl;


                if(GetKeyState(' ') & 0x8000)
               {
                    Battle_Block = 0;
               }

            Sleep(1000);

   while(Battle_Block == 5)
   {
       dPosition += 1;
       if (dPosition > 7)
       {
           Sleep(100);
           Battle_Block = 0;
       }



        ClearScreen();
        cout << "\n\n\n\n\n\n" << endl;
        cout << "                 Hit spacebar with correct timing to block the attack!" << endl;
        cout << "\n\n" << endl;

        Sleep(enemyframe_speed);

        switch(dPosition)
        {
            case 1:

              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
			  cout << "                              \\_|                      " << endl;
              cout << "                             / -\\                      " << endl;
              cout << "                      /\\_    |/\\__                    " << endl;
              cout << "                    _/   \\   \\\\                      " << endl;
              cout << "                  _/      \\_/ /                        " << endl;
              cout << "                 /            \\                        " << endl;
              cout << "               _/           / |                         " << endl;
              cout << "              /            / /                          " << endl;
              cout << "             /           _/_/                           " << endl;
              cout << "            /            _/                             " << endl;
              cout << "           /          /\\/                              " << endl;
		      cout << "          /_______/\\ / \\\\_                           " << endl;
              cout << "                    \\\\                                " << endl;
              cout << "                    // _                                " << endl;
              cout << "                   \\__/                                " << endl;
              cout << "                                                     @  " << endl;
             Sleep(30);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 2:
             cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << "  ___________                                                                " << endl;
              cout << "  \\___       \\___            _  -                                          " << endl;
              cout << "      \\_	 \\___	      \\_|                                              " << endl;
              cout << "    |   \\__          \\___     / -\\                                        " << endl;
              cout << "    \\	   \\____	 \\    |/\\__                                           " << endl;
              cout << "    \\__         \\__       \\   \\\\                                        " << endl;
              cout << "        \\                  \\_/ /                                           " << endl;
              cout << "         \\                     \\                                           " << endl;
              cout << "          \\            \\       |                                           " << endl;
              cout << "           \\____         __    /                                            " << endl;
              cout << "                \\       /    _/                                             " << endl;
              cout << "            __   \\     /  __/                                               " << endl;
              cout << "           / \\\\_//\\___/ \\/                                               " << endl;
		      cout << "        \\_/              \\_\                                               " << endl;
		      cout << endl;
		      cout << endl;
		      cout << endl;
              cout << "                                                     @                       " << endl;
             Sleep(30);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

              break;
            case 3:
             cout << "         |\\                                                                 " << endl;
             cout << "         | \\                                                                " << endl;
             cout << "        //\\ \\_                                                             " << endl;
             cout << "       /   \\_ \\                                                            " << endl;
             cout << "      /      \\ \\                                                           " << endl;
             cout << "     /        \\ \\ /\\                                                      " << endl;
             cout << "     |         \\ \\  \\                                                     " << endl;
             cout << "     |	        \\_/\\ \\	                                               " << endl;
             cout << "  __ |              \\ \\     ___                                            " << endl;
             cout << "   \\ \\/	             \\ \\    |/\\\\__/                                    " << endl;
             cout << "    \\                  \\ \\   \\\\ \\-\\                                   " << endl;
             cout << "     \\                   \\\\_/ /  \\__                                     " << endl;
             cout << "      \\                      \\    / \\                                     " << endl;
             cout << "      |_                    |    \\   \\                                     " << endl;
             cout << "        \\               __ /      |   \\                                    " << endl;
             cout << "         \\____________ / _/       \\    \\                                  " << endl;
             cout << "                \\__     /\\         |    \\                                 " << endl;
             cout << "                  \\  _/\\__\\                                               " << endl;
             cout << "                   / /                                                       " << endl;
             cout << "                   //                                                        " << endl;
             cout << "                   \\\\                                                      " << endl;
             cout << "                   //                                                        " << endl;
             cout << "                   \\\\_/                                                    " << endl;
             cout << endl;
             cout << endl;
             cout << "                                                     @                       " << endl;
             Sleep(30);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 4:
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << "  ___________                                                                " << endl;
              cout << "  \\___       \\___            _  -                                          " << endl;
              cout << "      \\_	 \\___	      \\_|                                              " << endl;
              cout << "    |   \\__          \\___     / -\\                                        " << endl;
              cout << "    \\	   \\____	 \\    |/\\__                                           " << endl;
              cout << "    \\__         \\__       \\   \\\\ | \\                                   " << endl;
              cout << "        \\                  \\_/ / \\  \\                                    " << endl;
              cout << "        \\              \\       |  |   \\                                   " << endl;
              cout << "         \\______               |   \\   \\                                  " << endl;
              cout << "                \\__          /      |   \\                                  " << endl;
              cout << "                   \\__\\    _/\\      \\    \\                              " << endl;
			  cout << "         	       \\  _/\\_\\      |    \\                                 " << endl;
              cout << "                       / /            \\    \\                               " << endl;
		      cout << "                       //              \\    \\                              " << endl;
              cout << "                       \\\\                                                  " << endl;
              cout << "                       //                                                    " << endl;
              cout << "                    \\\\_/                                                   " << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << "                                                     @                       " << endl;
             Sleep(30);

                 if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 5:
            cout << "           ___                                                    " << endl;
            cout << "          /   \\_                                                 " << endl;
            cout << "         /      \\                                                " << endl;
            cout << "        /        \\                                               " << endl;
            cout << "       /          \\/\\                                           " << endl;
            cout << "      |              \\                                           " << endl;
            cout << "      |	              \\ 	                                   " << endl;
            cout << "      |         ___    \\    ___                                  " << endl;
            cout << "     /         /   \\     \\  |/\\\\__/                           " << endl;
            cout << "     \\        /     \\___  \\  \\\\ \\-\\                        " << endl;
            cout << "      \\      / \\        \\ \\_/ /  \\__                         " << endl;
            cout << "       \\    /   \\         - \\    / \\                          " << endl;
            cout << "        \\  /     \\          |    \\  \\                         " << endl;
            cout << "         \\/       \\        /      |  \\                         " << endl;
            cout << "                   \\__    /       \\   \\                        " << endl;
            cout << "                    |    /\\        |    \\                       " << endl;
            cout << "                    \\  _/\\_\\        \\    \\                   " << endl;
            cout << "                    / /              |    \\                      " << endl;
            cout << "                    //                \\    \\                    " << endl;
            cout << "                    \\\\                 |    \\                  " << endl;
            cout << "                    //                 |      \\                  " << endl;
            cout << "                    \\_/                \\       \\               " << endl;
            cout << "                                         \\       \\              " << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "                                                     ";

    SetConsoleTextAttribute(color, 12);

 cout << "@";

    SetConsoleTextAttribute(color, 7);

            cout << "            " << endl;
             Sleep(30);

                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 1;
                }
                break;

            case 6:
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << endl;
              cout << "  ___________                                                                " << endl;
              cout << "  \\___       \\___            _  -                                          " << endl;
              cout << "      \\_	 \\___	      \\_|                                              " << endl;
              cout << "    |   \\__          \\___     / -\\                                        " << endl;
              cout << "    \\	   \\____	 \\    |/\\__                                           " << endl;
              cout << "    \\__         \\__       \\   \\\\ | \\                                   " << endl;
              cout << "        \\                  \\_/ / \\  \\                                    " << endl;
              cout << "        \\              \\       |  |   \\                                   " << endl;
              cout << "         \\______               |   \\   \\                                  " << endl;
              cout << "                \\__          /      |   \\                                  " << endl;
              cout << "                   \\__\\    _/\\      \\    \\                              " << endl;
			  cout << "         	       \\  _/\\_\\      |    \\                                 " << endl;
              cout << "                       / /            \\    \\                               " << endl;
		      cout << "                       //              \\    \\                              " << endl;
              cout << "                       \\\\               |    \\                            " << endl;
              cout << "                       //               |     \\                             " << endl;
              cout << "                    \\\\_/                 \\      \\                        " << endl;
              cout << "                                          \\       \\                        "  << endl;
              cout << "                                           \\        \\                      " << endl;
              cout << endl;
              cout << "                                                     @                       " << endl;
             Sleep(30);


                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 1;
                }
                break;

            case 7:
             cout << "         |\\                                                                 " << endl;
             cout << "         | \\                                                                " << endl;
             cout << "        //\\ \\_                                                             " << endl;
             cout << "       /   \\_ \\                                                            " << endl;
             cout << "      /      \\ \\                                                           " << endl;
             cout << "     /        \\ \\ /\\                                                      " << endl;
             cout << "     |         \\ \\  \\                                                     " << endl;
             cout << "     |	        \\_/\\ \\	                                               " << endl;
             cout << "  __ |              \\ \\     ___                                            " << endl;
             cout << "   \\ \\/	             \\ \\    |/\\\\__/                                    " << endl;
             cout << "    \\                  \\ \\   \\\\ \\-\\                                   " << endl;
             cout << "     \\                   \\\\_/ /  \\__                                     " << endl;
             cout << "      \\                      \\    / \\                                     " << endl;
             cout << "      |_                    |    \\   \\                                     " << endl;
             cout << "        \\               __ /      |   \\                                    " << endl;
             cout << "         \\____________ / _/       \\    \\                                  " << endl;
             cout << "                \\__     /\\        |     \\                                 " << endl;
             cout << "                  \\  _/\\__\\        \\     \\                                " << endl;
             cout << "                   / /              |     \\                               " << endl;
             cout << "                   //                \\     \\                              " << endl;
             cout << "                   \\\\                 |      \\                            " << endl;
             cout << "                   //                  |      \\                              " << endl;
             cout << "                   \\\\_/                 \\      \\                        " << endl;
             cout << "                                          \\      \\                      " << endl;
             cout << "                                           \\       \\                   " << endl;
             cout << "                                            \\        \\                  " << endl;
             cout << "                                             \\________\\                       " << endl;
             Sleep(30);


                {
                    Battle_Block = 0;
                }
                break;



        }






   }
}

//WYRM DEFENSE
void DefendMiniGame6()
{


    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

   dPosition = 1;
   Battle_Block = 5;

    ClearScreen();
    cout << "\n\n\n\n\n\n" << endl;
    cout << "                 Hit spacebar with correct timing to block the attack!" << endl;
    cout << "\n\n" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                     _____                      " << endl;
    cout << "                                    / ___ \\      ----           " << endl;
    cout << "                                ___/ /___\\ \\____//__\\\\_____     " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "___________________________@_______________________________     " << endl;


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

            Sleep(1000);

   while(Battle_Block == 5)
   {
       dPosition += 1;
       if (dPosition > 13)
       {
           Sleep(90);
           Battle_Block = 0;
       }



        ClearScreen();
        cout << "\n\n\n\n\n\n" << endl;
        cout << "                 Hit spacebar with correct timing to block the attack!" << endl;
        cout << "\n\n" << endl;

        Sleep(enemyframe_speed);

        switch(dPosition)
        {



    case 1:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                     _____                      " << endl;
    cout << "                                    / ___ \\      ----           " << endl;
    cout << "                                ___/ /___\\ \\____//__\\\\_____     " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "_______________________________@___________________________     " << endl;
    Sleep(40);

                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
    case 2:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                     _____                         " << endl;
    cout << "                                    / ___ \\      ---              " << endl;
    cout << "                                ___/ /___\\ \\____//_________      " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "_______________________________@___________________________     " << endl;
    Sleep(40);





                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }

              break;
            case 3:

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                     _____                         " << endl;
    cout << "                                    / ___ \\       _               " << endl;
    cout << "                                ___/ /___\\ \\____//_________      " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "_______________________________@___________________________     " << endl;
    Sleep(40);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 4:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                     _____                       " << endl;
    cout << "                                    / ____\\                     " << endl;
    cout << "                                ___/ /___________________        " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "_______________________________@___________________________     " << endl;
    Sleep(40);

                 if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 5:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                                                 " << endl;
    cout << "                                    __                           " << endl;
    cout << "                                ___/ /___________________        " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "_______________________________@___________________________     " << endl;
    Sleep(40);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

            case 6:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                                                 " << endl;
    cout << "                                                                 " << endl;
    cout << "                                _________________________        " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "_______________________________@___________________________     " << endl;
    Sleep(40);

                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

            case 7:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                                                 " << endl;
    cout << "                                                                 " << endl;
    cout << "      ___                          _________________________     " << endl;
    cout << "    _//i |                                                       " << endl;
    cout << "   /_/   /				                                    " << endl;
    cout << "  /_/   \\                                                       " << endl;
    cout << " __/    /                                                        " << endl;
    cout << "/ /    /                                                         " << endl;
    cout << "_/    /________________________@____________________________     " << endl;
    Sleep(40);

                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

            case 8:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                                                 " << endl;
    cout << "                                                                 " << endl;
    cout << "       \\_                                                       " << endl;
    cout << "       \\_\\____                                                 " << endl;
    cout << "       __\\/i /                  _________________________       " << endl;
    cout << "     _/_/   _\\                                                  " << endl;
    cout << "    / /   _/                                                     " << endl;
    cout << "   / /	  /                                                       " << endl;
    cout << "  / / )  /                                                       " << endl;
    cout << " / / (  /                                                        " << endl;
    cout << " \\/  ) /                                                        " << endl;
    cout << "_/  ( /_________________________@__________________________      " << endl;
    Sleep(40);

                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;
            case 9:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "              _ \\_ \\_                                            " << endl;
    cout << "           __/|___\\__\\                                           " << endl;
    cout << "         _/___/    - |            _________________________        " << endl;
    cout << "       _/_/     __/\\__\\                                          " << endl;
    cout << "     _/_/    __/                                                   " << endl;
    cout << "    / /    _/                                                      " << endl;
    cout << "   / /	   /	                                                    " << endl;
    cout << "  / / )  /                                                         " << endl;
    cout << " / / (  /                                                          " << endl;
    cout << " \\/  ) /                                                           " << endl;
    cout << "_/  ( /_________________________@__________________________        " << endl;

    Sleep(40);

                       if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
            break;

    case 10:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "             _______                                             " << endl;
    cout << "           _/_______\\                                           " << endl;
    cout << "         _/_/)      \\\\_                                        " << endl;
    cout << "       _/_/(    ___    | __     _________________________        " << endl;
    cout << "     _/_/)   __/   |_  |_|                                       " << endl;
    cout << "    / / (  _/        |i|  __                                     " << endl;
    cout << "    \\/ )  /	     |__\\_|                                      " << endl;
    cout << "    / (  /                                                       " << endl;
    cout << "   /  ) /                                                        " << endl;
    cout << "  /  ( /                                                         " << endl;
    cout << " /   )/                                                          " << endl;
    cout << "/   (/                                                           " << endl;
    cout << "    /                                                            " << endl;
    cout << "   /___________________________@_________________________        " << endl;
    Sleep(40);


                            if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;

    case 11:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "               _______                                             " << endl;
    cout << "             _/_______\\                                           " << endl;
    cout << "           _/_/)( )(  \\\\_                                        " << endl;
    cout << "          |_/(    __    ||     _________________________           " << endl;
    cout << "         _/)   __/  \\   \\\\                                      " << endl;
    cout << "        / (  _/      |   \\\\                                      " << endl;
    cout << "       / )  /	      \\   ||  _                                    " << endl;
    cout << "      / (  /           |_   |_|                                    " << endl;
    cout << "     /    /              |i |  __                                  " << endl;
    cout << "    /    /               |___\\_|                                  " << endl;
    cout << "   /    /                                                          " << endl;
    cout << "  /    /                                                           " << endl;
    cout << " /    /                                                            " << endl;
    cout << "/____/_______________________@__________________________           " << endl;
    Sleep(40);



                                    if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;


    case 12:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "               _______                                             " << endl;
    cout << "             _/_______\\                                           " << endl;
    cout << "           _/_/)( )( )\\\\_                                        " << endl;
    cout << "          |_/(    __    ||     _________________________           " << endl;
    cout << "         _/)   _/   \\    ||                                       " << endl;
    cout << "        / (  _/       \\   \\\\                                    " << endl;
    cout << "       / )  /	       \\   || 	                                    " << endl;
    cout << "      / (  /            \\   \\\\                                  " << endl;
    cout << "     /    /              |   ||/                                   " << endl;
    cout << "    /    /               |   ||\\                                  " << endl;
    cout << "   /    /                 \\   \\\/ /                              " << endl;
    cout << "  /    /                   |  ^\\ \\                               " << endl;
    cout << " /    /                     \____\\/                               " << endl;
    cout << "/____/_______________________";

    SetConsoleTextAttribute(color, 12);

 cout << "@";

    SetConsoleTextAttribute(color, 7);

    cout << "__________________________           " << endl;
    Sleep(40);


                if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 1;
                }
                break;


    case 13:
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                _______                                              " << endl;
    cout << "               /_______\\                                            " << endl;
    cout << "             _/)( )( ) \\\\                                          " << endl;
    cout << "           _/(   ___ )  ||         _________________________         " << endl;
    cout << "         _/)   _/   \\    \\\\                                       " << endl;
    cout << "        / (  _/      \\    \\\\                                      " << endl;
    cout << "       /    /	      \\    \\\\                                      " << endl;
    cout << "      /    /           |    \\\\                                     " << endl;
    cout << "     /    /             \\    \\\\_                                  " << endl;
    cout << "    /    /               \\     \\\\                                 " << endl;
    cout << "   /    /                 \\     \\\\                                " << endl;
    cout << "  /    /                   \\     \\\\                               " << endl;
    cout << " /    /                     \\     \\\\                              " << endl;
    cout << "/____/_______________________\\ ____\\\\______________________       " << endl;
    Sleep(40);

                    if(GetKeyState(' ') & 0x8000)
                {
                    Battle_Block = 0;
                }
                break;





        }






}


}
