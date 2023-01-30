/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:36:29 by tpiras            #+#    #+#             */
/*   Updated: 2023/01/18 15:08:46 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	while (src && dst && i < destsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)(dst));
}
