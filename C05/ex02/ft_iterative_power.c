/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:27:06 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/25 19:19:48 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_iterative_power(0, 0));
	printf("%i\n", ft_iterative_power(797, -1));
	printf("%i\n", ft_iterative_power(33, 0));
	printf("%i\n", ft_iterative_power(10, 4));
	printf("%i\n", ft_iterative_power(1, 3));
        printf("%i\n", ft_iterative_power(15, 1));
        printf("%i\n", ft_iterative_power(39, 0));
        printf("%i\n", ft_iterative_power(49, 5));
	printf("%i\n", ft_iterative_power(18, 2));
        printf("%i\n", ft_iterative_power(0, 2));
}*/
