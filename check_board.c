/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 14:21:52 by datack            #+#    #+#             */
/*   Updated: 2020/08/16 14:21:54 by datack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_board.h"
#include <unistd.h>

int		checkleft(int *row)
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
	if (count == row[0])
		return (1);
	return (0);
}

int		checkright(int *row)
{
	int i;
	int max;
	int count;

	i = 4;
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
	if (count == row[5])
		return (1);
	return (0);
}

int		checkrow(int *row)
{
	if (checkleft(row) && checkright(row))
		return (1);
	return (0);
}

int		issafe(int **board, int val, int row, int col)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < 5)
	{
		if (board[i][col] == val)
			return (0);
		i++;
	}
	while (j < 5)
	{
		if (board[row][j] == val)
			return (0);
		j++;
	}
	return (1);
}

int		checkcolumn(int **board, int col)
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
	if (checkleft(tab) && checkright(tab))
	{
		free(tab);
		return (1);
	}
	free(tab);
	return (0);
}
