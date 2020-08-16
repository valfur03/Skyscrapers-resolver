#ifndef CHECK_BOARD_H
# define CHECK_BOARD_H
# include <stdlib.h>
# include "display.h"

int *check_argv(char *arg);
int check_row(int *row);
int check_col(int **board, int column);
int is_safe(int **board, int val, int row, int col);

#endif
