/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:47:28 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/08 18:49:38 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swap;
	int	y;

	x = 0;
	while (x < size - 1)
	{
		y = 0;
		while (y < size - 1 - x)
		{
			if (tab[y] > tab[y + 1])
			{
				swap = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = swap;
			}
			y++;
		}
		x++;
	}
}
