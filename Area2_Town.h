
//This file contains the code for all of the rooms within the Second area of the game, the First Town.

void Area_Town()
{

    void Debug();
    void Move();
    void Pause();
    void TravelZone();
    void SlowText();
    void PlayerSleep();


    cout << "\n\n\n\n\n\n\n\n\n";



    //Travel Zone - Town Gate
    if(gPosition == 2)
    {

        switch(gMove)
        {

        case 1:
            gPosition = 21; Debug(); Move();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            TravelZone();
            break;

        }



    }


    //Main Square
    if(gPosition == 21)
    {
        switch(gMove)
        {
        case 1:
            gPosition = 24; Debug(); Move();
            break;
        case 2:
            gPosition = 22; Debug(); Move();
            break;
        case 3:
            gPosition = 23; Debug(); Move();
            break;
        case 4:
            gPosition = 2;
            break;
        case 5:
            cout << "You go up to the fountain in the middle of the square." << endl;
            cout << "You feel cool standing next to the water.\n" << endl;
            if(Town_Fountain == true)
            {
                cout << "The coin you threw in glistens in the sunlight.";
                Pause();
            }
            else
            {
                cout << "Throw a coin into the fountain?" << endl;
                cout << endl;
                cout << "1: Yes" << endl;
                cout << "2: No" << endl;
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
                    cout << "You threw a coin into the fountain. It falls to the bottom." << endl;
                    cout << "*Luck + 1*";
                    pLuck += 1;
                    RandomLuckValue += 1;
                    pCoins -= 1;
                    Town_Fountain = true;
                    Pause();
                    break;
                case 2:
                    cout << "You decided not to throw a coin into the fountain." << endl; Pause();
                    break;
                }

                Pause();
            }

        }
    }


    //Edwins Shop
    if(gPosition == 22)
    {
        switch(gMove)
        {
        case 1:
            ClearScreen(); cout << "\n\n                       ";
            animationText = "Would you like to buy something?";
            FastText();
            cout << "\n\n\n\n\n\n\n\n";

            cout << "                            1. Elixers - 5 coins" << endl;
            cout << "                            2. Pumpkin Pie - 2 coins" << endl;
            cout << "                            3. Paper - 5 coins" << endl;
            if(Player_Shield == false)
            {
                cout << "                            4. Shield - 20 coins" << endl;
            }
            cout << "                            5. Nothing" << endl;
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
                        case '4':
                        decision = 4;
                        break;
                        case '5':
                        decision = 5;
                        break;
                        }
            cout << endl;
            switch(decision)
            {
            case 1:
                if(pCoins >= 5)
                {

                    cout << "                         You bought some elixers!" << endl;
                    cout << "                              *Elixers + 3*" << endl;
                    DoublePause();

                    cName = "Shopkeeper";
                    animationText = "Thank you for your buisness.";
                    Dialogue();
                    pElixers += 3;
                    pCoins -= 5;
                }
                else {cout << "                    You don't have enough coins for that!" << endl;}
                Pause();
                break;
            case 2:
                if(pCoins >= 2)
                {
                    cout << "                          You bought a pumpkin pie!" << endl;
                    cout << "                                 *Food + 3*" << endl;
                    DoublePause();

                    cName = "Shopkeeper";
                    animationText = "Thank you for your buisness.";
                    Dialogue();
                    pFood += 3;
                    pCoins -= 2;
                }
                else {cout << "                    You don't have enough coins for that!" << endl;}
                Pause();
                break;
            case 3:
                if(pCoins >= 5 && Town_Paper == false)
                {
                    cout << "                           You bought some paper!" << endl;
                    DoublePause();

                    cName = "Shopkeeper";
                    animationText = "Thank you for your buisness.\n";
                    Dialogue();
                    Town_Paper = true;
                    pCoins -= 5;
                }
                else if(pCoins >= 5 && Town_Paper == true)
                {
                    cName = pName;
                    animationText = "Didn't i already buy that?";
                    Dialogue();
                }
                else if(pCoins <= 5)
                {cout << "                    You don't have enough coins for that!" << endl;}
                Pause();
                break;
            case 4:
                if(pCoins >= 20 && Player_Shield == false)
                {
                     cName = " ";
                    cout << "                          You bought the Shield!" << endl;
                    DoublePause();

                    cName = "Shopkeeper";
                    animationText = "Thank you so much for your buisness!";
                    Dialogue();

                    Player_Shield = true;
                    pCoins -= 20;
                     if(Player_Shield == true && Player_Armor == true && Player_WoodenSword == true)
                    {
                        Grandmas_Items = true;
                        cName = pName;
                        animationText = "I got all of the things Grandma wanted me to collect! I'd better go back \nto her.";
                        Dialogue();
                    }
                }
                else if(Player_Shield == true)
                {

                }
                else if(Player_Shield == false && pCoins <= 20)
                 {
                     cout << "                    You don't have enough coins for that!" << endl;
                 }
                 Pause();
                break;
            case 5:
                break;
            }
            Pause();
            break;
        case 2:
             break;
        case 3:
            gPosition = 21;
            break;
        case 4:
            break;
        case 5:
            cName = "Shopkeeper";
            animationText = "Welcome to the shop, how can I help you?";
            Dialogue();
            cout << "1. What do you sell?" << endl;
            cout << "2. Can you tell me how to get coins?" << endl;
            cout << "3. Nothing" << endl;
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

                cName = "Shopkeeper";
                animationText = "If you would like to see what I sell, come up to the counter.";
                Dialogue();
                break;
            case 2:

                cName = "Shopkeeper";
                animationText = "I heard that searching through each area you come upon can bring one coins.";
                Dialogue();
                break;

            }
            Pause();




        }

    }


    //House Path
    if(gPosition == 23)
    {
        switch(gMove)
        {
        case 1:
            gPosition = 28; Debug(); Move();
            break;
        case 2:
            gPosition = 21;
            break;
        case 3:
            gPosition = 26; Debug(); Move();
            break;
        case 4:
            gPosition = 29; Debug(); Move();
            break;
        case 5:
            cout << "You look through the bushes." << endl;
            if(Town_Bushes == false)
            {
                cout << "For some reason, you find coins in them." << endl;
                cout << "*Coins + 5*" << endl;
                pCoins += 5;
                Town_Bushes = true; Pause();
            }
            else
            {
                cout << "You don't find anything of interest there." << endl;
            }
            Pause();
            break;
        }
    }


    //Prancing Pony Inn
    if(gPosition == 24)
    {
        switch(gMove)
        {
        case 1:
            cName = "Innkeeper";
            animationText = "Innkeeper: Would you like to stay the night? - 5 coins";
            Dialogue();
            cout << endl;
            cout << "               1. Yes                       2.No" << endl;
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
                if(pCoins >= 5 && Inn == false)
                {
                Inn = true;
                Town_InnTable = false;
                animationText = "Innkeeper: Heres the key to your room, you'll find it upstairs.";
                Dialogue();
                pCoins -= 5;
                }
                else if(Inn == true)
                {
                    cout << "You already have a room!" << endl;
                    Pause();
                }
                else if(pCoins < 5)
                {
                    cout << "You don't have enough coins for that!" << endl;
                    Pause();
                }
                Pause();
                break;
            case 2:
                animationText = "Innkeeper: If you change you mind come on back.";
                Dialogue();
                cout << endl;
                break;
            }
            break;
        case 2:
            if(Inn == true)
            {
                gPosition = 25; Debug(); Move();
            }
            else
            {
                cout << "You don't have access to that room!" << endl; Pause();
            }
            break;
        case 3:
            break;
        case 4:
            gPosition = 21;
            break;
        case 5:
            cName = "Innkeeper";
            animationText = "Innkeeper: How can I help you?";
            Dialogue();
            cout << "1. Can I buy a room?" << endl;
            cout << "2. Got any Rumors?" << endl;
            cout << "3. Nothing" << endl;
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
                animationText = "Innkeeper: I can rent you the room for the night if you come up to the counter.";
                Dialogue();
                cout << endl;
                break;
            case 2:
                animationText = "Innkeeper: I heard that the old man used to be a great swordsman. And Hilda is\nknown for rewarding those who will listen to her stories.";
                Dialogue();
                cout << endl;
                break;
            }
            Pause();





        }
    }


    //InnRoom
    if(gPosition == 25)
    {
        switch(gMove)
        {
        case 1:
            if(Inn == true)
            {
            cout << "You go up to the bed, it looks comfortable." << endl;
            cout << "Go to sleep?" << endl;
            cout << "(You will not be able to re-enter the room after leaving once you do)" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
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
                PlayerSleep();

                Inn = false; Town_InnTable = false;
                break;
            case 2:
                cout << "You decide not to sleep." << endl; Pause();
                break;
            }
            }
            else
            {
                cout << "You already stayed the night." << endl;
            }
            Pause();
            break;

        case 2:
            if(Town_InnTable == false)
            {
            cout << "You go up to the table in the room. The Innkeeper left a meal on it for you." << endl;
            cout << "*Food + 2*" << endl;
            pFood += 2;
            Town_InnTable = true;
            }
            else
            {
            cout << "You go up to the table in the room. It has nothing on it." << endl;
            }
            Pause();
            break;
        case 3:
            if(Inn == false)
            {
            cName = "Innkeeper";
            animationText = "Innkeeper: Thank you for staying the night. Come again!";
            Dialogue();
            }
            gPosition = 24;
            break;
        case 4:
            if(Town_Cookbook == false)
            {
                cout << "You look at the bookshelf. A sign hangs next to it." << endl;
                animationText = "Sign: Take any book you like, and feel free to add your own!";
                FastText();
                cout << "Most of the books are boring, but you see an interesting cookbook.\nTake it?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                switch(getch())
                {
                    case '1': decision = 1; break;
                    case '2': decision = 2; break;
                }
                switch(decision)
                {
                    case 1:
                        cout << "You take the cookbook with you." << endl; Pause(); Town_Cookbook = true;
                        break;
                    case 2:
                        cout << "You decide to leave the book." << endl; Pause();
                        break;
                }
            }
            else
            {
                cout << "You see a bookshelf filled with boring books." << endl; Pause();
            }
            Pause();
            break;
        case 5:
            cout << "You look around the room, it's warm and cozy. It seems like a nice place to \nspend the night." << endl;
            Pause();

        }
    }


    //Old Mans House
    if(gPosition == 26)
    {
        switch(gMove)
        {
        case 1:
            if(sCutscene_OldMan1 == false && sCutscene_GrandmaHelps == false)
            {
                cName = "Old Man";
                animationText = "Good Evening to you.";
                Dialogue();
            }
            else if(sCutscene_OldMan1 == false && sCutscene_GrandmaHelps == true)
            {
                Cutscene_OldMan1();
                sCutscene_OldMan1 = true;
            }
            else if(sCutscene_OldMan1 == true && sCutscene_OldMan2 == false && Town_Paper == true)
            {
                Cutscene_OldMan2();
                sCutscene_OldMan2 = true;
            }
            else if(sCutscene_OldMan1 == true && Town_Paper == false)
            {
                cName = "Old Man";
                animationText = "If you would like me to give you my sword, please bring me some paper \nto write a letter with.";
                Dialogue();
            }
            else if(sCutscene_OldMan1 == true && sCutscene_OldMan2 == true)
            {
                cName = "Old Man";
                animationText = "Thank you for doing me this favor. Be careful on your journey.";
                Dialogue();
            }
            Pause();
            break;
        case 2:
            gPosition = 23;
            break;
        case 3:
            if(Town_SwordRoom == true)
            {
                gPosition = 27; Debug(); Move();
            }
            else
            {
                cout << "You don't have access to that room!" << endl; Pause();
            }
            break;
        case 4:
            cout << "You go up to the Old Mans picture wall. It's filled with drawings of his family." << endl;
            cout << "There are a few photos of him when he was younger, on adventures with a wooden \nsword." << endl;
            Pause();
            break;
        case 5:
            cout << "You look around the room, the Old Man sits in a chair near the fireplace, and" << endl;
            cout << "pictures and weapons hang decoratively around the room. You see antlers and" << endl;
            cout << "monster horns displayed on one wall." << endl;
            cout << endl;
            Pause();
            cName = pName;
            animationText = "He must have been quite a fighter.";
            Dialogue();
            break;


        }
    }


    //Old Mans Sword Room
    if(gPosition == 27)
    {
        switch(gMove)
        {
        case 1:
            if(Player_WoodenSword == false)
            {
                cName = " ";
                animationText = "You take the Wooden Sword off its decorative rack and strap it to your back.\nYou got a major item!";
                Dialogue();

                cName = pName;
                animationText = "Grandma said I'd need this, I just hope I'll be able to use it well.";
                Dialogue();
                Player_WoodenSword = true;

                if(Player_Shield == true && Player_Armor == true && Player_WoodenSword == true)
                {
                    cName = pName;
                    animationText = "I got all of the things Grandma wanted me to collect! I'd better go back \nto her.";
                    Dialogue();
                    Grandmas_Items = true;
                }

                Pause();
            }
            else
            {
                cout << "You look at an empty decorative rack. A Wooden Sword used to sit there." << endl;
            }
            Pause();
            break;
        case 2:
            gPosition = 26;
            break;
        case 3:
            cout << "You go up to the chest." << endl;
            if(Town_Chest == false)
            {
                cout << "Open the chest?\n" << endl;
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
                switch(decision)
                {
                case 1:
                    cout << "Inside the Chest are 3 elixers and 10 coins!" << endl;
                    cout << "*Elixers + 3*" << endl;
                    cout << "*Coins + 10*" << endl;
                    pCoins += 15;
                    pElixers += 3;
                    Town_Chest = true;
                    break;
                case 2:
                    cout << "You decide not to open the chest." << endl;
                    break;
                }
            }
            DoublePause();
            break;
        case 4:
            break;
        case 5:
            cout << "You look around the room. A decorative rack and old wooden chest sit in the room." << endl;
            cout << "It feels a little musty, as though its contents haven't been needed in some time." << endl;
            Pause();
            break;







            }


        }



    //Grandma's House
    if(gPosition == 28)
    {
        switch(gMove)
        {
        case 1:
            if(sCutscene_GrandmaHelps == false)
            {
                Cutscene_GrandmaHelps();
                sCutscene_GrandmaHelps = true;
            }
            else if(sCutscene_GrandmasList == false && Grandmas_Items == false)
            {

                cName = "Grandma";
                animationText = "Before you go to the forest you must first collect the items I \nhave told you about. The Sword, The Shield, and The Armor.";
                Dialogue();

            }
            else if(sCutscene_GrandmasList == false && Grandmas_Items == true)
            {
                Cutscene_GrandmasList();
                sCutscene_GrandmasList = true;
            }
            else if(sCutscene_GrandmaHelps == true && sCutscene_GrandmasList == true)
            {

                cName = "Grandma";
                animationText = "Be careful on your adventure dear, and find Rose as quickly as you can!";
                Dialogue();

            }
            break;
        case 2:
            cout << "You go up to the pictures on Grandmas wall. You see her in her youth, as well asdrawings of you and Rose." << endl;
            Pause();
            cName = pName;
            animationText = "These drawings bring me back. I hope we can all be happy and together \nagain.";
            Dialogue();
            break;
        case 3:
            cout << "You go up to the wood stove." << endl;
            cout << endl;
            if(Town_Stove == true)
            {
                cout << "The fire is roaring." << endl;
            }
            else
            {
                cout << "The fire is dying down." << endl;
                cout << endl;
                cout << "Stoke the fire?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
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
                        cout << "You stoked the fire. It fills you with warmth." << endl;
                        cout << "-Luck + 1-" << endl;
                        pLuck += 1;
                        RandomLuckValue += 1;
                        Town_Stove = true;
                        Pause();
                    }
                else
                    {
                        cout << "You decided not to stoke the fire." << endl;
                        Pause();
                    }

                }
                Pause();
                break;
        case 4:
            gPosition = 23;
            break;
        case 5:
            cout << "You look around the house. Its cozy and clean. You remember times you used" << endl;
            cout << "to play here with your sister.";
            Pause();
            break;



        }

    }



    //Hilda's House
    if(gPosition == 29)
    {
        switch(gMove)
        {
        case 1:
            gPosition = 23;
            break;
        case 2:
            if(Town_Hilda == false)
            {
                cName = "Hilda";
                animationText = "Would you like to listen to my story?";
                Dialogue();
                cout << "               1. Yes                       2.No" << endl;
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
                    miniScene_Hilda();
                    break;
                case 2:
                    cout << "You politely decline. She looks sad, and sends you on your way." << endl; Pause();
                    break;
                }
            }
            else
            {
                cName = "Hilda";
                animationText = "*snore*";
                Dialogue();
            }
            Pause();
            break;
        case 3:
            cout << "Hilda's Bed looks unused. She probably sleeps more in her rocking chair\nthen here." << endl;
            Pause();
            break;
        case 4:
            cout << "Maybe you shouldnt go looking in other peoples dressers." << endl;
            Pause();
            break;
        case 5:
            cout << "The room is cozy and warm. You see Hilda in her rocking chair by the fire.";
            Pause();
            break;

        }
    }




}
