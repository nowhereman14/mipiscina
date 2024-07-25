/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvagar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:20:42 by alvagar2          #+#    #+#             */
/*   Updated: 2024/07/21 16:19:31 by alvagar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main()
{
	printf("%d", ft_strcmp("Viva!", "Viva"));
	printf("\n%d", ft_strcmp("Viva", "Viva!"));
	printf("\n%d", ft_strcmp("HellA", "HellB"));
	printf("\n%d", ft_strcmp("Viva", "Viva"));
}*/
