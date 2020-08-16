/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 13:09:49 by datack            #+#    #+#             */
/*   Updated: 2020/08/16 12:05:23 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solveur.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	**board;
	int	*vals;

	if (argc != 2)
	{
		error();
		return (0);
	}
	vals = checkmainargument(argv[1]);
	if (vals == NULL)
		return (0);
	board = initializeboard(vals);
	if (board == NULL || !solveur(board, 1, 1))
	{
		error();
		return (0);
	}
	print_board(board);
	freeboard(board);
	free(vals);
	return (0);
}
