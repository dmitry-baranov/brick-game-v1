#include "gui.h"

void init_gui(){
    initialize_ncurses();
}

void initialize_ncurses() {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    curs_set(0);
}

void finish_gui(){
    endwin();
}

Input get_input() {
    int ch = getch();
    switch (ch) {
        case KEY_LEFT:
            return INPUT_LEFT;
        case KEY_RIGHT:
            return INPUT_RIGHT;
        case KEY_DOWN:
            return INPUT_DOWN;
        case KEY_UP:
            return INPUT_ROTATE;
        case ' ':
            return INPUT_DROP;
        case 'p':
        case 'P':
            return INPUT_PAUSE;
        case 'q':
        case 'Q':
            return INPUT_EXIT;
        default:
            return INPUT_NONE;
    }
}

void render(GameState* game_state){
    //main logic gui
}



