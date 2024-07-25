/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:47:10 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/22 15:33:53 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double	absolute_value(double n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

double	ft_sqrt (int nb)
{
	double	margin;
	double	estimation;

	margin = 0.000001;
	estimation = 1.0;
	while (absolute_value((estimation * estimation) - nb) >= margin)
	{
		double	ratio;
		double	arth_mean;

		ratio = nb / estimation;
		arth_mean  = (ratio + estimation) / 2.0;
		estimation = arth_mean;
	}
	return (estimation);
}

int	main()
{
	int	n;

	printf("Ingresa un número: ");
	scanf("%d", &n);
	printf("%f\n", ft_sqrt(n));
	return (0);
}
