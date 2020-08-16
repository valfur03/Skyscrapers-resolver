#ifndef SOLVEUR_H
# define SOLVEUR_H
# include "check.h"
# include "board.h"
# include "display.h"

void print_board(int **board);
int solveur(int **board, int row, int col);
int solveur_check_row(int **board, int row, int col);
int solveur_check_col(int **board, int row, int col);

#endif
