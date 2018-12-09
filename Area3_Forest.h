//This file contains the code for the rooms within the forest area, as well as its dungeon and all the specific
//puzzles contained within it, making it a long file.


void Area_Forest()
{
    void Battle();
    void miniScene_MountainTrail();
    void Debug();
    void Move();
    void Pause();
    void TravelZone();
    void RandomEnemyEncounter();
    void miniScene_DungeonEnter();
    void Cutscene_DungeonBossApproach();
    void Cutscene_DungeonBossDefeat();
    void NymphFollow();
    void miniScene_NymphAppears();
    void miniScene_FirstEnemy();
    void miniScene_Dam();
    void miniScene_Chasm();
    void DungeonWaterPuzzle();
    void DungeonFirePuzzle();

    cout << "\n\n\n\n\n\n\n\n\n";


    //Travel Zone - Entrance to the Forest
    if (gPosition == 3)
    {

         switch(gMove)
        {

        case 1:
            if(sminiScene_FirstEnemy == false)
            {
                miniScene_FirstEnemy();
            }
            else
            {
                Enemy = Three_AngryFlower; RandomEnemyEncounter();
            }
            if(Gameover == false)
            {
                gPosition = 32; Debug(); Move();
            }
            break;
        case 2:
            gPosition = 31; Debug(); Move();
            break;
        case 3:
            cout << "You go up to the beautiful blue lake and look in the water." << endl;
            cout << "It's crystal clear and you can see fish swimming." << endl;
            cout << "You could stop and swim, maybe catch some fish or look for treasure." << endl;
            cout << "Enter the lake?" << endl;
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
            if(decision == 1)
            {

                    if(Forest_Jewel == false && pLuck > 8)
                    {
                        cout << "You go for a swim, and find a box at the bottom." << endl;
                        cout << "Inside is some sort of strange jewel. You take it" << endl;
                        cout << "with you. It could be valuable." << endl;
                        Forest_Jewel = true;
                        DoublePause();
                    }
                    else
                    {
                        cout << "You go for a swim, it relaxes you and fills you" << endl;
                        cout << "with joy." << endl;
                        cout << "*Health + 2*" << endl;
                        Player_Health += 2;
                        if(Player_Health > Player_MaxHealth)
                        {
                            Player_Health = Player_MaxHealth;
                        }
                        DoublePause();

                    }


            }
            else
            {
                cout << "You decide not to enter the lake." << endl;
                DoublePause();
            }
            break;
        case 4:
            break;
        case 5:
            TravelZone();
            break;


    }



    }

    //Clearing
    if(gPosition == 31)
    {

        switch(gMove)
        {
        case 1:
            cout << "You go up to the mushroom patch." << endl;
            cout << "Search for edible mushrooms?" << endl;
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

                if(Forest_Mushrooms == true)
                {
                    cout  << "You don't see any edible mushrooms." << endl;
                    DoublePause();
                }
                else
                {
                    cout << "You found a few edible mushrooms!" << endl;
                    cout << "*Food + 2" << endl;
                    Forest_Mushrooms = true;
                    pFood += 2;
                    DoublePause();
                }

            }
            else if(decision == 2)
            {
                cout << "You decide not to look through the mushrooms." << endl;
                DoublePause();
            }
            break;
        case 2:
            cout << "You go up to the flower patch. There are daisies everywhere." << endl;
            cout << endl; Pause();
            if(Forest_Daisy == false)
            {
                cName = pName;
                animationText = "Maybe I should pick one...";
                Dialogue();

                cout << endl;
                cout << "Take one of the daisies\n?" << endl;
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
                    cout << "You take one of the daisies. Maybe it will come in handy." << endl;
                    Forest_Daisy = true; Pause();

                }
                else if(decision == 2)
                {
                    cout << "You decide not to take one of the daisies." << endl; Pause();
                }
            }
            else if (Forest_Daisy == true)
            {
                cout << "You admire them for a minute. Then go back." << endl;
            }

            Pause();
            break;
        case 3:
            gPosition = 3;
            break;
        case 4:
            if(Forest_Hairpin == false)
            {

             cout << "You go up to the Willow Tree. There's something strange\nabout it. Investigate it?" << endl; //change that later
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
                 cout << "You look closer at the tree. Something sparkles up\nin the branches. You climb the tree and find a silver hair pin!" << endl;
                 cout << "\n\n" << endl;

                 cName = pName;
                 animationText = "How did this get all the way up here?";
                 Dialogue();
                 cout << "You got a hairpin!" << endl;

                 Forest_Hairpin = true;
                 Pause();

             }
             else{cout << "You walk away" << endl; DoublePause();}
            }
            else
            {
                cout << "You go up to the willow tree. Its branches sway in the breeze." << endl;
                Pause();
            }
             break;
        case 5:
            cout << "You look around the clearing, a beautiful breeze hits your face and" << endl;
            cout << "you hear the sound of birds chirping." << endl;
            Pause();
            break;


        }

    }

    //Dark Woods 1 (Previously called Deep Forest)
    if(gPosition == 32)
    {
        switch(gMove)
        {
        case 1:
            cName = " ";
            animationText = "Sign:\n\n<-- Dark Woods\n--> Elf Village\nBeware of monsters!";
            Dialogue();
            break;
        case 2:
            Enemy = Three_AngryFlower; RandomEnemyEncounter(); gPosition = 33; Debug(); Move();
            break;
        case 3:
            gPosition = 4; Debug(); Move();
            break;
        case 4:
            gPosition = 3;
            break;
        case 5:
            cout << "It seems the further you go into the forest, the stranger" << endl;
            cout << "it feels." << endl;
            Pause();
            break;


        }
    }

    //Dark Woods 2
    if(gPosition == 33)
    {


        switch (gMove)
        {
        case 1:
            cout << "You go up to a large gate leading to a bridge." << endl;
            cout << endl;
            if(Forest_Gate == false)
            {
                cout << "Its sealed tight. There isn't any going through it." << endl;
                Pause();
            }
            break;
        case 2:
            if(Dungeon_Entrance == false)
            {
                cName = pName;
                animationText = "Maybe I shouldn't go in there. I have a bad feeling about it.";
                Dialogue();
            }
            else
            {
                if(sminiScene_DungeonEnter == false) {miniScene_DungeonEnter();}
                gPosition = 34; Debug(); Move();
            }
            break;
        case 3:
            gPosition = 32; Enemy = Three_AngryFlower; RandomEnemyEncounter();
            break;
        case 4:
            break;
        case 5:
            cout << "An eerie feeling passes over you. Being This deep in the" << endl;
            cout <<"forest makes you uneasy and scared." << endl;
            Pause();
            break;



        }
    }

    //Dungeon Entrance
    if(gPosition == 34)
    {

        switch(gMove)
        {
        case 1:
            if(Dungeon_CrownPuzzle == true)
            {
                gPosition = 35; Debug(); Move();
            }
            else
            {
                cout << "You see four beautiful statues against the wall. Go up to one?\n" << endl;
                cout << "1. First Statue\n2. Second Statue\n3. Third Statue\n4. Fourth Statue\n5. Do nothing\n" << endl;
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
                }
                cout << endl;
                switch(decision)
                {
                case 1:
                    cout << "You go up to a statue of a beautiful woman in a dress seemingly\nmade of fire, with flames coming from her hands.\n" << endl;
                    Pause();
                    if(Dungeon_rStatue == 0)
                    {
                        cout << "What would you like to do?\n" << endl;
                        if(Dungeon_eCrown == 5) {cout << "1. Use Emerald Crown\n" << endl;}
                        if(Dungeon_sCrown == 5) {cout << "2. Use Sapphire Crown\n" << endl;}
                        if(Dungeon_rCrown == 5) {cout << "3. Use Ruby Crown\n" << endl;}
                        if(Dungeon_dCrown == 5) {cout << "4. Use Diamond Crown\n" << endl;}
                        cout << "5. Do Nothing\n" << endl;
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
                        }
                         cout << endl;
                        switch(decision)
                        {
                        case 1:
                            if(Dungeon_eCrown == 5) {cout << "You place the Emerald Crown on the womans head." << endl; DoublePause(); Dungeon_rStatue = 1; Dungeon_eCrown = 1;}
                            break;
                        case 2:
                            if(Dungeon_sCrown == 5) {cout << "You place the Sapphire Crown on the womans head." << endl; DoublePause(); Dungeon_rStatue = 1; Dungeon_sCrown = 1;}
                            break;
                        case 3:
                            if(Dungeon_rCrown == 5) {cout << "You place the Ruby Crown on the womans head." << endl; DoublePause(); Dungeon_rCrown = 1;
                            Dungeon_rStatue = 2;}
                            break;
                        case 4:
                            if(Dungeon_dCrown == 5) {cout << "You place the Diamond Crown on the womans head." << endl; DoublePause(); Dungeon_rStatue = 1; Dungeon_dCrown = 1;}
                            break;
                        case 5:
                            break;
                        }
                    }
                    else
                    {
                        cout << "Would you like to take the crown off the statue?\n" << endl;
                        cout << "1.Yes\n2.No\n" << endl;
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
                            if(Dungeon_eCrown == 1) {Dungeon_eCrown = 5; Dungeon_rStatue = 0;}
                            if(Dungeon_sCrown == 1) {Dungeon_sCrown = 5; Dungeon_rStatue = 0;}
                            if(Dungeon_rCrown == 1) {Dungeon_rCrown = 5; Dungeon_rStatue = 0;}
                            if(Dungeon_dCrown == 1) {Dungeon_dCrown = 5; Dungeon_rStatue = 0;}

                            cout << "You take the crown off the statue." << endl; Pause();
                        }
                    }
                    break;
                case 2:
                    cout << "You go up to a statue of a handsome man with a cape that flows like water.\nHe has a trident in his hands.\n" << endl;
                    Pause();
                    if(Dungeon_sStatue == 0)
                    {
                        cout << "What would you like to do?\n" << endl;
                        if(Dungeon_eCrown == 5) {cout << "1. Use Emerald Crown\n" << endl;}
                        if(Dungeon_sCrown == 5) {cout << "2. Use Sapphire Crown\n" << endl;}
                        if(Dungeon_rCrown == 5) {cout << "3. Use Ruby Crown\n" << endl;}
                        if(Dungeon_dCrown == 5) {cout << "4. Use Diamond Crown\n" << endl;}
                        cout << "5. Do Nothing\n" << endl; cout << endl;
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
                        }
                         cout << endl;
                        switch(decision)
                        {
                        case 1:
                            if(Dungeon_eCrown == 5) {cout << "You place the Emerald Crown on the mans head." << endl; DoublePause(); Dungeon_sStatue = 1; Dungeon_eCrown = 2;}
                            break;
                        case 2:
                            if(Dungeon_sCrown == 5) {cout << "You place the Sapphire Crown on the mans head." << endl; DoublePause(); Dungeon_sCrown = 2;
                            Dungeon_sStatue = 2;}
                            break;
                        case 3:
                            if(Dungeon_rCrown == 5) {cout << "You place the Ruby Crown on the mans head." << endl; DoublePause(); Dungeon_sStatue = 1; Dungeon_rCrown = 2;}
                            break;
                        case 4:
                            if(Dungeon_dCrown == 5) {cout << "You place the Diamond Crown on the mans head." << endl; DoublePause(); Dungeon_sStatue = 1; Dungeon_dCrown = 2;}
                            break;
                        case 5:
                            break;
                        }
                    }
                    else
                    {
                        cout << "Would you like to take the crown off the statue?\n" << endl;
                        cout << "1.Yes\n2.No\n" << endl; cout << endl;
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
                            if(Dungeon_eCrown == 2) {Dungeon_eCrown = 5; Dungeon_sStatue = 0;}
                            if(Dungeon_sCrown == 2) {Dungeon_sCrown = 5; Dungeon_sStatue = 0;}
                            if(Dungeon_rCrown == 2) {Dungeon_rCrown = 5; Dungeon_sStatue = 0;}
                            if(Dungeon_dCrown == 2) {Dungeon_dCrown = 5; Dungeon_sStatue = 0;}

                            cout << "You take the crown off the statue." << endl; Pause();
                        }

                    }
                    break;
                case 3:
                    cout << "You go up to a statue of a handsome man wearing some sort of contraption\nthat looks like bird wings. He looks as though he has complete control of \nthe air.\n" << endl;
                    Pause();
                    if(Dungeon_dStatue == 0)
                    {
                        cout << "What would you like to do?\n" << endl;
                        if(Dungeon_eCrown == 5) {cout << "1. Use Emerald Crown\n" << endl;}
                        if(Dungeon_sCrown == 5) {cout << "2. Use Sapphire Crown\n" << endl;}
                        if(Dungeon_rCrown == 5) {cout << "3. Use Ruby Crown\n" << endl;}
                        if(Dungeon_dCrown == 5) {cout << "4. Use Diamond Crown\n" << endl;}
                        cout << "5. Do Nothing\n" << endl; cout << endl;
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
                        }
                        cout << endl;
                        switch(decision)
                        {
                        case 1:
                            if(Dungeon_eCrown == 5) {cout << "You place the Emerald Crown on the mans head." << endl;  DoublePause(); Dungeon_dStatue = 1; Dungeon_eCrown = 3;}
                            break;
                        case 2:
                            if(Dungeon_sCrown == 5) {cout << "You place the Sapphire Crown on the mans head." << endl; DoublePause(); Dungeon_dStatue = 1; Dungeon_sCrown = 3;}
                            break;
                        case 3:
                            if(Dungeon_rCrown == 5) {cout << "You place the Ruby Crown on the mans head." << endl; DoublePause(); Dungeon_dStatue = 1; Dungeon_rCrown = 3;}
                            break;
                        case 4:
                            if(Dungeon_dCrown == 5) {cout << "You place the Diamond Crown on the mans head." << endl; DoublePause(); Dungeon_dCrown = 3;
                            Dungeon_dStatue = 2;}
                            break;
                        case 5:
                            break;
                        }
                    }
                    else
                    {
                        cout << "Would you like to take the crown off the statue?\n" << endl;
                        cout << "1.Yes\n2.No\n" << endl; cout << endl;
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
                            if(Dungeon_eCrown == 3) {Dungeon_eCrown = 5; Dungeon_dStatue = 0;}
                            if(Dungeon_sCrown == 3) {Dungeon_sCrown = 5; Dungeon_dStatue = 0;}
                            if(Dungeon_rCrown == 3) {Dungeon_rCrown = 5; Dungeon_dStatue = 0;}
                            if(Dungeon_dCrown == 3) {Dungeon_dCrown = 5; Dungeon_dStatue = 0;}

                            cout << "You take the crown off the statue." << endl; Pause();
                        }

                    }
                    break;
                case 4:
                    cout << "You go up to a statue of a beautiful woman with elf ears and a necklace\nof leaves. She is sifting earth and plant life through her fingers.\n" << endl;
                    Pause();
                    if(Dungeon_eStatue == 0)
                    {
                        cout << "What would you like to do?\n" << endl;
                        if(Dungeon_eCrown == 5) {cout << "1. Use Emerald Crown\n" << endl;}
                        if(Dungeon_sCrown == 5) {cout << "2. Use Sapphire Crown\n" << endl;}
                        if(Dungeon_rCrown == 5) {cout << "3. Use Ruby Crown\n" << endl;}
                        if(Dungeon_dCrown == 5) {cout << "4. Use Diamond Crown\n" << endl;}
                        cout << "5. Do Nothing\n" << endl; cout << endl;
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
                        }
                        cout << endl;
                        switch(decision)
                        {
                        case 1:
                            if(Dungeon_eCrown == 5) {cout << "You place the Emerald Crown on the womans head." << endl; DoublePause(); Dungeon_eCrown = 4;
                            Dungeon_eStatue = 2;}

                            break;
                        case 2:
                            if(Dungeon_sCrown == 5) {cout << "You place the Sapphire Crown on the womans head." << endl; DoublePause(); Dungeon_eStatue = 1; Dungeon_sCrown = 4;}
                            break;
                        case 3:
                            if(Dungeon_rCrown == 5) {cout << "You place the Ruby Crown on the womans head." << endl; DoublePause(); Dungeon_eStatue = 1; Dungeon_rCrown = 4;}
                            break;
                        case 4:
                            if(Dungeon_dCrown == 5) {cout << "You place the Diamond Crown on the womans head." << endl; DoublePause(); Dungeon_eStatue = 1; Dungeon_dCrown = 4;}
                            break;
                        case 5:
                            break;
                        }
                    }
                    else
                    {
                        cout << "Would you like to take the crown off the statue?\n" << endl;
                        cout << "1.Yes\n2.No\n" << endl;
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
                            if(Dungeon_eCrown == 4) {Dungeon_eCrown = 5; Dungeon_eStatue = 0;}
                            if(Dungeon_sCrown == 4) {Dungeon_sCrown = 5; Dungeon_eStatue = 0;}
                            if(Dungeon_rCrown == 4) {Dungeon_rCrown = 5; Dungeon_eStatue = 0;}
                            if(Dungeon_dCrown == 4) {Dungeon_dCrown = 5; Dungeon_eStatue = 0;}

                            cout << "You take the crown off the statue." << endl; Pause();
                        }

                    }
                    break;
                case 5:
                    break;

                }

                if(Dungeon_rStatue == 2 && Dungeon_sStatue == 2 && Dungeon_dStatue == 2 && Dungeon_eStatue == 2)
                        {
                            cName = " ";
                            animationText = "The ground shakes and the statues begin to move.";
                            Dialogue();
                            animationText = "A doorway appears as the wall with the statues seperates.\n\n                   You can go through!";
                            Dialogue();
                            Dungeon_CrownPuzzle = true;
                        }
            }
            break;
        case 2:
            if(Dungeon_Crowns == true)
            {cout << "You see an empty marble shelf." << endl; Pause();}
            else
            {
                cout << "You see a marble shelf with four jeweled crowns\nlaid on its surface. Each has a different gem. There is a sapphire crown,\na ruby crown, a emerald crown, and a diamond crown." << endl;
                cout << "Take One? :\n" << endl;
                if(Dungeon_eCrown == 0) {cout << "1. Emerald Crown" << endl;}

                if(Dungeon_sCrown == 0) {cout << "2. Sapphire Crown" << endl;}

                if(Dungeon_rCrown == 0) {cout << "3. Ruby Crown" << endl;}

                if(Dungeon_dCrown == 0) {cout << "4. Diamond Crown" << endl;}

                cout << "5. Nothing\n" << endl;
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
                        }
                cout << endl;
                switch(decision)
                {
                case 1:
                    if(Dungeon_eCrown == 0)
                    {cout << "You take the Emerald Crown from the shelf." << endl; Pause(); Dungeon_eCrown = 5;}
                    break;
                case 2:
                    if(Dungeon_sCrown == 0) {cout << "You take the Sapphire Crown from the shelf." << endl; Pause(); Dungeon_sCrown = 5;}
                    break;
                case 3:
                    if(Dungeon_rCrown == 0) {cout << "You take the Ruby Crown from the shelf." << endl; Pause(); Dungeon_rCrown = 5;}
                    break;
                case 4:
                    if(Dungeon_dCrown == 0) {cout << "You take the Diamond crown from the shelf." << endl; Pause(); Dungeon_dCrown = 5;}
                    break;
                case 5:
                    break;
                }
                if(Dungeon_sCrown > 0 && Dungeon_eCrown > 0 && Dungeon_rCrown > 0 && Dungeon_dCrown > 0) {Dungeon_Crowns = true;}
                Pause();
            }
            break;
        case 3:
            cout << "You see strange rune markings on the wall." << endl; Pause();
            if(Village_Book == true)
            {
                cout << "You take out the rune book, and use it to translate.\nOn the wall is the markings 'II - 3'" << endl;
                Pause();
            }
            break;
        case 4:
            gPosition = 33;
            break;
        case 5:
            if(Dungeon_CrownPuzzle == false)
            {
                cout << "You have entered the dungeon, but there seems to be no way forward.\nSeveral statues stand against the back wall." << endl;
            }
            else
            {
                cout << "You are at the entrance of the dungeon. Statues with glittering crowns stand beside an open doorway." << endl;
            }
            Pause();
            break;



        }

    }

    //Dungeon Cavern Entrance
    if(gPosition == 35)
    {
        switch(gMove)
        {
            case 1:
                if(Dungeon_Wings == false)
                {
                    cout << "An enormous chasm lies before you. You can see a lower rock shelf on the\nother side, and there is the outline of a maze in the distance, as well\nas a huge set of doors in the wall. You cannot cross." << endl;
                    Pause();
                }
                else if(Dungeon_Wings == true && sminiScene_Chasm == false)
                {
                    miniScene_Chasm(); gPosition = 38; Debug(); Move();
                }
                else if(Dungeon_Wings == true && sminiScene_Chasm == true)
                {
                    cout << "You strap on the mechanical wings and fly across the chasm." << endl; Pause();
                    gPosition = 38;
                    Debug(); Move();
                }
                break;
            case 2:
                Enemy = Three_Skeleton; RandomEnemyEncounter();
                cout << "You walk towards a huge waterfall, that flows around a doorway. As\nyou enter the air gets cooler and you feel a sense of peace." << endl; Pause();
                gPosition = 36; Debug(); Move();
                break;
            case 3:
                cout << "You walk towards a doorway surrounded by two pillars of fire. The\nair gets warmer as you enter the room, and you feel slightly anxious." << endl; Pause();
                Enemy = Three_Skeleton; RandomEnemyEncounter();
                gPosition = 37; Debug(); Move();
                break;
            case 4:
                gPosition = 34;
                break;
            case 5:
                cout << "You are at the entrance of a large cavern, with\na long rope bridge connecting to two other sides." << endl;
                Pause();
                cout << "You see strange rune markings on the floor." << endl; Pause();
                if(Village_Book == true)
                {
                    cout << "You take out the rune book, and use it to translate.\nOn the floor is the markings 'I - 1'" << endl;
                    Pause();
                }
                break;
        }

    }

    //Water Puzzle
    if(gPosition == 36)
    {
        switch(gMove)
        {
            case 1:
                if(Dungeon_FountainSet1 == false)
                {
                cName = " ";
                animationText = "You see a set of four fountains, with a marble pedestal\nbefore you. It glows faintly.";
                Dialogue();
                Dungeon_FountainSet = 1;
                DungeonWaterPuzzle();
                if(minigame_win == true)
                {
                    Dungeon_FountainSet1 = true;
                    if(Dungeon_FountainSet3 == true && Dungeon_FountainSet1 == true)
                        {
                            Dungeon_MainFountain = true;
                            animationText = "The Golden Fountains glow, you may be able to interact\nwith them now!";
                            Dialogue();
                        }
                }
                }
                else {cout << "The fountains are all on, they feel cool to stand near." << endl; Pause();}
                break;
            case 2:
                if(Dungeon_FountainSet2 == false && Dungeon_MainFountain == true)
                {
                minigame_win = false;
                cName = " ";
                animationText = "You see a set of four fountains, with a marble pedestal\nbefore you. It glows faintly.\nThe pedestal has something written on it.";
                Dialogue();
                animationText = "'The Order of the Four Fountains is hidden throughout the dungeon, figure it\nout and you may continue.'";
                Dialogue();
                Dungeon_FountainSet = 2;
                Dungeon_FountainOrder = 1321;
                cout << "What is the answer?" << endl;
                cin >> Dungeon_FountainGuess;
                if(Dungeon_FountainGuess == Dungeon_FountainOrder)
                {
                            animationText = "The fountains all turn on. You guessed correctly!";
                            Dialogue();
                            minigame_win = true;
                }
                else
                {
                    animationText = "Nothing Happens...";
                    Dialogue();
                }
                if(minigame_win == true)
                {
                    Dungeon_FountainSet2 = true;
                    animationText = "The floor rumbles and in the middle of the room a pedestal\nrises from the ground. On it is what seems to be half of a pair\nof wings. You take it with you.";
                    Dialogue();
                    Dungeon_LeftWing = true;

                    //if all pre maze puzzles are complete, give the player the wings item
                    if(Dungeon_LeftWing == true && Dungeon_RightWing == true)
                    {
                            animationText = "You put the two wings pieces together, you now have wings!.";
                            Dialogue();
                            Dungeon_Wings = true;
                    }
                }


                }
                else if (Dungeon_MainFountain == true) {cout << "The fountains are all on, they feel cool to stand near." << endl; Pause();}
                else {cout << "Four Golden fountains are before you, but they don't seem to be working." << endl; Pause();}
                break;
            case 3:
                Enemy = Three_Skeleton; RandomEnemyEncounter();
                gPosition = 35;
                break;
            case 4:
                if(Dungeon_FountainSet3 == false)
                {
                cName = " ";
                animationText = "You see a set of four fountains, with a marble pedestal\nbefore you. It glows faintly.";
                Dialogue();
                Dungeon_FountainSet = 3;
                DungeonWaterPuzzle();
                    if(minigame_win == true)
                    {
                        Dungeon_FountainSet3 = true;
                        if(Dungeon_FountainSet3 == true && Dungeon_FountainSet1 == true)
                        {
                            Dungeon_MainFountain = true;
                            animationText = "The Golden Fountains glow, you may be able to interact\nwith them now!";
                            Dialogue();
                        }
                    }
                }
                else {cout << "The fountains are all on, they feel cool to stand near." << endl; Pause();}
                break;
            case 5:
                cout << "You are standing on a platform surrounded by water. Each wall has\na set of four fountains, with a pedestal in the middle before each wall." << endl; Pause();
                cout << "You see strange rune markings on the floor." << endl; Pause();
            if(Village_Book == true)
            {
                cout << "You take out the rune book, and use it to translate.\nOn the floor is the markings 'III - 2'" << endl;
                Pause();
            }
            break;

        }

    }

    //Fire Puzzle
    if(gPosition == 37)
    {
        switch(gMove)
        {
            case 1:
            cout << "You see strange rune markings on the wall." << endl; Pause();
            if(Village_Book == true)
            {
                cout << "You take out the rune book, and use it to translate.\nOn the wall is the markings 'IV - 1'" << endl;
                Pause();
            }
            break;
            case 2:
                Enemy = Three_Skeleton; RandomEnemyEncounter();
                gPosition = 35;
                break;
            case 3:
                cout << "You walk towards a path with pillars of fire erupting\nin intervals blocking the way." << endl; Pause();
                DungeonFirePuzzle(); if(minigame_win == true)
                {

                    animationText = "On the pillar is what seems to be half of a pair\nof wings. You take it with you.";
                    Dialogue();
                    Dungeon_RightWing = true;

                    if(Dungeon_LeftWing == true && Dungeon_RightWing == true)
                        {
                            animationText = "You put the two wings pieces together, you now have wings!.";
                            Dialogue();
                            Dungeon_Wings = true;
                        }
                }
                break;
            case 4:
                break;
            case 5:
                cout << "You are in a room filled with pillars of fire. Its\nsuffocatingly hot, but your determined to continue." << endl;
                Pause();
                break;
        }
    }

    //Dungeon Cavern Back End
    if(gPosition == 38)
    {

        switch(gMove)
        {
            case 1:
                if(sminiScene_NymphAppears == false) {miniScene_NymphAppears();}
                gPosition = 39; Debug(); Move();
                break;
            case 2:
                if(Dungeon_BossRoom == true) {Cutscene_DungeonBossApproach();}
                else
                {
                    cout << "You go up a winding path to an enormous door with intricate carvings\nIt is sealed shut, but has a strange leaf shaped hole in\nthe center. You feel more uneasy than ever being near\nthis room." << endl;
                    Pause();
                }
                break;
            case 3:
                if(Village_Key == false) {cout << "You see a locked chest." << endl; Pause();}
                else if(Village_Key == true && Dungeon_Chest == false)
                {
                    cout << "You try using the key you got from Tiki, and the chest opens!\nInside you find elixers!" << endl;
                    cout << "*Elixers + 5*\n*Luck + 2*" << endl; Pause(); pElixers += 5; pLuck += 2; RandomLuckValue += 1;
                    Dungeon_Chest = true;
                }
                else if (Village_Key == true && Dungeon_Chest == true) {cout << "You see an empty chest." << endl; Pause();}
                break;
            case 4:
                gPosition = 35;
                break;
            case 5:
                cout << "You stand at the back of the cavern. Before you is\na long hallway, to the left a winding path upwards." << endl;
                Pause();
                break;
        }
    }

//Dungeon Maze Rooms
//{


    //Dungeon Maze Entrance (Position 39)
    if(gPosition == 39)
    {
        switch(gMove)
        {
        case 1:
            //soft code
            cout << "You go forward, the grass making your footsteps all but inaudible." << endl; Pause();
            gPosition = 394; Debug(); Move();
           break;
        case 2:
            break;
        case 3:
            cout << "You turn right, and pass under a willow tree, its leaves rustle gently." << endl; Pause();
            gPosition = 391; Debug(); Move();
            break;
        case 4:
            Enemy = Three_Skeleton; RandomEnemyEncounter();
            gPosition = 38;
            break;
        case 5:
            cout << "You are at the entrance of a maze of pathways." << endl;
            Pause();
            break;
        }

        }

    //Dungeon Maze Position 391
    if(gPosition== 391)
    {
        switch(gMove)
        {
            case 1:
                cout << "You go forward, and see a bear sleeping in the hallway. You walk around the\nbear, it shifts slightly, but remains asleep." << endl; Pause();
                gPosition = 395; Debug(); Move();
                break;
            case 2:
                cout << "You go left, and pass under a willow tree, its leaves rustle gently." << endl; Pause();
                gPosition = 39;
                break;
            case 3:
                cout << "You go right, and continue over the dead leaves. They make loud\ncrunching sounds as you walk!" << endl; Pause();
                NymphFollow();
                gPosition = 392; Debug(); Move();
                break;
            case 4:
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways." << endl;
                break;

        }
    }

    //Dungeon Maze Position 392
    if(gPosition == 392)
    {
        switch(gMove)
        {
            case 1:
                cout << "You go forward, and walk through the puddles. They\nmake splashing sounds as you go!" << endl; Pause();
                NymphFollow();
                gPosition = 396; Debug(); Move();
              break;
            case 2:
                cout << "You go left, and continue over the dead leaves. They make loud\ncrunching sounds as you walk!" << endl; Pause();
                NymphFollow();
                gPosition = 391;
                break;
            case 3:
                cout << "You go right, and walk under a dead tree. You accidentally snap\none of the fallen branches under your foot!" << endl; Pause();
                NymphFollow();
                gPosition = 393; Debug(); Move();
                break;
            case 4:
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;
        }

    }

    //Dungeon Maze Position 393
    if(gPosition == 393)
    {
        switch(gMove)
        {
            case 1:
                cout << "You continue forward, going through a hallway of rose bushes.\nYour pricked by one of the thorns!" << endl; Pause();
                cName = pName; animationText = "Oww!!"; Dialogue();
                NymphFollow();
                gPosition = 397; Debug(); Move();
                break;
            case 2:
                cout << "You go left, and walk under a dead tree. You accidentally snap\none of the fallen branches under your foot!" << endl; Pause();
                NymphFollow();
                gPosition = 392;
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;
        }

    }

    //Dungeon Maze Position 394
    if(gPosition == 394)
    {
        switch(gMove)
        {
            case 1:
                cout << "You walk through the seemingly ordinary path, and the walls begin moving!\nYou run out before they close, making a lot of noise. They reopen." << endl; Pause();
                NymphFollow();
                gPosition = 398; Debug(); Move();
                break;
            case 2:
                break;
            case 3:
                cout << "You carefully go around the sleeping deer, but they hear you and start running\naround!" << endl; Pause();
                NymphFollow();
                gPosition = 395; Debug(); Move();
                break;
            case 4:
                cout << "You go backwards, the grass making your footsteps all but inaudible." << endl; Pause();
                gPosition = 39;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;
        }
    }

    //Dungeon Maze Position 395
    if(gPosition == 395)
    {
        switch(gMove)
            {
                case 1:
                cout << "You take a running headstart and make the jump, making a loud noise\nas you land." << endl; Pause();
                NymphFollow();
                gPosition = 399; Debug(); Move();
                break;
            case 2:
                cout << "You carefully go around the sleeping deer, but they hear you and start running\naround!" << endl; Pause();
                NymphFollow();
                gPosition = 394;
                break;
            case 3:
                cout << "You walk through the darkness, able to see nothing. You make\nit safely to the other side." << endl; Pause();
                gPosition = 396; Debug(); Move();
                break;
            case 4:
                cout << "You go forward, and see a bear sleeping in the hallway. You walk around the\nbear, it shifts slightly, but remains asleep." << endl; Pause();
                gPosition = 391;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;

            }

    }

    //Dungeon Maze Position 396
    if(gPosition == 396)
    {
        switch(gMove)
        {
            case 1:
                cout << "You walk through the flower bed, the flowers are soft under your feet." << endl; Pause();
                gPosition = 3910; Debug(); Move();
                break;
            case 2:
                cout << "You walk through the darkness, able to see nothing. You make\nit safely to the other side." << endl; Pause();
                gPosition = 395;
                break;
            case 3:
                cout << "You walk past a group of perching crows. They notice you\nand begin to caw violently!" << endl; Pause();
                NymphFollow();
                gPosition = 397; Debug(); Move();
                break;
            case 4:
                cout << "You go backwards, and walk through the puddles. They\nmake splashing sounds as you go!" << endl; Pause();
                NymphFollow();
                gPosition = 392;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;


        }
    }

    //Dungeon Maze Position 397
    if(gPosition == 397)
    {
        switch(gMove)
        {
            case 1:
                cout << "You walk through the seemingly ordinary path. Nothing happens." << endl; Pause();
                gPosition = 3911; Debug(); Move();
                break;
            case 2:
                cout << "You walk past a group of perching crows. They notice you\nand begin to caw violently!" << endl; Pause();
                NymphFollow();
                gPosition = 396;
                break;
            case 3:
                if(Dungeon_Crank == false)
                {
                cout << "You find a crank. It looks old, but might have some use." << endl; Pause();
                cout << "Take the crank?\n\n1. Yes\n2. No\n" << endl;
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
                            cout << "You take the crank." << endl; DoublePause();
                            Dungeon_Crank = true;
                            break;
                        case 2:
                            cout << "You decide not to take the crank." << endl; DoublePause();
                            break;
                    }
                }
                else{cout << "You see an empty space. You picked up the crank from here." << endl; Pause();}
                break;
            case 4:
                cout << "You continue forward, going through a hallway of rose bushes.\nYour pricked by one of the thorns!" << endl; Pause();
                cName = pName; animationText = "Oww!!"; Dialogue();
                NymphFollow();
                gPosition = 393;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;

        }
    }

    //Dungeon Maze Position 398
    if(gPosition == 398)
    {

        switch(gMove)
        {
            case 1:
                cout << "You wade through a pool of water to reach the other side. You\nmake splashing sounds as you cross through!" << endl; Pause();
                NymphFollow();
                gPosition = 3912;
                break;
            case 2:
                break;
            case 3:
                cout << "You see a vine hanging over a gap in the path. You decide to try and jump\nand grab onto it to swing across. This works, but you make a lot of noise!" << endl; Pause();
                NymphFollow();
                gPosition = 399; Debug(); Move();
                break;
            case 4:
                cout << "You walk through the seemingly ordinary path, and the walls begin moving!\nYou run out before they close, making a lot of noise. They reopen." << endl; Pause();
                NymphFollow();
                gPosition = 394;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;
        }

    }

    //Dungeon Maze Position 399
    if(gPosition == 399)
    {
        switch(gMove)
        {
            case 1:
                cout << "You walk across the bank of sand. Its soft under your feet." << endl; Pause();
                gPosition = 3913; Debug(); Move();
                break;
            case 2:
                cout << "You see a vine hanging over a gap in the path. You decide to try and jump\nand grab onto it to swing across. This works, but you make a lot of noise!" << endl; Pause();
                NymphFollow();
                gPosition = 398;
                break;
            case 3:
                cout << "You walk into a path filled with garden snakes." << endl; Pause();
                cName = pName; animationText = "*internally* Don't freak out, don't freak out!"; Dialogue();
                cout << "You make it across safely and quietly." << endl; Pause();
                gPosition = 3910; Debug(); Move();
                break;
            case 4:
                cout << "You take a running headstart and make the jump, making a loud noise\nas you land." << endl; Pause();
                NymphFollow();
                gPosition = 395;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;
        }
    }

    //Dungeon Maze Position 3910
    if(gPosition == 3910)
    {
        switch(gMove)
        {
            case 1:
                cout << "You pass by an old abandoned cottage as you travel through the area.\nNothing happens, but you wonder how the building got there." << endl; Pause();
                gPosition = 3914; Debug(); Move();
                break;
            case 2:
                cout << "You walk into a path filled with garden snakes." << endl; Pause();
                cName = pName; animationText = "*internally* Don't freak out, don't freak out!"; Dialogue();
                cout << "You make it across safely and quietly." << endl; Pause();
                gPosition = 399;
                break;
            case 3:
                cout << "You pass by a group of cats as you cross through the path. You have no idea\nwhy there are cats here. One looks at you curiously, then begins to open its\nmouth." << endl; Pause();
                cName = pName; animationText = "*whisper* n-no please!"; Dialogue();
                cName = "Cat"; animationText = "*mew*"; Dialogue();
                cName = " "; animationText = "All the other cats look to the one. It seems to be their leader."; Dialogue();
                cName = pName; animationText = "Please no..."; Dialogue();
                cName = "Group of cats"; animationText = "MEEEEEEOOOOOOOOOOOOOOOOOWWWWW!!!!"; Dialogue();
                cName = " "; animationText = "You run out of there."; Dialogue();
                NymphFollow();
                gPosition = 3911; Debug(); Move();
                break;
            case 4:
                cout << "You walk through the flower bed, the flowers are soft under your feet." << endl; Pause();
                gPosition = 396;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;

        }
    }

    //Dungeon Maze Position 3911
    if(gPosition == 3911)
    {
        switch(gMove)
        {
            case 1:
                cout << "You walk through a field of wheat. It feels peaceful." << endl; Pause();
                gPosition = 3915; Debug(); Move();
                break;
            case 2:
                cout << "You pass by a group of cats as you cross through the path. You have no idea\nwhy there are cats here. One looks at you curiously, then begins to open its\nmouth." << endl; Pause();
                cName = pName; animationText = "*whisper* n-no please!"; Dialogue();
                cName = "Cat"; animationText = "*mew*"; Dialogue();
                cName = " "; animationText = "All the other cats look to the one. It seems to be their leader."; Dialogue();
                cName = pName; animationText = "Please no..."; Dialogue();
                cName = "Group of cats"; animationText = "MEEEEEEOOOOOOOOOOOOOOOOOWWWWW!!!!"; Dialogue();
                cName = " "; animationText = "You run out of there."; Dialogue();
                NymphFollow();
                gPosition = 3910;
                break;
            case 3:
                break;
            case 4:
                cout << "You walk through the seemingly ordinary path. Nothing happens." << endl; Pause();
                gPosition = 397;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;

        }
    }

    //Dungeon Maze Position 3912
    if(gPosition == 3912)
    {
            switch(gMove)
            {
                case 1:
                    if(sminiScene_Dam == false)
                    {
                        cout << "You see a cave that seems to lead both left and right and surrounds\nthe maze. A stream trickles from an panel in the wall that is cracked open.\nThere seems to be a machine next to you that would open it further,\nbut its missing something." << endl;
                        Pause();
                        if(Dungeon_Crank == true)
                         {
                           cout << "Use Crank?\n\n1.Yes\n2.No\n" << endl;
                        switch(_getch())
                        {
                        case '1':
                        decision = 1;
                        break;
                        case '2':
                        decision = 2;
                        break;
                        }
                           switch(decision) {case 1: miniScene_Dam(); break; case 2: cout << "You decide not to use the crank."; DoublePause(); break; }
                         }

                    }
                    else{cout << "You see a waterfall leading into a river. The sound\nof rushing water fills your ears, drowning out all other sounds." << endl; Pause();}
                    break;
                case 2:
                    break;
                case 3:
                    cout << "You walk through a pathway filled with hanging lanterns. Its beautiful." << endl; Pause();
                    gPosition = 3913; Debug(); Move();
                    break;
                case 4:
                    cout << "You wade through a pool of water to reach the other side. You\nmake splashing sounds as you cross through!" << endl; Pause();
                    NymphFollow();
                    gPosition = 398;
                    break;
                case 5:
                    cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                    Pause();
                    break;
            }

    }

    //Dungeon Maze Position 3913
    if(gPosition == 3913)
    {
        switch(gMove)
        {
            case 1:
                break;
            case 2:
                cout << "You walk through a pathway filled with hanging lanterns. Its beautiful." << endl; Pause();
                gPosition = 3912;
                break;
            case 3:
                cout << "You walk through the path and set of the wind chimes. They\nmake a lot of noise!" << endl; Pause();
                NymphFollow();
                gPosition = 3914; Debug(); Move();
                break;
            case 4:
                cout << "You walk across the bank of sand. Its soft under your feet." << endl; Pause();
                gPosition = 399;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;
        }
    }

    //Dungeon Maze Position 3914
    if(gPosition == 3914)
    {
        switch(gMove)
        {
            case 1:
               break;
            case 2:
                cout << "You walk through the path and set of the wind chimes. They\nmake a lot of noise!" << endl; Pause();
                NymphFollow();
                gPosition = 3913;
                break;
            case 3:
                cout << "As you walk through the path, flames light the lanterns around you. For some\nreason, the flames are bright blue. Its beautiful." << endl; Pause();
                gPosition = 3915; Debug(); Move();
                break;
            case 4:
                cout << "You pass by an old abandoned cottage as you travel through the area.\nNothing happens, but you wonder how the building got there." << endl; Pause();
                gPosition = 3910;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;

        }
    }

    //Dungeon Maze Position 3915
    if(gPosition == 3915)
    {
        switch(gMove)
        {
            case 1:
                break;
            case 2:
                cout << "As you walk through the path, flames light the lanterns around you. For some\nreason, the flames are bright blue. Its beautiful." << endl; Pause();
                gPosition = 3914;
                break;
            case 3:
                break;
            case 4:
                cout << "You walk through a field of wheat. It feels peaceful." << endl; Pause();
                gPosition = 3911;
                break;
            case 5:
                cout << "You are in the midst of a maze of pathways. A\nmonster lurks in the darkness." << endl;
                Pause();
                break;
        }

    }

//}
}




//The Puzzles  - - - - - -

//Earth Puzzle
void NymphFollow()
{
    void ForestNymphKillsYou();

    if(sminiScene_Dam == false)
    {



    switch(gPosition)
    {
        case 391:
            if(nymphPosition == 39 || gPosition == 395 || gPosition == 392) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 392:
            if(nymphPosition == 391 || gPosition == 393 || gPosition == 396) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 393:
            if(nymphPosition == 392 || gPosition == 397) {ForestNymphKillsYou(); Pause();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 394:
            if(nymphPosition == 39 || gPosition == 395 || gPosition == 398) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 395:
            if(nymphPosition == 394 || gPosition == 396 || gPosition == 399) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 396:
            if(nymphPosition == 397 || gPosition == 395 || gPosition == 392 || gPosition == 3910) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 397:
            if(nymphPosition == 393 || gPosition == 396 || gPosition == 3911) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 398:
            if(nymphPosition == 394 || gPosition == 3912 || gPosition == 399) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 399:
            if(nymphPosition == 398 || gPosition == 3913 || gPosition == 3910 || gPosition == 395) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 3910:
            if(nymphPosition == 399 || gPosition == 3914 || gPosition == 3911 || gPosition == 396) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 3911:
            if(nymphPosition == 3910 || gPosition == 397 || gPosition == 3915) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 3912:
            if(nymphPosition == 38 || gPosition == 3913) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 3913:
            if(nymphPosition == 399 || gPosition == 3912 || gPosition == 3914) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
        case 3914:
            if(nymphPosition == 3913 || gPosition == 3910 || gPosition == 3911) {ForestNymphKillsYou();}
            else {cout << NymphFollowMessage; Pause(); nymphPosition = gPosition;}
            break;
    }



    }

}

void ForestNymphKillsYou()
{
    void GameOver();


    cName = " ";
    animationText = "You feel despair fall over you in a suffocating wave. Behind you\nyou hear a snarl.";
    Dialogue();
    animationText = "You turn around, only in time to see the Nymph close in.\nEverything goes black....";
    Dialogue();

    GameOver();

}


//Water Puzzle
void DungeonWaterPuzzle()
{
    void TopScreen();



    //Reset the minigame
    minigame_win = false;
    Dungeon_FountainCycle = 1;


    //Switch the order of the puzzle based on which set of fountains the player is at
        switch(Dungeon_FountainSet)
    {
        case 1:
            Dungeon_FountainOrder_Position1 = 3; Dungeon_FountainOrder_Position2 = 1; Dungeon_FountainOrder_Position3 = 4; Dungeon_FountainOrder_Position4 = 3;
            Dungeon_FountainOrder = 3143;
            break;
        case 2:
            Dungeon_FountainOrder_Position1 = 1; Dungeon_FountainOrder_Position2 = 3; Dungeon_FountainOrder_Position3 = 2; Dungeon_FountainOrder_Position4 = 1;
            Dungeon_FountainOrder = 1321;
            break;
        case 3:
            Dungeon_FountainOrder_Position1 = 2; Dungeon_FountainOrder_Position2 = 4; Dungeon_FountainOrder_Position3 = 1; Dungeon_FountainOrder_Position4 = 2;
            Dungeon_FountainOrder = 2412;
            break;
    }


    //run the cutscene that shows the order the fountains are in
    while(Dungeon_FountainCycle < 5)
    {
        ClearScreen();
        //run the cutscene in a loop that does the correct order
        switch(Dungeon_FountainCycle)
        {
        case 1:
            Dungeon_WhichFountain = Dungeon_FountainOrder_Position1;
            break;
        case 2:
            Dungeon_WhichFountain = Dungeon_FountainOrder_Position2;
            break;
        case 3:
            Dungeon_WhichFountain = Dungeon_FountainOrder_Position3;
            break;
        case 4:
            Dungeon_WhichFountain = Dungeon_FountainOrder_Position1;
            break;
        }
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        switch(Dungeon_WhichFountain)
        {
        case 1:
        cout << "                 @@@@" << endl;
        cout << "                 @@@@" << endl;
        cout << "                 @@@@" << endl;
        cout << "                 @@@@" << endl;
        cout << "                 @@@@" << endl;
        cout << "                 @@@@" << endl;
        cout << "                 @@@@" << endl;
        break;
        case 2:
        cout << "                               @@@@" << endl;
        cout << "                               @@@@" << endl;
        cout << "                               @@@@" << endl;
        cout << "                               @@@@" << endl;
        cout << "                               @@@@" << endl;
        cout << "                               @@@@" << endl;
        cout << "                               @@@@" << endl;
        cout << "                               @@@@" << endl;
        break;
        case 3:
        cout << "                                             @@@@" << endl;
        cout << "                                             @@@@" << endl;
        cout << "                                             @@@@" << endl;
        cout << "                                             @@@@" << endl;
        cout << "                                             @@@@" << endl;
        cout << "                                             @@@@" << endl;
        cout << "                                             @@@@" << endl;
        break;
        case 4:
        cout << "                                                           @@@@" << endl;
        cout << "                                                           @@@@" << endl;
        cout << "                                                           @@@@" << endl;
        cout << "                                                           @@@@" << endl;
        cout << "                                                           @@@@" << endl;
        cout << "                                                           @@@@" << endl;
        cout << "                                                           @@@@" << endl;

        }

        cout << "                 ____          ____          ____          ____"  << endl;

        //add one to the cycle so that the cutscene will switch to the next frame
        Dungeon_FountainCycle += 1;

        Sleep(500);

    }



    ClearScreen();
    TopScreen();
    Pause();

    //ask the player to guess the order they were shown
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    cout << "What order were the fountains in?\n" << endl;
    cin >> Dungeon_FountainGuess;

    //check if they were right
    if(Dungeon_FountainGuess == Dungeon_FountainOrder)
    {
        animationText = "The fountains all turn on. You guessed correctly!";
        Dialogue(); Pause();
        minigame_win = true;
    }
    else{animationText = "Nothing Happens."; Dialogue();}



}

void DungeonFirePuzzle()
{

    void FirePuzzleScreen();
    void FirePuzzleMovement();
    minigame_win = false;
    exitminigame = false;
    //need something to constantly run a screen where pathway is shown and fire is spurting in intervals
    //need character to be able to move between using awsd space by space (371 372 373 etc)
    //need logic running so that if character moves during fire they get hit, lose health, and return to beginning

    FirePuzzle_PillarsON = true;

    while(minigame_win == false && exitminigame == false)
    {
        FirePuzzleScreen();
        FirePuzzleMovement();

        if(gPosition == 373 && Dungeon_RightWing == false)
        {
            minigame_win = true;
            exitminigame = true;
            gPosition = 37;
        }

    }



}


//Fire Puzzle
void FirePuzzleScreen()
{
    void HealthBar();


    ClearScreen();
    HealthBar();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "          |              |              |                      " << endl;
    switch(gPosition)
    {
    case 37:
    if(FirePuzzle_PillarsON == false)
   {cout << "    @    ***            ***            ***                     |||" << endl;}
    else
   {cout << "    @                                                          |||" << endl;}
    break;
    case 371:
    if(FirePuzzle_PillarsON == false)
   {cout << "         ***     @      ***            ***                     |||" << endl;}
    else
   {cout << "                 @                                             |||" << endl;}
    break;
    case 372:
    if(FirePuzzle_PillarsON == false)
   {cout << "         ***            ***      @     ***                     |||" << endl;}
    else
   {cout << "                                 @                             |||" << endl;}
    break;
    case 373:
    if(FirePuzzle_PillarsON == false)
   {cout << "         ***            ***            ***               @     |||" << endl;}
    else
   {cout << "                                                         @     |||" << endl;}
    break;
    }
    cout << "          |              |              |                      " << endl;
    cout << "--------------------------------------------------------------------" << endl;

    if(FirePuzzle_PillarsON == true)
    {
        FirePuzzle_PillarsON = false;
    }

    else if(FirePuzzle_PillarsON == false)
    {
        FirePuzzle_PillarsON = true;
    }



    Sleep(250);
}

void FirePuzzleMovement()
{

    void Move();

    if(kbhit())
          {
            Move();
            movement = true;
          }

    if(movement == true)
    {

    switch(gPosition)
    {

    case 37:
        if(FirePuzzle_PillarsON == true)
        {
            gPosition = 37; Player_Health -= 3;
        }
        else if(gMove == 3) {gPosition = 371;} else if(gMove == 2) {exitminigame = true;}
        break;
    case 371:
        if(FirePuzzle_PillarsON == true)
        {
            gPosition = 37; Player_Health -= 3;
        }
        else if(gMove == 3) {gPosition = 372;} else if(gMove == 2) {gPosition = 37;}
        break;
    case 372:
        if(FirePuzzle_PillarsON == true)
        {
            gPosition = 37; Player_Health -= 3;
        }
        else if(gMove == 3) {gPosition = 373;} else if(gMove == 2) {gPosition = 371;}
        break;
    case 373:
        if(FirePuzzle_PillarsON == true)
        {
            gPosition = 37; Player_Health -= 3;
        }
        else if (gMove == 2) {gPosition = 372;}
        break;



    }

    movement = false;

    }
}
