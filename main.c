#include "solver.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	int **board;
	int *views;

	if (argc != 2)
	{
		error();
		return (0);
	}
	views = check_argv(argv[1]);
	if (views == NULL)
		return (0);
	board = initialize_board(views);
	if (board == NULL || !solveur(board, 1, 1))
	{
		error();
		return (0);
	}
	print_board(board);
	free_board(board);
	free(views);
	return (0);
}
