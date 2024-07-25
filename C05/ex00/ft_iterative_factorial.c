/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:02:58 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/24 18:10:22 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb --;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_iterative_factorial(5));
	printf("%i\n", ft_iterative_factorial(10));
}*/
