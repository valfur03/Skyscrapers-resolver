/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solveur.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 13:11:41 by datack            #+#    #+#             */
/*   Updated: 2020/08/16 12:06:34 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVEUR_H
# define SOLVEUR_H
# include "check_board.h"
# include "check_main.h"
# include "board.h"
# include "ft_put.h"

int		solveur(int **board, int row, int col);
void	print_board(int **board);
int		solveur_check_row(int **board, int row, int col);
int		solveur_check_column(int **board, int row, int col);
int		backtrack(int **board, int row, int col, int val);
#endif
