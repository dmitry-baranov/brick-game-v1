#ifndef MODEL_H
#define MODEL_H

#define BOARD_WIDTH 10
#define BOARD_HEIGHT 20

typedef enum {
  STATE_PLAYING,
  STATE_EXIT
} GameStateType;

typedef enum {
  EMPTY = 0,
  I_SHAPE,
  O_SHAPE,
  T_SHAPE,
  S_SHAPE,
  Z_SHAPE,
  J_SHAPE,
  L_SHAPE
} FigureType;

typedef struct {
  int x;
  int y;
} Position;

typedef struct {
  FigureType type;
  Position position;
  int rotation;
  Position blocks[4];
} Figure;

typedef enum {
  INPUT_NONE,
  INPUT_LEFT,
  INPUT_RIGHT,
  INPUT_DOWN,
  INPUT_ROTATE,
  INPUT_DROP,
  INPUT_EXIT
} Input;

typedef struct {
  GameStateType state;
  int board[BOARD_WIDTH][BOARD_HEIGHT];
  Figure figure;
  Figure nextFigure;
} GameState;

#endif  // MODEL_H