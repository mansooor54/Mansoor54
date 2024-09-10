/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:29:06 by malmarzo          #+#    #+#             */
/*   Updated: 2024/08/28 12:23:32 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == needle[j] && str[i + j] != '\0')
			j++;
		if (needle[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "My Name is Mansoor
// Abdullah and I start Piscine 42";
// 	char	needle[] = "I";

// 	printf("%s", ft_strstr(str, needle));
// }
