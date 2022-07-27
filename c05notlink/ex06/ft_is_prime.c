/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:42:55 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/25 15:18:19 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int result;

	i = 2;
	while (i < nb)
	{
		result = i * i;

		//if (result == nb)
		printf("result = %d, i = %d\n", result, i);
		i++;
	}
	return (0);	
}

int main()
{
	printf("%d", ft_is_prime(7));
}
