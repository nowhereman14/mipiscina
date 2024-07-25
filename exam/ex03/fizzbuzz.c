/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:09:52 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/25 20:35:44 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9)
		ft_putchar(nb + 48);
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	fizzbuzz(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0)
			write(1, "fizz", 5);
		if (nb % 5 == 0)
			write(1, "buzz", 5);
		else if (nb % 3 != 0 && nb % 5 != 0)
			ft_putnbr(nb);
		ft_putchar('\n');
		nb++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}
