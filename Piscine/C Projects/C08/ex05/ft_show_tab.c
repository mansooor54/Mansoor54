/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:18:09 by malmarzo          #+#    #+#             */
/*   Updated: 2024/09/09 13:32:54 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;
	struct s_stock_str	*created;

	ac = ac + 0;
	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!(array))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		created = (t_stock_str *)malloc(sizeof(struct s_stock_str));
		if (!created)
			return (NULL);
		array[i] = *created;
		array[i].size = ft_str_length(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i] = (struct s_stock_str){0, 0, 0};
	return (array);
}

void	ft_put_string(char *str, int number, int flag)
{
	if (flag)
	{
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
	}
	else
	{
		if (number > 9)
			ft_put_string(" ", number / 10, 0);
		write(1, &"0123456789"[number % 10], 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_put_string(par[i].str, 12, 1);
		ft_put_string("\n", 12, 1);
		ft_put_string(" ", par[i].size, 0);
		ft_put_string("\n", 12, 1);
		ft_put_string(par[i].copy, 12, 1);
		ft_put_string("\n", 12, 1);
		i++;
	}
}

// int	main(void)
// {
// 	int					i;
// 	int					ac;
// 	char				**av;
// 	struct s_stock_str	*structs;

// 	ac = 10;
// 	av = (char **)malloc((ac + 1) * sizeof(char *));
// 	i = 0;
// 	while (i < ac)
// 	{
// 		av[i] = (char *)malloc((2 + 1) * sizeof(char));
// 		av[i][0] = 'x';
// 		av[i][1] = (char)(i + 'a');
// 		av[i][2] = '\0';
// 		i++;
// 	}
// 	structs = ft_strs_to_tab(ac, av);
// 	i = 0;
// 	while (i < ac)
// 	{
// 		printf("%d\n", i);
// 		printf("\t| original : $%s$ @ %p\n", structs[i].str, structs[i].str);
// 		printf("\t|   copied : $%s$ @ %p\n", structs[i].copy, structs[i].copy);
// 		printf("\t|     size : %d\n", structs[i].size);
// 		i++;
// 	}
// 	ft_show_tab(structs);
// }
