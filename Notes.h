
/* This file is for notes and lists for making the game



Current luck value placements are, when an enemy misses + 1, when its an enemies turn and their
health is even and your health odd, when you get any sort of luck






bugs:------------------------------------------

traveling menu goes twice when choosing area twoe
textcolor for thelper dont work


TO DO:------------------------


//Add in a transition every time you enter a new area or building. Should have a door (gate,etc.) sound effect
//along with the screen fading dark for a short amount of time. (short for each regular buidling, longer for new areas


NOTES:-----------------------------------------------

//reason color doesnt work in non cutscenes is because topscreen makes color white
//might be able to get rid of tSpeaker mostly with cName switch


//the reason sometimes a string to string comparison like enemy to skeleton or bull doesnt work
//is because if you leave two strings declared with nothing assigned to them like string bull and string skeleton
//then by defualt they will both equal zero/empty, so when you check which one it is it will come back
//enemy is all of them because no matter which it is all are empty so it equals all of them. to fix the
//problem just go into the initilization of the variables and just add random stuff to them so they are different
//you dont even need to use whatever you put as their string










//error function cannot be defined before{

means that there is a brace missing in a function somewhere in the file, search all them and fix it and you
should be fine















Procedures:

When creating an item in the game that is only used once, instead of rendering
it false again when used, instead add the sequence in which it is used into the
item screen display so that it knows to no longer display the item in inventory
without rendering it false and attainable again with no purpose.



Whenever adding the code for a random battle when entering an area, m,ake sure
the game checks for a game over before bringing the person to position after the battle




A FEW NOTES:


*   sSomething means its a status variable

*   tSomething means its a text variable

* Number system sheet for areas

The First digit is always the area. So Area ones rooms all begin with a one, twos all
begin with a two, etc.

The travel zone of each area is always just the area code number with no room number code after
it

The next numbers are the room code. Usually just one more digit, although if an area has more than that
there might be two digits on the end of some.

Area One_____Your House

1 - Travel Zone (Garden)
11 - Hallway
12 - Kitchen
13 - Library
14 - Your Room
15 - Roses Room
16 - Entryway

Area Two______ Town


2 - Travel Zone (Gate)
21 - Main Square
22 - Shop
23 - House Path
24 - Inn
25 - Upstairs Room in in which you can sleep (only unlocked when bought a night stay)
26 - Old Mans House
27 - Upstairs Room in old mans house with sword and chest of collectives
28 - Grandmas House

