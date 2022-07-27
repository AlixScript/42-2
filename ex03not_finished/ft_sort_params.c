/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:15:39 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/22 17:49:15 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putstr(char *str)
{
	int stock;
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < str[i + 1])

			write(1, &str[i], 1);
		else
		{			
			write(1, &str[i], 1);
			write(1, "!", 1);
		}
		//write(1, &str[i], 1);
		i++;
	}
	stock = str[i];
	str[i] = str[i + 1];
	str[i + 1] = stock;
	return (0);
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
