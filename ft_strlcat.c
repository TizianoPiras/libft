/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:11:06 by tpiras            #+#    #+#             */
/*   Updated: 2023/01/30 17:06:44 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	size_d;
	size_t	size_s;
	size_t	len;

	i = 0;
	size_d = ft_strlen(dst);
	size_s = ft_strlen((char *)src);
	len = destsize - size_d - 1;
	if (destsize <= size_d + size_s)
		return ((size_t)(size_d + size_s));
	while (i <= len && dst && src)
	{
		dst[size_d] = src[i];
		size_d++;
		i++;
	}
	dst[size_d] = '\0';
	return ((size_t)(size_d - i));
}
