#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "brick_game/tetris/game_logic.h"
#include "gui/cli/gui.h"
#define DELAY 50000

void tetris_game();
void init_game(GameState* game_state);
void finish_game();
