/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:51:53 by tpiras            #+#    #+#             */
/*   Updated: 2023/01/31 15:51:42 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*allocate;

	i = 0;
	while (src[i] != '\0')
		i++;
	allocate = (char *)malloc((i + 1) * sizeof (char));
	if (!allocate)
		return (NULL);
	while (!src)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		allocate[i] = src[i];
		i++;
	}
	allocate[i] = '\0';
	return (allocate);
}
