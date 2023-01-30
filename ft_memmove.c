/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:41:11 by tpiras            #+#    #+#             */
/*   Updated: 2023/01/30 15:16:08 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*fine;
	unsigned char	*inizio;
	size_t			i;

	fine = dst;
	inizio = (unsigned char *)src;
	i = 0;
	if (len == 0 || (!fine && !inizio))
		return ((void *)(dst));
	if (fine > inizio)
	{
		while (len--)
			fine[len] = inizio[len];
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)fine)[i] = ((char *)inizio)[i];
			i++;
		}
	}
	return ((void *)(fine));
}
