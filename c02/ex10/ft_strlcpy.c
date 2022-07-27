/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 04:22:31 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/27 05:21:45 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	size = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	size = i;
	dest[i] = '\0';
	return (size);
}
