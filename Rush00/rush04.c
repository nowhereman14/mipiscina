/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:56:40 by nmorgado          #+#    #+#             */
/*   Updated: 2024/07/06 19:44:38 by nmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	inicio(int x)
{
	int	cx;

	cx = 1;
	while (cx <= x)
	{
		if (cx == 1)
		{
			ft_putchar('A');
		}
		else if (cx == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		cx++;
	}
	ft_putchar('\n');
}

void	final(int x)
{
	int	cx;

	cx = 1;
	while (cx <= x)
	{
		if (cx == 1)
		{
			ft_putchar('C');
		}
		else if (cx == x)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		cx++;
	}
	ft_putchar('\n');
}

void	intermedio(int x, int y)
{
	int	cy;
	int	cx;

	cx = 1;
	cy = 1;
	while (cy <= y)
	{
		while (cx <= x)
		{
			if (cx == 1 || cx == x)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			cx++;
		}
		cx = 1;
		cy++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		inicio(x);
		if (y != 1)
		{
			intermedio(x, y - 2);
			final(x);
		}
	}
}
