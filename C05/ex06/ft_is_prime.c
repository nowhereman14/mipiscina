/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:46:25 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/24 18:26:03 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		else if (nb % i != 0)
			i++;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	int	n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%d\n", ft_is_prime(n));
}*/
