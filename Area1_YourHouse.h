
//This file is the code that runs the area "Your House", which you access at the beginning of the game
//and can return to at any point.



void Area_YourHouse()
{

    void Debug();
    void Move();
    void Pause();
    void TravelZone();
    void SlowText();
    void PlayerSleep();



    cout << "\n\n\n\n\n\n\n\n\n";


    //Entryway
    if(gPosition == 16)
    {



        switch(gMove)
        {
            case 1:
                gPosition = 11;
                break;
            case 2:
                gPosition = 12; Debug(); Move();
                break;
            case 3:
                gPosition = 13; Debug(); Move();
                break;
            case 4:
                gPosition = 1; Debug();
                break;
            case 5:
                cout << "You look around the entryway. There are a" << endl;
                cout << "few coats and scarves hanging on the rack" << endl;
                Pause();

        }

    }


    //UpstairsHallway
    if(gPosition == 11)
    {


        switch(gMove)
        {
            case 1:
                break;
            case 2:
                gPosition = 14;  Debug(); Move();
                break;
            case 3:
                gPosition = 15; Debug(); Move();
                break;
            case 4:
                gPosition = 16; Debug();
                break;
            case 5:
                if(Player_Armor == true)
                {
                    cout << "There is an empty armor stand hanging on the wall." << endl;
                    Pause();
                }
                if(Player_Armor == false)
                {
                    cout << "There is armor hanging on the wall." << endl;
                    cout << "It looks old, but strong." << endl;
                    cout << endl;
                    DoublePause();

                    if(sCutscene_GrandmaHelps == false)
                    {

                        cName = pName;
                        animationText = "Maybe I shouldn't touch that just yet.";
                        Dialogue();
                    }
                    else
                    {
                        cName = pName;
                        animationText = "Grandma said I would need that before I\nleave, I'll take it with me.";
                        Dialogue();

                        cName = " ";
                        animationText = "You got the Armor!\nYou got a major item!";
                        Dialogue();
                        Player_Armor = true;

                         if(Player_Shield == true && Player_Armor == true && Player_WoodenSword == true)
                        {
                            cName = pName;
                            animationText = "I got all of the things Grandma wanted me to collect! I'd better go back \nto her.";
                            Dialogue();
                            Grandmas_Items = true;
                        }

                    }



                }
        }
    }


    //Kitchen
    if(gPosition == 12)
    {

        switch(gMove)
        {

            case 1:
                    if(YourHouse_Stove == false)
                    {
                        cout << "There is stew on the stove. Take some?" << endl;
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
                            cout << "You took some stew." << endl;
                            cout << "-Food + 1-" << endl;
                            pFood += 1;
                            YourHouse_Stove = true;
                            Pause();
                        }
                        else
                        {
                            cout << "You decided not to take the stew" << endl; Pause();
                        }

                    }
                    else
                    {
                        cout << "There is an empty pot on the stove." << endl;
                    }
                    Pause();
                    break;
            case 2:

                    if(YourHouse_Chest == true)
                    {
                        cout << "The chest is empty." << endl;
                    }
                    else
                    {
                        cout << "There are some health elixers in the chest" << endl;
                        cout << "Take the elixers?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No " << endl;
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
                                cout << "You took the elixers." << endl;
                                cout << "-Elixers + 2-" << endl;
                                pElixers += 2;
                                YourHouse_Chest = true; Pause();
                            }
                            else
                            {
                                cout << "You decided not to take the elixers." << endl; Pause();
                            }
                    }
                    Pause();
                    break;
            case 3:
                gPosition = 16; Debug();
                break;
            case 4:
                break;
            case 5:
                cout << "Theres a warm light coming from the fire stove. The" << endl;
                cout << "smell of stew fills the room." << endl;
                Pause();
                break;
        }


    }


    //Library
    if(gPosition == 13)
    {


        switch(gMove)
        {

            case 1:
                cout << "You and Rose often read together. You miss her." << endl; Pause();
                break;
            case 2:
                gPosition = 16; Debug();
                break;
            case 3:

                if(YourHouse_Fireplace == true)
                {
                    cout << "The fire is roaring. It fills you with warmth." << endl;
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
                            YourHouse_Fireplace = true;
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
                cout << " " << endl;
                break;
            case 5:
                cout << "Books, papers, and pillows are everywhere. You feel calm here." << endl; Pause();
                break;




        }



    }


    //Your Room
    if(gPosition == 14)
    {


        switch(gMove)
        {
            case 1:
                cout << "Would you like to sleep?" << endl;
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
                        PlayerSleep();
                    }
                    else
                    {
                        cout << "You decide not to sleep." << endl;
                        DoublePause();
                    }
                    break;
            case 2:

                    if(YourHouse_Desk == true)
                    {
                        cout << "The desk is empty." << endl;
                    }
                    else
                    {
                        cout << "Look inside the desk?" << endl;
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
                                cout << "You opened the desk. You found 10 coins!" << endl;
                                cout << "-Coins + 10-" << endl;
                                pCoins += 10;
                                YourHouse_Desk = true; Pause();
                            }
                            else
                            {
                                cout << "You decided not to look through the desk." << endl; Pause();
                            }
                    }
                    Pause();
                    break;
            case 3:
                gPosition = 11; Debug();
                break;
            case 4:
                break;
            case 5:
                cout << "Sunlight comes through the window, you look outside." << endl;
                cout << "You see your garden, its filled with flowers." << endl; Pause();
                break;


        }

    }


    //Roses Room
    if(gPosition == 15)
    {


        switch(gMove)
        {
            case 1:
                cout << "You go up to Rose's bed. It looks recently slept in." << endl;
                cout << "You think of her. You are determined to find her." << endl; Pause();
                break;
            case 2:
                gPosition = 11; Debug();
                break;
            case 3:
                cout << "You go up to Rose's desk. It has flowers and sketches on it." << endl;
                Pause();
                break;
            case 4:
                break;
            case 5:
                cout << "You look around the room. It looks recently used, but now empty." << endl; Pause();
                break;



        }
    }


    //Travel Zone - Garden

    if(gPosition == 1)
    {
        switch(gMove)
        {
            case 1:
                gPosition = 16; Debug();
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





}
