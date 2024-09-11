/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_tariq.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:18:00 by malmarzo          #+#    #+#             */
/*   Updated: 2024/09/11 11:05:20 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_strs(char *s, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && ft_check_sep(s[i], charset))
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && !ft_check_sep(s[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *s, char *charset)
{
	int	i;

	i = 0;
	while (s[i] && !ft_check_sep(s[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *s, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	len_word = ft_strlen_sep(s, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len_word)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * (ft_count_strs(str, charset) + 1));
	if (!strs)
		return (NULL);
	while (*str != '\0')
	{
		while (*str != '\0' && ft_check_sep(*str, charset))
			str++;
		if (*str != '\0')
		{
			strs[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !ft_check_sep(*str, charset))
			str++;
	}
	strs[i] = 0;
	return (strs);
}
