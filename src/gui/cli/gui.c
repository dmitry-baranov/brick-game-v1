#include "gui.h"

void init_gui() { initialize_ncurses(); }

void initialize_ncurses() {
  initscr();
  cbreak();
  noecho();
  keypad(stdscr, TRUE);
  nodelay(stdscr, TRUE);
  curs_set(0);
}

void finish_gui() { endwin(); }

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
    case 'q':
    case 'Q':
      return INPUT_EXIT;
    default:
      return INPUT_NONE;
  }
}

void render(GameState* game_state) {
  clear();
  draw_board(game_state);
  draw_figure(game_state);
  refresh();
}

void draw_board(GameState* game_state) {
  for (int y = 0; y < BOARD_HEIGHT; y++) {
    for (int x = 0; x < BOARD_WIDTH; x++) {
      if (game_state->board[y][x] != EMPTY) {
        mvprintw(y, x * 2, "[]");
      } else {
        mvprintw(y, x * 2, "  ");
      }
    }
  }
}

void draw_figure(GameState* game_state) {
  Figure* figure = &game_state->figure;
  for (int i = 0; i < 4; i++) {
    int x = figure->position.x + figure->blocks[i].x;
    int y = figure->position.y + figure->blocks[i].y;
    mvprintw(y, x * 2, "[]");
  }
}
