// RpgLvlr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h> //for the rand functions

//A rpg Leveling system has: X core Stats, A number needed to reach, A current amount of Exp, Each stat gets incremented randomly per lvl, can choose 1 stat to put bonus points into, different things give different numbers

//---------------------------------------------------------------------------
// Global variables
//---------------------------------------------------------------------------

//SPECIAL Rip off
int dex;
int str;
int inti;
int chari;
int luck;
int atk;
int def;

int currentExp = 0;

int lvl = 0;
int currentLvl = 1;
int nxtLvl;
int maxLvl = 100;

int rndNumb = rand() %10 +1;



//Stat assigning goes here (assuminng they'll be reset each session)

//---------------------------------------------------------------------------
// Main Function
//---------------------------------------------------------------------------
int main()
{
	printf("Lol welcome to my shit thing");
    return 0;
}


//---------------------------------------------------------------------------
// Exp Calculating (Current, needed, distance)
//---------------------------------------------------------------------------
void calculating()
{
	int toNextLvl = (currentLvl * 10); //Sets an exponetial exp goal

	if (currentExp = toNextLvl){
		printf("You have levelled up!");
		currentLvl = currentLvl + 1;
	}

	if (currentLvl = maxLvl){
		printf("You have reached max level!");
	}
}

//---------------------------------------------------------------------------
// Focus Stat Function
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
//Classes to choose from
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
//Stat Rolling
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
//Start Screen (Will contain NEW and LOAD options) -Maybe delete
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//Experience options (just buttons to increment the current exp variable)
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
//"Saves" (Reads and writes current exp and lvl to a CSV)
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
//Unlockable options
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
//Stat Checks
//---------------------------------------------------------------------------