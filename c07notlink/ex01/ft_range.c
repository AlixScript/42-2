/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:48:14 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/27 09:03:07 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	char *src = "text";
	char *copy = NULL;
	int i;
	int len;
	//limite de variables
	
	i = 0;
	while(src[i])
		i++;
	len = i;
	copy = malloc(sizeof());
}

int main()
{
	ft_range(6, 10);
	return (0);
}
