/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:11:06 by tpiras            #+#    #+#             */
/*   Updated: 2023/02/01 13:49:10 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	size_d;
	size_t	size_s;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	size_d = ft_strlen(dst);
	size_s = ft_strlen(src);
	if (size_d > dstsize || dstsize == 0)
		return (dstsize + size_s);
	len = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && (len + 1) < dstsize)
	{
		dst[len] = src[i];
		i++;
		len++;
	}
	dst[len] = '\0';
	return (size_d + size_s);
}
