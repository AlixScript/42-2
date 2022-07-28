/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:37:03 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/28 16:38:08 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power > 0)
		result = nb * ft_recursive_power(nb, power -1);
	return (result);
}
