/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:35:59 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/21 14:48:51 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	if (power < 0 || nb < 0)
		return (0);
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	while (i <= power)
	{
		if (i == 1)
		{
			result = nb;
			i++;
		}
		while (i > 1 && i <= power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
	return (0);
}
