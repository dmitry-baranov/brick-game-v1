#include <stdio.h>
#include <stdlib.h>
#include "gui/cli/gui.h"
#include "brick_game/tetris/game_logic.h"
#define STATE_EXIT -1
#define DELAY 100000 

typedef struct
{
    int state;
} GameState;

void tetris_game();