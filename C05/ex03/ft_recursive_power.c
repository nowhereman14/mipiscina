/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:12 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/25 19:21:49 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, (power - 1)));
}
/*#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(797, -1));
	printf("%i\n", ft_recursive_power(33, 0));
	printf("%i\n", ft_recursive_power(10, 4));
	printf("%i\n", ft_recursive_power(1, 3));
        printf("%i\n", ft_recursive_power(15, 1));
        printf("%i\n", ft_recursive_power(39, 0));
        printf("%i\n", ft_recursive_power(49, 5));
	printf("%i\n", ft_recursive_power(18, 2));
        printf("%i\n", ft_recursive_power(0, 2));
}*/
