//This is the basic file that runs the game based on all the other files here. It states the order in which the game is played/things happen
//in general.

#include "Global_Variables.h"
#include "TextFunctions.h"
#include "Battle.h"
#include "ControlFunctions.h"
#include "BackroundMovement.h"
#include "Cutscenes.h"
#include "TitleScreen.h"
#include "Activities.h"
#include "Area2_Town.h"



using namespace std;



int main()
{

    OpeningtheGame();

    while(cutscene.End == false)
    {
        ControlLoop();
        if(Player.Health <= 0)
       {
           GameOver();
       }
    }


    return 0;
}

