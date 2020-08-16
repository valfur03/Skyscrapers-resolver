#include "check.h"
#include <unistd.h>

int *check_argv(char *arg)
{
	int i;
	int j;
	int *tab;

	tab = malloc(16 * sizeof(int));
	if (!tab)
		return (error_null());
	j = 0;
	i = 0;
	if (!arg)
		return (error_null());
	while (arg[i])
	{
		if ((!(i % 2 == 0 && arg[i] >= '1' && arg[i] <= '4')
			&& !(i % 2 == 1 && arg[i] == ' ')) || i > 31)
			return (error_null());
		if (i % 2 == 0)
			tab[j++] = arg[i] - 48;
		i++;
	}
	if ((i > 0 && (arg[i - 1] < '1' || arg[i - 1] > '4')) || i != 31)
		return (error_null());
	return (tab);
}

int check_row(int *row)
{
	int i;
	int max;
	int count;

	i = 1;
	max = 0;
	count = 0;
	while (i < 5)
	{
		if (row[i] > max)
		{
			max = row[i];
			count++;
		}
		i++;
	}
	if (count != row[0])
		return (0);
	i--;
	max = 0;
	count = 0;
	while (i > 0)
	{
		if (row[i] > max)
		{
			max = row[i];
			count++;
		}
		i--;
	}
	if (count != row[5])
		return (0);
	return (1);
}

int check_col(int **board, int col)
{
	int *tab;
	int i;

	tab = malloc(6 * sizeof(int));
	i = 0;
	while (i < 6)
	{
		tab[i] = board[i][col];
		i++;
	}
	if (check_row(tab))
	{
		free(tab);
		return (1);
	}
	free(tab);
	return (0);
}

int is_safe(int **board, int val, int row, int col)
{
	int i;

	i = 1;
	while (i < 5)
	{
		if (board[i++][col] == val)
			return (0);
	}
	i = 1;
	while (i < 5)
	{
		if (board[row][i++] == val)
			return (0);
	}
	return (1);
}
