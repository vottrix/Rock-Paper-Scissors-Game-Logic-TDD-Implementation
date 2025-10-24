# Rock Paper Scissors Game Logic

A C implementation of rock-paper-scissors game logic with comprehensive unit tests.

## Features

- Case-insensitive input handling
- Null pointer safety
- Efficient string comparison using pointer equality
- Clean, maintainable code structure
- Comprehensive test coverage

## Improvements Made

- **Better performance**: Reduced multiple strcmp calls by normalizing inputs once
- **Case insensitive**: Accepts "rock", "ROCK", "Rock", etc.
- **Null safety**: Handles null pointer inputs gracefully  
- **Const correctness**: Proper use of const qualifiers
- **Cleaner code**: Removed excessive comments, used constants for magic strings
- **More tests**: Added edge cases and comprehensive win condition tests

## Usage

```c
#include "gameLogic.h"

const char* result = Determine_Winner("rock", "scissors");
// Returns: "Player1", "Player2", "Draw", or "Invalid"
```

## Building

This is a Visual Studio C++ project with MSTest unit tests. Open the solution file and build normally.
