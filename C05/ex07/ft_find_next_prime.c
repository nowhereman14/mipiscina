/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:34:33 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/23 19:44:38 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int n)
{
	int	i;

	i = 2;
	if (n == 0 || n == 1)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		else if (n % i != 0)
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	x;

	x = nb;
	while (ft_is_prime(x) == 0)
		x++;
	return (x);
}

int	main(void)
{
	int	n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%d\n", ft_find_next_prime(n));
}
