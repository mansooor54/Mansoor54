/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:48:30 by malmarzo          #+#    #+#             */
/*   Updated: 2024/08/31 16:03:19 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_strncmp("Mansoor", "Mansoor", 7));
	printf("\n%d", ft_strncmp("Mansoor", "Man", 3));
	printf("\n%d", ft_strncmp("Man", "Mansoor", 4));
	printf("\n%d", ft_strncmp("ManSoor", "Mansoor", 7));
}
