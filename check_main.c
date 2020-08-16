/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datack <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 14:20:14 by datack            #+#    #+#             */
/*   Updated: 2020/08/16 14:20:18 by datack           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_main.h"

int		*checkmainargument(char *arg)
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
	while (arg[i] != '\0')
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
