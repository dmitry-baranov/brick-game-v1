#include "tetris.h"

int main() {
  tetris_game();
  return 0;
}

void tetris_game() {
  GameState game_state;
  init_game(&game_state);
  while (game_state.state == STATE_EXIT) {
    Input input = get_input();
    update_state(&game_state, input);
    render(&game_state);
    usleep(DELAY);
  }
  finish_game();
}

void init_game(GameState* game_state) {
  init_gui();
  init_logic(game_state);
}

void finish_game() { finish_gui(); }