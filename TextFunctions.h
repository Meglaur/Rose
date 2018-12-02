//These are the functions that make cutscenes and interactions in the game fun and fancy, they do things like
//animate text so it scrolls across the screen or pauses the text or clears the screen, etc.


void Dialogue()
{

    void TextColor();
    void Pause();
    void FastText();
    void ClearScreen();
    void TopScreen();
    void SlowText();
    void SuperFastText();


    //check to see if its a cutscene or in world dialogue, set up screen accordingly
    if(Cutscene == true)
    {
        ClearScreen();
        //void CutscenePicture(); here, add a Cutscene int with value based on cutscene, which corresponds to a switch
        //that switches between pictures for each cutscene, make the value change to a two digit if cutscene
        //has more than one picture like room codes
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    }
    else
    {
        ClearScreen();
        TopScreen();
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    }


    //check who is speaking and make sure the color matches
    if(cName == pName)
    {
        tSpeaker = pName;
    }
    if(cName == " " || cName == "Old Man" || cName == "Grandma" || cName == "Hilda" || cName == "Elder" || cName == "Loni" || cName == "Shopkeeper" || cName == "Innkeeper" || cName == "Kuhar" || cName == "Aida" || cName == "Tiki")
    {
        tSpeaker = text;
    }
    if(cName == "???")
    {
        tSpeaker = tUnknown;
    }
    TextColor();



    //draw dialogue box
    cout << "_______________________________________________________________________________\n" << endl;
    cout << cName << endl;
    cout << "_______________________________________________________________________________" << endl;
    cout << "\n\n" << endl;


    //adjust text scrolling speed
    if(Slowtext == true)
    {
        SlowText(); Slowtext = false;
    }
    else if(Superfasttext == true)
    {
        SuperFastText(); Superfasttext = false;
    }
    else
    {
         FastText();
    }


    //draw a few more lines to seperate any aftertext
    cout << "\n\n" << endl;
    Pause();

    //return text color to normal
    tSpeaker = text; TextColor();
}

void Pause()
{
    //This Function Pauses the game until the user presses a key, useful in most cutscenes

    cout << endl;
    cout << endl;
    cin.ignore(10, '\n');
    cout << endl;
    cout << endl;
}

void DoublePause()
{
    void Pause();

    Pause();
    Pause();
}

void TextColor()
{


    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

    if(tSpeaker == tRose)
    {
        SetConsoleTextAttribute(color, 3); //aqua
    }
    if(tSpeaker == pName)
    {
        SetConsoleTextAttribute(color, 13); //purple
    }
    if(tSpeaker == tHelper)
    {
        SetConsoleTextAttribute(color, 9); //green?
    }
    if(tSpeaker == tBattle)
    {
        SetConsoleTextAttribute(color, 12); //red
    }
    if(tSpeaker == tUnknown)
    {
        SetConsoleTextAttribute(color, 8); //grey
    }
    if(tSpeaker == text)
    {
        SetConsoleTextAttribute(color, 7); //white
    }
    if(tSpeaker == tTopScreen)
    {
        SetConsoleTextAttribute(color, 7); //white
    }
}

void SlowText()
{

    bool textpause = false;
    int sleeptime = 500;
    string hello = animationText;
    int textdelay=0;
    while ( hello[textdelay] != '\0')
    {
	cout << hello[textdelay];
	Sleep(sleeptime);
	textdelay++;

	if(kbhit())
    {
        sleeptime = 0;
        textpause = true;
    }
    };

    if(textpause = true)
    {
        Pause();
    }


}

void MediumText()
{

    bool textpause = false;
    int sleeptime = 200;
    string hello = animationText;
    int textdelay=0;
    while ( hello[textdelay] != '\0')
    {
	cout << hello[textdelay];
	Sleep(sleeptime);
	textdelay++;

	if(kbhit())
    {
        sleeptime = 0;
        textpause = true;
    }
    };

    if(textpause = true)
    {
        Pause();
    }
}

void FastText()
{


    void animationPause();

    bool textpause = false;
    int sleeptime = 60;
    string hello = animationText;
    int textdelay=0;
    while ( hello[textdelay] != '\0')
    {
	cout << hello[textdelay];
	Sleep(sleeptime);
	textdelay++;

	if(kbhit())
    {
        sleeptime = 0;
        textpause = true;
    }
    };

    //wtf is this when did i write this is it actually working
    if(textpause = true) //this is a current buffer barrier to prevent enter in animation text being used as the next gmove or pause.
    {
       if(textswitch == false) { Pause(); animationpause = true;}
       else{textswitch = false;}
    }

        animationPause();


}

void SuperFastText()
{
    void animationPause();

    bool textpause = false;
    int sleeptime = 20;
    string hello = animationText;
    int textdelay=0;
    while ( hello[textdelay] != '\0')
    {
	cout << hello[textdelay];
	Sleep(sleeptime);
	textdelay++;

	if(kbhit())
    {
        sleeptime = 0;
        textpause = true;
    }
    };

    if(textpause = true) //this is a current buffer barrier to prevent enter in animation text being used as the next gmove or pause.
    {
        Pause();
        animationpause = true;
    }

     animationPause();

}

void ClearScreen()
{
    system("cls");
}

void animationPause()
{
    if(animationpause == true)
    {

    }
    if(animationpause == false)
    {
        Pause();
    }
}


