#include "gameLogic.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

static const char* ROCK = "Rock";
static const char* PAPER = "Paper";
static const char* SCISSORS = "Scissors";
static const char* INVALID = "Invalid";
static const char* DRAW = "Draw";
static const char* PLAYER1 = "Player1";
static const char* PLAYER2 = "Player2";

// Convert string to lowercase for case-insensitive comparison
static void to_lowercase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Normalize input to proper case
static const char* normalize_choice(const char* choice) {
    if (!choice) return NULL;
    
    char temp[20];
    strncpy(temp, choice, sizeof(temp) - 1);
    temp[sizeof(temp) - 1] = '\0';
    to_lowercase(temp);
    
    if (strcmp(temp, "rock") == 0) return ROCK;
    if (strcmp(temp, "paper") == 0) return PAPER;
    if (strcmp(temp, "scissors") == 0) return SCISSORS;
    
    return NULL;
}

const char* Determine_Winner(const char* player1, const char* player2) {
    if (!player1 || !player2) return INVALID;
    
    const char* p1_choice = normalize_choice(player1);
    const char* p2_choice = normalize_choice(player2);
    
    if (!p1_choice || !p2_choice) return INVALID;
    
    if (p1_choice == p2_choice) return DRAW;
    
    if ((p1_choice == ROCK && p2_choice == SCISSORS) ||
        (p1_choice == PAPER && p2_choice == ROCK) ||
        (p1_choice == SCISSORS && p2_choice == PAPER)) {
        return PLAYER1;
    }
    
    return PLAYER2;
}
