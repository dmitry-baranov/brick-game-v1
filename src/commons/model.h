#ifndef MODEL_H
#define MODEL_H

#define BOARD_WIDTH 10
#define BOARD_HEIGHT 20

typedef struct
{
    int state;
} GameState;

typedef enum {
    INPUT_NONE,
    INPUT_LEFT,
    INPUT_RIGHT,
    INPUT_DOWN,
    INPUT_ROTATE,
    INPUT_DROP,
    INPUT_PAUSE,
    INPUT_EXIT
} Input;

#endif // MODEL_H