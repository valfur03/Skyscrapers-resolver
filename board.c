/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 13:33:01 by datack            #+#    #+#             */
/*   Updated: 2020/08/16 12:14:09 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "board.h"

static void	initcolumns(int **board, int *vals)
{
	int	i;
	int	mode;

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

static void	initrows(int **board, int *vals)
{
	int	i;
	int	mode;

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

int			**initializeboard(int *vals)
{
	int	i;
	int	j;
	int	**board;

	i = 0;
	j = 0;
	board = malloc(sizeof(*board) * 6);
	if (!board)
		return (NULL);
	(void)vals;
	while (i < 6)
	{
		j = 0;
		board[i] = malloc(sizeof(**board) * 6);
		while (j < 6)
			board[i][j++] = 0;
		i++;
	}
	initcolumns(board, vals);
	initrows(board, vals);
	return (board);
}

void		freeboard(int **board)
{
	int	i;

	i = 0;
	while (i < 6)
		free(board[i++]);
	free(board);
}
