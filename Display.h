//This file runs the display based on info from backround movement. Backround movement pulls from this file to
//run the minimap on one side of the screen and the ever-present topscreen that shows the player whats going on.

void TopScreen()
{


    void Minimap();
    void HealthBar();

    tSpeaker = tTopScreen;
    TextColor();


    ClearScreen();
    cout << "______________________________________________________________________________" << endl;
    cout << endl;
    HealthBar();
    cout << endl;
    cout << "______________________________________________________________________________" << endl;
    Minimap();
    cout << endl;
    cout << "                                                                                    " << "I: " << dirInt << endl;
    cout << endl;


    cout << "                           " << dirUp << endl;
    cout << endl;
    cout <<"       "<< dirLeft << endl;
    cout <<"                                 @              " << dirRight << endl;
    cout << endl;
    cout << "                           " << dirDown << endl;

    cout << endl;
    cout << "______________________________________________________________________________" << endl;

    tSpeaker = text;
    TextColor();
}

void Minimap()
{

    /*cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << " _________________ " << endl;*/





    switch(gPosition)
    {



    case 1:
    cout << "                                                          " << " _________________ " << endl;
    cout << "                                                          " << "|    | ---- |     |" << endl;
    cout << "                                                          " << "|    |!     |     |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|    | ____ |     |" << endl;
    cout << "                                                          " << "|______|- |_______|" << endl;
    cout << "                                                          " << "| |***   @    |   |" << endl;
    cout << "                                                          " << "| |______   __|   |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 11:
    cout << "                                                          " << " _________________ " << endl;
    cout << "                                                          " << "|-----------------|" << endl;
    cout << "                                                          " << "|    |      |     |" << endl;
    cout << "                                                          " << "|        @        |" << endl;
    cout << "                                                          " << "|____| ____ |_____|" << endl;
    cout << "                                                          " << "|    | ---- |     |" << endl;
    cout << "                                                          " << "|    |      |     |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|    | ____ |     |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;

    case 12:
    cout << "                                                          " << " __________________" << endl;
    cout << "                                                          " << "| |____  ____  ____|" << endl;
    cout << "                                                          " << "| |    | ---- |    |" << endl;
    cout << "                                                          " << "| |    |      |    |" << endl;
    cout << "                                                          " << "| |  @             |" << endl;
    cout << "                                                          " << "| |    | ____ |    |" << endl;
    cout << "                                                          " << "| |______|- |______|" << endl;
    cout << "                                                          " << "|   |***        |  |" << endl;
    cout << "                                                          " << "|   |______   __|  |" << endl;
    cout << "                                                          " << " _________________  " << endl;
    break;
    case 13:
    cout << "                                                          " << " _________________ " << endl;
    cout << "                                                          " << "|__  ____  _____| |" << endl;
    cout << "                                                          " << "|  | ---- |     | |" << endl;
    cout << "                                                          " << "|  |      |     | |" << endl;
    cout << "                                                          " << "|            @  | |" << endl;
    cout << "                                                          " << "|  | ____ |     | |" << endl;
    cout << "                                                          " << "|____|- |_______| |" << endl;
    cout << "                                                          " << "|***        |     |" << endl;
    cout << "                                                          " << "|______   __|     |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 14:
    cout << "                                                          " << " _________________ " << endl;
    cout << "                                                          " << "| ----------------|" << endl;
    cout << "                                                          " << "| |    |      |   |" << endl;
    cout << "                                                          " << "| | @             |" << endl;
    cout << "                                                          " << "| |____| ____ |___|" << endl;
    cout << "                                                          " << "| |    | ---- |   |" << endl;
    cout << "                                                          " << "| |    |      |   |" << endl;
    cout << "                                                          " << "| |               |" << endl;
    cout << "                                                          " << "| |____| ____ |___|" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 15:
    cout << "                                                          " << " _________________ " << endl;
    cout << "                                                          " << "|---------------- |" << endl;
    cout << "                                                          " << "|  |      |     | |" << endl;
    cout << "                                                          " << "|            @  | |" << endl;
    cout << "                                                          " << "|__| ____ |_____| |" << endl;
    cout << "                                                          " << "|  | ---- |     | |" << endl;
    cout << "                                                          " << "|  |      |     | |" << endl;
    cout << "                                                          " << "|               | |" << endl;
    cout << "                                                          " << "|__| ____ |_____| |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 16:
    cout << "                                                          " << " _________________ " << endl;
    cout << "                                                          " << "|____  ____  _____|" << endl;
    cout << "                                                          " << "|    | ---- |     |" << endl;
    cout << "                                                          " << "|    |      |     |" << endl;
    cout << "                                                          " << "|        @        |" << endl;
    cout << "                                                          " << "|    | ____ |     |" << endl;
    cout << "                                                          " << "|______|- |_______|" << endl;
    cout << "                                                          " << "| |***        |   |" << endl;
    cout << "                                                          " << "| |______   __|   |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;

    case 2:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "| |     /  \\      |" << endl;
    cout << "                                                          " << "|_|     \\__/      |" << endl;
    cout << "                                                          " << "|      _____      |" << endl;
    cout << "                                                          " << "|______|-|-|______|" << endl;
    cout << "                                                          " << "|     |     |   **|" << endl;
    cout << "                                                          " << "|     |  @  |     |" << endl;
    cout << "                                                          " << "|     |     |     |" << endl;
    cout << "                                                          " << "|     |     |     |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 21:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "|_   |__||__|     |" << endl;
    cout << "                                                          " << "| |               |" << endl;
    cout << "                                                          " << "|        __       |" << endl;
    cout << "                                                          " << "| |  @  /  \\      |" << endl;
    cout << "                                                          " << "|_|     \\__/      |" << endl;
    cout << "                                                          " << "|      _____      |" << endl;
    cout << "                                                          " << "|______|-|-|______|" << endl;
    cout << "                                                          " << "|     |     |   **|" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 22:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "|_____   |__||__| |" << endl;
    cout << "                                                          " << "| --- |           |" << endl;
    cout << "                                                          " << "|            __   |" << endl;
    cout << "                                                          " << "|  @  |     /  \\  |" << endl;
    cout << "                                                          " << "|_____|     \\__/  |" << endl;
    cout << "                                                          " << "|          _____  |" << endl;
    cout << "                                                          " << "|    ______|-|-|__|" << endl;
    cout << "                                                          " << "|         |     | |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 23:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "||   | __   __|  |" << endl;
    cout << "                                                          " << "|    |_||___| ___|" << endl;
    cout << "                                                          " << "|     *  ***  |_ |" << endl;
    cout << "                                                          " << "|\\     @      _| |" << endl;
    cout << "                                                          " << "|/   __  ___  |___|" << endl;
    cout << "                                                          " << "|    |      |_***|" << endl;
    cout << "                                                          " << "|____|________|**|" << endl;
    cout << "                                                          " << "||  *************|" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 24:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "| |  | ---  |     |" << endl;
    cout << "                                                          " << "| |     @   |     |" << endl;
    cout << "                                                          " << "| |__|  __  |     |" << endl;
    cout << "                                                          " << "|_   |__||__|     |" << endl;
    cout << "                                                          " << "| |               |" << endl;
    cout << "                                                          " << "|        __       |" << endl;
    cout << "                                                          " << "| |     /  \\      |" << endl;
    cout << "                                                          " << "|_|     \\__/      |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 25:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "| |  | ---  |     |" << endl;
    cout << "                                                          " << "| |@        |     |" << endl;
    cout << "                                                          " << "| |__|  __  |     |" << endl;
    cout << "                                                          " << "|_   |__||__|     |" << endl;
    cout << "                                                          " << "| |               |" << endl;
    cout << "                                                          " << "|        __       |" << endl;
    cout << "                                                          " << "| |     /  \\      |" << endl;
    cout << "                                                          " << "|_|     \\__/      |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 26:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "|| __   __|      |" << endl;
    cout << "                                                          " << "||_||___| _______|" << endl;
    cout << "                                                          " << "| *  ***  | - |  |" << endl;
    cout << "                                                          " << "|           @ #___|" << endl;
    cout << "                                                          " << "|__  ___  |___|   |" << endl;
    cout << "                                                          " << "||      |_***    |" << endl;
    cout << "                                                          " << "||________|**    |" << endl;
    cout << "                                                          " << "|************    |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 27:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "|| __   __|      |" << endl;
    cout << "                                                          " << "||_||___| _______|" << endl;
    cout << "                                                          " << "| *  ***  | - |@ |" << endl;
    cout << "                                                          " << "|              ___|" << endl;
    cout << "                                                          " << "|__  ___  |___|   |" << endl;
    cout << "                                                          " << "||      |_***    |" << endl;
    cout << "                                                          " << "||________|**    |" << endl;
    cout << "                                                          " << "|************    |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 28:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "||   _________   |" << endl;
    cout << "                                                          " << "||   |  -     |  |" << endl;
    cout << "                                                          " << "||   | __ @ __|  |" << endl;
    cout << "                                                          " << "|    |_||___| ___|" << endl;
    cout << "                                                          " << "|     *  ***  |_ |" << endl;
    cout << "                                                          " << "|\\            _| |" << endl;
    cout << "                                                          " << "|/   __  ___  |___|" << endl;
    cout << "                                                          " << "|    |      |_***|" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 29:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "||   | __   __|  |" << endl;
    cout << "                                                          " << "|    |_||___| ___|" << endl;
    cout << "                                                          " << "|     *  ***  |_ |" << endl;
    cout << "                                                          " << "|\\            _| |" << endl;
    cout << "                                                          " << "|/   __  ___  |___|" << endl;
    cout << "                                                          " << "|    |  @   |_***|" << endl;
    cout << "                                                          " << "|____|________|**|" << endl;
    cout << "                                                          " << "||  *************|" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;



    case 3:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "|****      *******|" << endl;
    cout << "                                                          " << "|****      ****** |" << endl;
    cout << "                                                          " << "|****      ***** /|" << endl;
    cout << "                                                          " << "|      @   **** / |" << endl;
    cout << "                                                          " << "|**__      __* /  |" << endl;
    cout << "                                                          " << "|*/  \\    /  \\ |  |" << endl;
    cout << "                                                          " << "|*\\__/    \\__/ |  |" << endl;
    cout << "                                                          " << "|* /\\*    */\\   \\ |" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 31:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "|****n  n n n n***|" << endl;
    cout << "                                                          " << "|*****n n  n n ***|" << endl;
    cout << "                                                          " << "|*.**.      ******|" << endl;
    cout << "                                                          " << "|%  % .       @   |" << endl;
    cout << "                                                          " << "|  . %            |" << endl;
    cout << "                                                          " << "| %   ____  ******|" << endl;
    cout << "                                                          " << "|****/    \\ ******|" << endl;
    cout << "                                                          " << "|***/  ||  \\ *****|" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 32:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "|*****************|" << endl;
    cout << "                                                          " << "|*******___*******|" << endl;
    cout << "                                                          " << "|****** |_| ******|" << endl;
    cout << "                                                          " << "|******  |  ******|" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|        @        |" << endl;
    cout << "                                                          " << "|******     ******|" << endl;
    cout << "                                                          " << "|******     ******|" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 33:
    break;

    case 4:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "|***   |---|   ***|" << endl;
    cout << "                                                          " << "|****         ****|" << endl;
    cout << "                                                          " << "|*****       *****|" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|        @        |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|*****************|" << endl;
    cout << "                                                          " << "|*****************|" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;
    case 41:
    cout << "                                                          " << " _________________" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|                 |" << endl;
    cout << "                                                          " << "|***   |---|   ***|" << endl;
    cout << "                                                          " << " _________________ " << endl;
    break;






    //end of switch
    }






}

void CalculateDisplay()
{
    //AREA ONE - YOUR HOUSE

    if(gPosition == 16) //One_Entryway
    {dirUp = "Upstairs"; dirDown = "Outside: Garden"; dirLeft = "Kitchen"; dirRight = "Library"; dirInt = "Coat Rack";}

    if(gPosition == 11) //One_Hallway
    {dirUp = " "; dirDown = "Downstairs"; dirLeft = "Your Room"; dirRight = "Rose's Room"; dirInt = "Armor Stand";}

    if(gPosition == 12) //One_Kitchen
    {dirUp = "Stove"; dirDown = " "; dirLeft = "Chest"; dirRight = "Entryway"; dirInt = "Look Around";}

    if(gPosition == 13) //One_Library
    {dirUp = "Bookcase";  dirDown = " "; dirLeft = "Entryway"; dirRight = "Fireplace"; dirInt = "Look Around";}

     if(gPosition == 14) //One_YourRoom
    {dirUp = "Bed";  dirDown = " ";  dirLeft = "Desk"; dirRight = "Hallway"; dirInt = "Look Around";}

    if(gPosition == 15) //One_RoseRoom
    {dirUp = "Bed";  dirDown = " "; dirLeft = "Hallway"; dirRight =  "Desk"; dirInt = "Look Around";}

     if(gPosition == 1) //One_Travel
    {dirUp = "Enter House";  dirDown = " ";  dirLeft = " ";  dirRight = " "; dirInt = "Travel";}



    //AREA TWO _ TOWN

    if(gPosition == 2) //Two_Travel
    {dirUp = "Enter Town";dirDown = " "; dirLeft = " "; dirRight = " "; dirInt = "Travel";}

    if(gPosition == 21) //Two_MainSquare
    {dirUp = "Prancing Pony Inn"; dirDown = "  Exit Town"; dirLeft = "Edwins Shop"; dirRight = "House Path"; dirInt = "Fountain";}

    if(gPosition == 22) //Two_Shop
    {dirUp = "Shop Counter"; dirLeft = " "; dirRight = "Main Square"; dirDown = " "; dirInt = "Talk to the Shopkeeper";}

    if(gPosition == 23) //Two_HousePath
    {dirUp = "Grandma's House"; dirLeft = "Main Square"; dirRight = "Old Man's House"; dirDown = "Hilda's House"; dirInt = "Search bushes along path"; }

    if(gPosition == 24) //Two_Inn
    {dirUp = "Inn Counter"; dirLeft = "Upstairs"; dirRight = " "; dirDown = "Main Square"; dirInt = "Talk to the Innkeeper";}

    if(gPosition == 25) //Two_InnRoom
    {dirUp = "Bed"; dirLeft = "Table"; dirRight = "Downstairs"; dirDown = "Desk"; dirInt = "Look Around";}

    if(gPosition == 26) //Two_OldManHouse
    {dirUp = "Old Man"; dirLeft = "House Path"; dirRight = "Upstairs"; dirDown = "Pictures"; dirInt = "Look Around";}

    if(gPosition == 27) //Two_OldManUpstairs
        {dirUp = "Displayed Sword"; dirLeft = "Downstairs"; dirRight = "Chest"; dirDown = " "; dirInt = "Look Around";}

    if(gPosition == 28) //Two_GrandmaHouse
    {dirUp = "Grandma"; dirLeft = "Pictures"; dirRight = "Wood Stove"; dirDown = "House Path"; dirInt = "Look Around";}

    if(gPosition == 29) //Two_HildaHouse
    {dirUp = "House Path"; dirLeft = "Hilda"; dirRight = "Bed"; dirDown = "Dresser"; dirInt = "Look Around";}


    //AREA THREE - FOREST

    if(gPosition == 3) // Travel Zone/Entrance of Forest
    {dirUp = "Dark Woods"; dirLeft = "Clearing"; dirRight = "Lake"; dirDown = " "; dirInt = "Travel";}

    if(gPosition == 31)
    {dirUp = "Mushroom Patch"; dirLeft = "Flower field"; dirRight = "Forest Entrance"; dirDown = "Willow Tree"; dirInt = "Look Around";}

    if(gPosition == 32)
    {dirUp = "Sign"; dirLeft = "Dark Woods"; dirRight = "Elf Village"; dirDown = "Forest Entrance"; dirInt = "Look Around";}

    if(gPosition == 33)
    {dirUp = "Gate"; dirLeft = "Dungeon"; dirRight = "Dark Woods"; dirDown = " "; dirInt = "Look Around";}

    //FOREST AREA TWO: DUNGEON

    if(gPosition == 34)
    {if(Dungeon_CrownPuzzle == false){dirUp = "Statues";} else {dirUp = "Cavern Entrance";}
    dirLeft = "Marble Shelf"; dirRight = "Strange Markings"; dirDown = "Leave Dungeon"; dirInt = "Look Around";}

    if(gPosition == 35)
    {dirUp = "Chasm"; dirLeft = "Water Room"; dirRight = "Fire Room"; dirDown = "Dungeon Entrance"; dirInt = "Look Around";}

    if(gPosition == 36)
    {dirUp = "Silver Fountains"; dirLeft = "Gold Fountains"; dirRight = "Cavern Entrance"; dirDown = "Silver Fountains"; dirInt = "Look Around";}

    if(gPosition == 37)
    {dirUp = "Strange Markings"; dirLeft = "Cavern Entrance"; dirRight = "Fire Path"; dirDown = " "; dirInt = "Look Around";}

    if(gPosition == 38)
    {dirUp = "Maze"; dirLeft = "Sealed Room"; dirRight = "Chest"; dirDown = "Cavern Entrance"; dirInt = "Look Around";}

    if(gPosition == 39)
    {dirUp = "Soft Grass"; dirRight = "Willow Tree"; dirLeft = " "; dirDown = "Back of Cavern"; dirInt = "Look Around";}

    if(gPosition == 391)
    {dirUp = "Deeply Sleeping Bear"; dirLeft = "Willow Tree"; dirRight = "Dead Leaves"; dirDown = " "; dirInt = "Look Around";}

    if(gPosition == 392)
    {dirUp = "Path filled with puddles"; dirLeft = "Dead Leaves"; dirRight = "Dying Willow Tree"; dirDown = " "; dirInt = "Look Around";}

    if(gPosition == 393)
    {dirUp = "Rose Bushes"; dirLeft = "Dying Willow Tree"; dirRight = " "; dirDown = " "; dirInt = "Look Around";}

    if(gPosition == 394)
    {dirUp = "Ordinary Looking Path"; dirRight = "Lightly Sleeping Deer"; dirLeft = " "; dirDown = "Soft Grass"; dirInt = "Look Around";}

    if(gPosition == 395)
    {dirUp = "Jumpable Gap"; dirLeft = "Lightly Sleeping Deer"; dirRight = "Darkness"; dirDown = "Deeply Sleeping Bear"; dirInt = "Look Around"; }

    if(gPosition == 396)
    {dirUp = "Flower Bed"; dirLeft = "Darkness"; dirRight = "Crows Perched on Rafters"; dirDown = "Path filled with puddles."; dirInt = "Look Around";}

    if(gPosition == 397)
    {dirUp = "Ordinary Looking Path"; dirLeft = "Crows Perched on Rafters"; dirDown = "Rose Bushes"; dirInt = "Look Around";
    if(Dungeon_Crank == false) {dirRight = "Old Crank";} else {dirRight = " ";} }

    if(gPosition == 398)
    {dirUp = "Pool of Water"; dirLeft = " "; dirRight = "Gap with Vines"; dirDown = "Ordinary Looking Path"; dirInt = "Look Around";}

    if(gPosition == 399)
    {dirUp = "Sand Bank"; dirLeft = "Gap with Vines"; dirRight = "Garden Snakes"; dirDown = "Jumpable Gap"; dirInt = "Look Around";}

    if(gPosition == 3910)
    {dirUp = "Abandoned Cottage"; dirLeft = "Garden Snakes"; dirRight = "Cats"; dirDown = "Flower Bed"; dirInt = "Look Around";}

    if(gPosition == 3911)
    {dirUp = "Wheat Field"; dirLeft = "Cats"; dirRight = " "; dirDown = "Ordinary Looking Path"; dirInt = "Look Around";}

    if(gPosition == 3912)
    {dirUp = "Look at Stream"; dirLeft = " "; dirRight = "Lanterns"; dirDown = "Pool of Water"; dirInt = "Look Around";}

    if(gPosition == 3913)
    {dirUp = " "; dirLeft = "Lanterns"; dirRight = "Wind Chimes"; dirDown = "Sand Bank"; dirInt = "Look Around";}

    if(gPosition == 3914)
    {dirUp = " "; dirLeft = "Wind Chimes"; dirRight = "Blue Flames"; dirDown = "Abandoned Cottage"; dirInt = "Look Around";}

    if(gPosition == 3915)
    {dirUp = " "; dirLeft = "Blue Flames"; dirRight = " "; dirDown = "Wheat Field"; dirInt = "Look Around";}




    //AREA FOUR - ELF VILLAGE

    if(gPosition == 4)
    {dirUp = "Village Gate"; dirLeft = "Deep Forest"; dirRight = " "; dirDown = " "; dirInt = "Travel";}

    if(gPosition == 41)
    {dirUp = "Climb to treetops"; dirLeft = "Village Shop"; dirRight = "Kuhar's House"; dirDown = "Leave Village"; dirInt = "Statue";}

    if(gPosition == 42)
    {dirUp = "Upstairs"; dirLeft = "Counter"; dirRight = "Main Path"; dirDown = " "; dirInt = "Talk to Shopkeeper";}

    if(gPosition == 43)
    {dirUp = "Bed"; dirLeft = "Desk"; dirRight = "Tiki"; dirDown = "Shop"; dirInt = "Look Around";}

    if(gPosition == 44)
    {dirUp = "Kuhar"; dirLeft = "Main Path"; dirRight = "Firefly Jar"; dirDown = "Dresser"; dirInt = "Look Around";}

    if(gPosition == 45)
    {dirUp = "Ground Path"; dirDown = "Elder's House"; dirLeft = "Aida's House"; dirRight = "OakWood Inn"; dirInt = "Look Around";}

    if(gPosition == 46)
    {dirUp = "Aida"; dirLeft = "Bed"; dirRight = "Treetop Bridge"; dirDown = "Chest"; dirInt = "Look Around";}

    if(gPosition == 47)
    {dirUp = "Upstairs"; dirLeft = "Treetop Bridge"; dirRight = "Counter"; dirDown = "Bookshelf"; dirInt = "Talk to Innkeeper";}

    if(gPosition == 48)
    {dirUp = "Hammock"; dirLeft = "Table"; dirRight = "Bookshelf"; dirDown = "Downstairs"; dirInt = "Look Around";}

    if(gPosition == 49)
    {dirUp = "Treetop Bridge"; dirLeft = "Staff"; dirRight = "Bed"; dirDown = "Elder"; dirInt = "Look Around";}

}

void Debug()
{
    //This room makes the program recalculate the display for the room the player is in, and switches the game to the
    //correct display.

    void CalculateDisplay();
    CalculateDisplay(); TopScreen();
}

void HealthBar()
{
    //while(gameOver == false)
    //8(

    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 4);


    switch(Player_Health)
    {
        case 1:
            tHealthBar = "|";
            break;
        case 2:
            tHealthBar = "||";
            break;
        case 3:
            tHealthBar = "|||";
            break;
        case 4:
            tHealthBar = "||||";
            break;
        case 5:
            tHealthBar = "|||||";
            break;
        case 6:
            tHealthBar = "||||||";
            break;
        case 7:
            tHealthBar = "|||||||";
            break;
        case 8:
            tHealthBar = "||||||||";
            break;
        case 9:
            tHealthBar = "|||||||||";
            break;
        case 10:
            tHealthBar = "||||||||||";
            break;
        case 11:
            tHealthBar = "|||||||||||";
            break;
        case 12:
            tHealthBar = "||||||||||||";
            break;
        case 13:
            tHealthBar = "|||||||||||||";
            break;
        case 14:
            tHealthBar = "||||||||||||||";
            break;
        case 15:
            tHealthBar = "|||||||||||||||";
            break;
        case 16:
            tHealthBar = "||||||||||||||||";
            break;
        case 17:
            tHealthBar = "|||||||||||||||||";
            break;
        case 18:
            tHealthBar = "||||||||||||||||||";
            break;
        case 19:
            tHealthBar = "|||||||||||||||||||";
            break;
        case 20:
            tHealthBar = "||||||||||||||||||||";
            break;

    }




    cout << " " << pName << ": " << tHealthBar << " : " << Player_Health;
    tSpeaker = text;
    TextColor();


}
