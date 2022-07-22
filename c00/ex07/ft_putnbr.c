/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:19:38 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/20 18:00:50 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nb_convert;

	if (nb < 0)
	{
		ft_putchar('-');
		nb_convert = nb * -1;
	}
	else
		nb_convert = nb;
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb_convert + 48);
	else
	{
		ft_putnbr(nb_convert / 10);
		ft_putchar(nb_convert % 10 + 48);
	}
}
