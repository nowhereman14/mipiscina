/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:26:59 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/24 18:21:53 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index <= 1 && index >= 0)
		return (index);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;
	int	z;
	int	w;

	x = 5;
	y = 0;
	z = 20;
	w = -5;
	printf("%d\n", ft_fibonacci(x));
	printf("%d\n", ft_fibonacci(y));
	printf("%d\n", ft_fibonacci(z));
	printf("%d\n", ft_fibonacci(w));
}*/
