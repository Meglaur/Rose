
//This file contains the code for the rooms within the fourth area of the game, the Elf Village

void Area_ElfVillage()
{

    void Debug();
    void Move();
    void Pause();
    void TravelZone();
    void PlayerSleep();
    void miniScene_Kuhar();
    void miniScene_Loni();
    void SlowText();
    void Cutscene_Elder1();

    cout << "\n\n\n\n\n\n\n\n\n";



    //Village Gate
    if(gPosition == 4)
    {

        switch(gMove)
        {
        case 1:
               if(Room.Village == false)
                {
                   miniScene_Loni();
                }
                else if(Room.Village == true)
                {
                    cout << "You pass by Loni as you enter the gate." << endl;
                    if(Loni < 3)
                    {
                        cout << "He nods at you. You awkwardly nod back." << endl;
                        Pause();
                    }
                    else if(Loni < 7)
                    {
                        cout << "He's still here...Does he ever sleep?" << endl;
                        Pause();
                    }
                    else
                    {
                        animationText = ". . .";
                        SlowText();
                        cout << "How long can someone sit at a gate?" << endl;
                        Loni = 0;
                        Pause();
                    }
                    gPosition = 41;
                    Debug(); Move();
                    Loni += 1;
                }

            break;
        case 2:
            enemy = Enemy.AngryFlower; RandomEnemyEncounter(); gPosition = 32;
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            cout << "You stand in a small clearing next to a beautiful village of elves." << endl;
            Pause();
            break;
        }


    }

    //Main Path
    if(gPosition == 41)
    {
        switch(gMove)
        {
        case 1:
            gPosition = 45;
            Debug(); Move();
            break;
        case 2:
            gPosition = 42;
            Debug(); Move();
            break;
        case 3:
            gPosition = 44;
            Debug(); Move();
            break;
        case 4:
            gPosition = 4;
            break;
        case 5:
            cout << "You are at the bottom level of tree houses, you see flowers everywhere and the\nFira walking around. A statue lies in the middle of the path." << endl;
            Pause();
            cout << "You go up to the statue. It looks like a young warrior elf. You wonder who\nit was." << endl;
            Pause();

        }
    }

    //Village Shop
    if(gPosition == 42)
    {
        switch(gMove)
        {
        case 1:
            gPosition = 43;
            Debug(); Move();
            break;
        case 2:
            ClearScreen(); cout << "\n\n                       ";
            animationText = "Would you like to buy something?";
            FastText();
            cout << "\n\n\n\n\n\n\n\n";

            cout << "                       1. Elixers - 5 coins" << endl;
                if(Item.Necklace == false)
                {
                    cout << "                       2. Fira Necklace (Increases Defense) - 15 coins" << endl;
                }
                cout << "                       3. Nothing" << endl;
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
                switch(decision)
                {
                case 1:
                    if(Item.Coins >= 5)
                    {
                        cout << "                         You bought some elixers!" << endl;
                        cout << "                              *Elixers + 3*" << endl;
                        DoublePause();
                        Character.Name = "Shopkeeper";
                        animationText = "Thank you so much.";
                        Dialogue();
                        Item.Elixers += 3;
                        Item.Coins -= 5;
                    }
                    else {cout << "                    You don't have enough coins for that!" << endl; Pause();}
                    Pause();
                    break;
                case 2:
                    if(Item.Necklace == false)
                    {

                        if(Item.Coins >= 15)
                        {
                            cout << "        You bought the Fira Necklace! Your defense increased by one!";
                            DoublePause();

                            Character.Name = "Shopkeeper";
                            animationText = "Thank you so much! Someone finally bought it!";
                            Dialogue();

                            Item.Necklace = true;
                            Player.Defense += 1;
                            Item.Coins -= 15;
                        }
                    else{cout << "                    You don't have enough coins for that!" << endl; Pause();}
                    Pause();
                    }
                    else{}
                    break;
                case 3:
                break;

                Pause();
                }
        break;

        case 3:
            gPosition = 41;
            break;
        case 4:
            break;
        case 5:
            Character.Name = "Shopkeeper";
            animationText = "How can I help you?";
            Dialogue();
            cout << "1. Where's the Elder's house?" << endl;
            cout << "2. Heard any rumours?" << endl;
            cout << "3. Nothing" << endl;
            if(Item.Jewel == true) {cout << "4. Would you be interested in buying a jewel?" << endl;}
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
                Character.Name = "Shopkeeper";
                animationText = "Shopkeeper: The Elder's house is up in the treetops. Just climb the stairs\ncarved in that tree outside and follow the rope bridge to the farthest house.";
                Dialogue(); Pause();

                Character.Name = Player.Name;
                animationText = "Thank You!";
                Dialogue();
                break;
                case 2:
                Character.Name = Player.Name;
                animationText = "I heard that Aida lost her hairpin and is looking for\nit. Poor girl...";
                Dialogue(); Pause();
                break;
                case 4:
                    if(Item.Jewel == true && Item.JewelCoins == false)
                    {
                        Character.Name = " ";
                        animationText = "You show her the jewel you found in the lake.\nShe looks it over.";
                        Dialogue();

                        Character.Name = "Shopkeeper";
                        animationText = "I'll give you 20 for it.";
                        Dialogue();

                        Character.Name = " ";
                        animationText = "You sell her the jewel, and get 20 coins!\n*Coins + 20*";
                        Dialogue();  Item.Coins += 20;
                    }
                break;

            }

        break;

        }




    }

    //Village Shop House
    if(gPosition == 43)
    {
        switch(gMove)
        {
        case 1:
            cout << "You go up to the Shopkeepers bed. You probably shouldn't sleep here." << endl;
            Pause();
            break;
        case 2:
            cout << "You go up to the Shopkeepers desk. Theres a letter signed Koia. That\nmust be her name." << endl;
            Pause();
            break;
        case 3:
            cout << "You go up to the child playing by the window.\n" << endl;
        if(Tiki == false)
        {
            Character.Name = "Tiki";
            animationText = "Hi! I like pretty things. Do you have any?";
            Dialogue();
            if(Item.Daisy == true)
            {
                cout << "Offer her the daisy?\n" << endl;
                cout << "               1. Yes                       2.No" << endl;
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
                    Character.Name = "Tiki";
                    animationText = "Pretty! Thank you weird person!";
                    Dialogue();

                    Character.Name = " ";
                    animationText = "She gives you a key.";
                    Dialogue();

                    Character.Name = "Tiki";
                    animationText = "I found this on the ground. You can have it, it's not pretty.";
                    Dialogue();

                    Character.Name = " ";
                    animationText = "Strange key acquired....wonder what its for?";
                    Dialogue();

                    Item.Key = true;
                    Tiki = true;
                }
                    else{cout << "You decide not to give her the daisy" << endl; Pause();}

            }
            else
                {
                    cout << "You shake your head. She looks disappointed." << endl;
                    Pause();
                }
        }
        else
        {
            cout << "She smiles and stares at the daisy you gave her." << endl;
            Pause();
        }
        break;
        case 4:
            gPosition = 42;
            break;
        case 5:
            cout << "You look around the room. Its pretty, with lots of light shining on the\nwood furniture and decorations" << endl;
            Pause();

        }
    }

    //Kuhar's House
    if(gPosition == 44)
    {
        switch(gMove)
        {
        case 1:
            if(Kuhar == true)
            {
                Character.Name = " ";
                animationText = "You see Kuhar cooking something. He seems to be getting\ngood. He notices you.";
                Dialogue();

                Character.Name = "Kuhar";
                animationText = "Oh hello again! Thank's again for all your help.";
                Dialogue();

            }
            else if(Kuhar == false && miniscene.Kuhar == false)
            {
                miniScene_Kuhar(); miniscene.Kuhar = true;
            }
            else if(miniscene.Kuhar == true && Kuhar == false && Item.Cookbook == false)
            {
                Character.Name = "Kuhar";
                animationText = "I hope someday you find that cookbook. I will\nkeep trying to make the special cake!";
                Dialogue();
            }
            else if(Kuhar == false && miniscene.Kuhar == true && Item.Cookbook == true)
            {
                Character.Name = " ";
                animationText = "You approach Kuhar and hand him the cookbook. He looks\necstatic.";
                Dialogue();

                Character.Name = "Kuhar";
                animationText = "Kuhar: Thank you thank you thank you thank you\nthank you!!!! Now I can finally pursue my dream!";
                Dialogue();

                Character.Name = Player.Name;
                animationText = "Your very welcome!";
                Dialogue();

                Character.Name = " ";
                animationText = "Kuhar starts cooking up a storm. He waves for you to sit down.\nYou sit at the table and wait for him to finish.";
                Dialogue();

                Character.Name = "Kuhar";
                animationText = "I made you a Elf Cake! The recipe came out just\nas I hoped it would!";
                Dialogue();

                Character.Name = " ";
                animationText = "Kuhar hands you the Elf Cake. You eat it, it's delicious! You feel\nkind of strange though...";
                Dialogue();

                Character.Name = "Kuhar";
                animationText = "It gives the person who eats it more Attack Power!";
                Dialogue();

                Character.Name = " ";
                animationText = "Your damage increased by 2!";
                Dialogue();

                Player.Damage += 2; Kuhar = true;

            }
            break;
        case 2:
            gPosition = 41;
            break;
        case 3:
            cout << "You go up to the jar of fireflies on Kuhar's table." << endl;
            cout << endl;
            if(Kuhar == true)
            {
                cout << "The fireflies dance happily around. They seem happy when Kuhar is." << endl;
                Pause();
            }
            else
            {
                cout << "They float around and reluctantly glow. There seem to reflect\nKuhar's mood." << endl;
                Pause();
            }
            break;
        case 4:
            cout << "You probably shouldn't look in other peoples dressers." << endl;
            Pause();
            break;
        case 5:
            cout << "You look around the house. A beautiful wooden kitchen is carved\ninto the trunk, and you see pots, dishes, and drawings of food everywhere." << endl;
            Pause();
            break;

        }



    }

    //Treetops Bridges
    if(gPosition == 45)
    {
        switch(gMove)
        {
        case 1:
            gPosition = 41;
            break;
        case 2:
            gPosition = 46;
            Debug(); Move();
            break;
        case 3:
            gPosition = 47;
            Debug(); Move();
            break;
        case 4:
            gPosition = 49;
            Debug(); Move();
            break;
        case 5:
            cout << "You feel a little dizzy crossing rope bridges between treetops,\nbut the village is super pretty from up here. It probably glows at night\nwith all the lanterns hanging around. You don't know how everything\ndoesn't catch on fire." << endl;
            Pause();
        }
    }

    //Aida's House
    if(gPosition == 46)
    {

        void miniScene_Aida();

        switch(gMove)
        {
        case 1:
            if(Aida == true)
            {
                Character.Name = "Aida";
                animationText = "Good luck on your journey. I hope you find your sister.";
                Dialogue();
            }
            else if(Aida == false && miniscene.Aida == false)
            {
                miniScene_Aida(); miniscene.Aida = true;
            }
            else if(Aida == false && miniscene.Aida == true && Item.Hairpin == false)
            {
                Character.Name = "Aida";
                animationText = "I hope you are able to find my hairpin.";
                Dialogue();
            }
            else if(Aida == false && miniscene.Aida == true && Item.Hairpin == true)
            {
                Character.Name = "Aida";
                animationText = "You found it! Thank you so much " + Player.Name + "!";
                Dialogue();

                Character.Name = " ";
                animationText = "Aida puts the hairpin in her hair and walks to the chest.";
                Dialogue();

                Character.Name = "Aida";
                animationText = "Aida: I don't really know how to make it up to you\nbut I hope this helps you on your journey.";
                Dialogue();

                Character.Name = " ";
                animationText = "She gives you 20 coins!!  *Coins + 20*";
                Dialogue();

                Character.Name = Player.Name;
                animationText = "Thank you!";
                Dialogue();

                Character.Speaker = Player.Name;
                TextColor();


                Item.Coins += 20;
                Aida = true;
            }
            break;
        case 2:
            cout << "The bed is perfectly made, and the blanket is covered in flower designs." << endl; Pause();
            break;
        case 3:
            gPosition = 45;
            break;
        case 4:
            cout << "You probably shouldn't steal from other people." << endl; Pause();
            break;
        case 5:
            cout << "You look around the tree trunk house. Its cozy and warm, the stove in the\nroom glowing with fire. Wait? how isn't that burning down the tree?!" << endl;
            animationText = ". . .";
            SlowText();
            Pause();
            cout << "You decide not to waste time contemplating elf physics." << endl;
            Pause();
            break;
        }

    }

    //Oakwood Inn
    if(gPosition == 47)
    {
        switch(gMove)
        {
        case 1:
             if(Inn == true)
            {
                gPosition = 48; Debug(); Move();
            }
            else
            {
                cout << "You don't have access to that room!" << endl; Pause();
            }
            break;
        case 2:
            gPosition = 45;
            break;
        case 3:
            Character.Name = "Innkeeper";
            animationText = "Would you like to stay the night? - 5 coins";
            Dialogue();
            cout << endl;
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
                if(Item.Coins >= 5)
                {
                animationText = "Heres the key to your room, you'll find it upstairs.";
                Dialogue();
                Item.Coins -= 5;
                Inn = true;
                }
                 else if(Inn == true)
                {
                    cout << "You already have a room!" << endl;
                }
                else if(Item.Coins < 5)
                {
                    cout << "You don't have enough coins for that!" << endl;
                }
                Pause();
                break;
            case 2:
                animationText = "If you change you mind come on back.";
                Dialogue();
                break;
            }
            Pause();
            break;
        case 4:
            cout << "You go up to the bookshelf. It's filled with books in elvish." << endl;
            Pause();
            if(Item.Book == false)
            {
            cout << "One of the books is old and tattered, but it is filled\nwith runes. It seems like a translation book. Take it?\n" << endl;
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
            cout << endl;
            if(decision == 1) {cout << "You take the book with you! You can look at it by\nchoosing the book in the Use Item screen." << endl; DoublePause(); Item.Book = true;}
            else {cout << "You decide not to take the book with you." << endl; DoublePause();}
            }
            break;
        case 5:
            Character.Name = "Innkeeper";
            animationText = "How can I help you?";
            Dialogue();
            cout << "1. Know anything about the forest?" << endl;
            cout << "2. Why do you have a gatekeeper?" << endl;
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
            switch(decision)
            {
            case 1:
                animationText = "I heard there's a dungeon deep in the dark woods, and\na monster lives there.";
                Dialogue();
                break;
            case 2:
                animationText = "Have you not seen the monsters roaming around the woods?\n It has been crazy out there lately. Luckily we have been\nsafe in the village, but it doesn't hurt to be cautious.";
                Dialogue();
                break;
            }
            Pause();
        }
    }

    //Oakwood Inn Room
    if(gPosition == 48)
    {
        switch(gMove)
        {
        case 1:
            if(Inn == true)
            {
            cout << "You go up to the hammock. Its woven from some kind of silk.It looks\nincredibly soft. Stay the night?" << endl;
            cout << "(You will not be able to re-enter the room after leaving once you do)" << endl;
            cout << endl;
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
             switch(decision)
            {
            case 1:
                PlayerSleep();
                Inn = false; Town.InnTable = false;
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
            if(Town.InnTable == false)
            {
            cout << "You go up to the table in the room. The Innkeeper left a meal on it for you." << endl;
            cout << "*Food + 2*" << endl;
            Item.Food += 2;
            Town.InnTable = true;
            }
            else
            {
            cout << "You go up to the table in the room. It has nothing on it." << endl;
            }
            Pause();
            break;
        case 3:
            cout << "Another bookshelf filled with ruins. Wonder why the Inn has\nso many.." << endl;
            Pause();
            break;
        case 4:
            cout << "You decide to go back downstairs." << endl;
            if(Inn == false)
            {
            Character.Name = "Innkeeper";
            animationText = "Thank you for staying the night. Come again!";
            Dialogue();
            }
            gPosition = 47;
            break;
        case 5:
            cout << "You look around the room. One whole wall is made of a glass pane,\nand you can see the rest of the tree village below.\nThe room is warm and breezy, with a cozy hammock hanging near one wall." << endl;
            Pause();

        }
    }

    //Village Elder's House
    if(gPosition == 49)
    {
        switch(gMove)
        {
        case 1:
            gPosition = 45;
            break;
        case 2:
            cout << "You go up to the wall, a beautifully carved staff hangs on a\ndecorative rack." << endl;
            if(sStatus < 6)
            {
            Character.Name = Player.Name;
            animationText = "This staff is beautiful.";
            Dialogue();

            Character.Name = "Elder";
            animationText = "Thank you. It was a gift from my people when I helped lead\nthem against enemies long ago, now it sits in decoration. I fear\nI may have to use it soon if the monsters of the dark woods approach our Item.";
            Dialogue();

            }
            else if(sStatus >= 6)
            {
                Character.Name = "Elder";
                animationText = "Once again a beautiful decoration, and nothing more.\nI thank you for that.";
                Dialogue();
            }
            break;
        case 3:
            cout << "You go up to the Elders Bed. On it are books piled everywhere. He\nseems to be quite the reader." << endl;
            Pause();
            break;
        case 4:
            if(cutscene.Elder == false)
            {
                Cutscene_Elder1();
            }
            else
            {
                Character.Name = "Elder";
                animationText = "Good luck on the heavy task that is before you. We\nall stand with you.";
                Dialogue();
            }
            break;
        case 5:
            cout << "The house has beautiful carvings all over the wooden walls, and a\nceiling of glass. It would be a beautiful place to live,\nand the daylight coming through the rood must be perfect\nfor reading." << endl;
            Pause();
            break;
        }


    }






}
