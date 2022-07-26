/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:38:55 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/28 16:39:39 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 0;
	while (i < 46341 && nb > 0)
	{
		result = i * i;
		if (result == nb)
			return (i);
		if (result > nb)
			return (0);
		i++;
	}
	return (0);
}
