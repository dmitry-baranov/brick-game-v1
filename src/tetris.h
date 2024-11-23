#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "gui/cli/gui.h"
#include "brick_game/tetris/game_logic.h"
#define STATE_EXIT -1
#define DELAY 50000 

void tetris_game();
void init_game();
void finish_game();
