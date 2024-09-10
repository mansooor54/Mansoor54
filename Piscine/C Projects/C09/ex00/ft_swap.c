/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 06:54:29 by malmarzo          #+#    #+#             */
/*   Updated: 2024/09/10 06:57:35 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(char *a, char *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}