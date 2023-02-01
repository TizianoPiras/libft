/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:57:46 by tpiras            #+#    #+#             */
/*   Updated: 2023/02/01 14:09:04 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*alloc;

	alloc = (char *)malloc(count * size);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, (count * size));
	return (alloc);
}
