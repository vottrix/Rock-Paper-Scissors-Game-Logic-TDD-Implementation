#include "gameLogic.h"      //the header file for this game logic
#include <string.h>         //the library to work with strings

char* Determine_Winner(const char player1[], const char player2[])
{
    //we check if Player1 entered something other than "Rock," "Paper," or "Scissors"
    if (strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0)
    {
        return "Invalid";       //if it is not one of the valid options, return "Invalid"
    }

    //we check if Player2 entered something other than "Rock," "Paper," or "Scissors"
    if (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0)
    {
        return "Invalid";       //if Player2's choice is also invalid, return "Invalid"
    }

    //we check if both players picked the same thing, meaning it is a draw
    if (strcmp(player1, player2) == 0)
    {
        return "Draw";      //both picked the same, so it is a tie
    }

    //we check if Player1 wins based on the classic game rules
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||       //rock beats Scissors
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) ||          //paper beats Rock
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0))        //scissors beats Paper
    {
        return "Player1";       //Player1 wins based on the rules
    }
    else
    {
        return "Player2";       //if none of the above apply, Player2 must have won
    }
}
