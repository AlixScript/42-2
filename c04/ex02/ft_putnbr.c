/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:18:26 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/20 13:46:32 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nb_convert;

	if (nb < 0)
	{
		ft_putstr('-');
		nb_convert = nb * -1;
	}
	else
		nb_convert = nb;
	if (nb >= 0 && nb <= 9)
		ft_putstr(nb + 48);
	else
	{
		ft_putnbr(nb_convert / 10);
		ft_putstr(nb_convert % 10 + 48);
	}
}
