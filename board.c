#include "board.h"

static void init_columns(int **board, int *vals)
{
	int i;
	int mode;

	mode = 0;
	while (mode < 2)
	{
		i = 1;
		while (i < 5)
		{
			board[mode * 5][i] = vals[mode * 4 + i - 1];
			i++;
		}
		mode++;
	}
}

static void init_rows(int **board, int *vals)
{
	int i;
	int mode;

	mode = 0;
	while (mode < 2)
	{
		i = 1;
		while (i < 5)
		{
			board[i][mode * 5] = vals[(mode + 2) * 4 + i - 1];
			i++;
		}
		mode++;
	}
}

int **initialize_board(int *vals)
{
	int i;
	int j;
	int **board;

	i = 0;
	j = 0;
	board = malloc(sizeof(*board) * 6);
	if (!board)
		return (NULL);
	while (i < 6)
	{
		j = 0;
		board[i] = malloc(sizeof(**board) * 6);
		while (j < 6)
			board[i][j++] = 0;
		i++;
	}
	init_columns(board, vals);
	init_rows(board, vals);
	return (board);
}

void free_board(int **board)
{
	int i;

	i = 0;
	while (i < 6)
		free(board[i++]);
	free(board);
}
