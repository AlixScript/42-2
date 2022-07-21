/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:34:47 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/21 09:37:00 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	int i;
	int result;

	i = 2;
	result = 1;
	if (nb <= 0 || nb > 12)
		return 0;
	if (i <= nb)
		ft_recursive_factorial(result = i * result);
		//i++;
	/*
	while (i <= nb)
	{
		result = i * result;
		i++;
	}*/
	return (result);
}

int main()
{
	int nb = 5;
	printf("%d", ft_recursive_factorial(nb));
}
