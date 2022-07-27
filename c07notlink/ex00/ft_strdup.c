/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:06:44 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/27 07:41:08 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	dest = malloc(sizeof(src) * len + 1);
	if (dest == NULL)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	free(dest);
	return (dest);
}
