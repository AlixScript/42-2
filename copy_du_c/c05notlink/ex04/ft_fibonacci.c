/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:38:02 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/21 18:11:04 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	nb1;
	int nb2;
	int i;
	int result;

	nb1 = 0;
	nb2 = 1;
	i = 0;
	if (index < 0)
		return (-1);
	while (i <= index)
	{
		result = nb1 + nb2;
		nb1 = nb2;
		nb2 = nb1 + nb2;
		result = nb1 + nb2;
		printf("%d = %d + %d\n", result, nb1, nb2);
		//nb1++;
		//nb2++;
		i++;
	}
	
	return (index);
}

int main()
{
	int index = 5;
	printf("%d", ft_fibonacci(index));
}
