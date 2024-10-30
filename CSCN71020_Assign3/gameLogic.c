#include "gameLogic.h"
#include <string.h>

char* Determine_Winner(const char player1[], const char player2[])
{
    //check if Player1 wins with Rock vs. Scissors
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0)
    {
        return "Player1";
    }
    return "Invalid";       //default to Invalid for all other cases for now
}
