#include <ncurses.h>
#include <unistd.h>
#include "tetris.h"

int main() {
    tetris_game();
    return 0;
}

void tetris_game(){
    GameState game_state;

    init_game_logic();
    init_game_gui();

    while(game_state.state == STATE_EXIT){
        process_input(&game_state);
        update_state(&game_state);
        render(&game_state);
        usleep(DELAY);
    }
    game_finish_gui();

    //free everything
}