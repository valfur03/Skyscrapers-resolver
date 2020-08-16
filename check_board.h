/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_board.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 14:19:24 by datack            #+#    #+#             */
/*   Updated: 2020/08/16 14:19:27 by datack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_BOARD_H
# define CHECK_BOARD_H
# include <stdlib.h>
# include "ft_put.h"

int		checkleft(int *row);
int		checkright(int *row);
int		checkrow(int *row);
int		issafe(int **board, int val, int row, int col);
int		checkcolumn(int **board, int column);
#endif
