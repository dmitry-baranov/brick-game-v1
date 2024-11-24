#include "game_logic.h"

void init_logic(GameState* game_state) {
  game_state->state = STATE_PLAYING;
  game_state->figure.type = EMPTY;
  game_state->figure = generate_figure();
  game_state->nextFigure = generate_figure();
  fill_board(game_state->board);
}

void update_state(GameState* state, Input input) {
  // main method if logic
}

Figure generate_figure(){
  //generate figure
}

int** generate_board(){
  //generate board
}

void fill_board(int** board){
  //fill board
}