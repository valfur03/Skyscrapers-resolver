#include "solver.h"

void print_board(int **board)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			ft_putchar(board[i][j++] + 48);
			if (j < 5)
				ft_putchar(' ');
		}
		i++;
		ft_putchar('\n');
	}
}

int solveur_check_row(int **board, int row, int col)
{
	if (col != 4)
		return (1);
	if (!check_row(board[row]))
	{
		board[row][col] = 0;
		return (0);
	}
	return (1);
}

int solveur_check_col(int **board, int row, int col)
{
	if (row != 4)
		return (1);
	if (!check_col(board, col))
	{
		board[row][col] = 0;
		return (0);
	}
	return (1);
}

int solveur(int **board, int row, int col)
{
	int val;
	int r_row;
	int r_col;

	val = 1;
	while (val <= 4)
	{
		while (!is_safe(board, val, row, col) && val <= 4)
			val++;
		if (val > 4)
			return (0);
		board[row][col] = val;
		if (!solveur_check_row(board, row, col))
			return (0);
		if (!solveur_check_col(board, row, col))
			return (0);
		if (row == 4 && col == 4)
			return (1);
		r_row = row + (col == 4);
		r_col = (col == 4) ? 1 : col + 1;
		if (solveur(board, r_row, r_col))
			return (1);
		board[row][col] = 0;
		val++;
	}
	return (0);
}
