/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:17:55 by tpiras            #+#    #+#             */
/*   Updated: 2023/01/30 15:38:05 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*s;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0' && needle[j] != '\0' && i <= len)
	{
		if (haystack[i + j] == needle[j])
		{
			s = ((char *)&haystack[i + j]);
			while (haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return (s);
			}
		}
		i++;
	}
	return (NULL);
}
