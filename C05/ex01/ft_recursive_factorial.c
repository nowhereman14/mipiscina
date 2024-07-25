/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:34:32 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/24 18:11:50 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 7;
	printf("%d\n", ft_recursive_factorial(x));
	printf("%d\n", ft_recursive_factorial(y));
}*/
