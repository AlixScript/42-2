/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:42:55 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/28 16:41:13 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	result;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb && i < 46341)
	{
		result = nb % i;
		if (result == 0)
			return (0);
		i++;
	}
	return (1);
}
