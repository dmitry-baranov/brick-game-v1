#include "tetris.h"

int main() {
    tetris_game();
    return 0;
}

int tetris_game(){
    GameState game_state;
    init_game();
    while(game_state.state == STATE_EXIT){
        Input input = get_input();
        update_state(&game_state, input);
        render(&game_state);
        usleep(DELAY);
    }
    finish_game();
}

void init_game(){
    init_gui();
    init_logic();
}

void finish_game() {
    finish_logic();
    finish_gui();
}