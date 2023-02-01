/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:51:13 by tpiras            #+#    #+#             */
/*   Updated: 2023/02/01 13:22:25 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char const *str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = (unsigned int) len;
	if (ft_strlen(s) <= (int)len)
		p = (char *) malloc(ft_strlen(s) + 1);
	else
		p = (char *)malloc(j + 1);
	if (!p)
		return (NULL);
	if (!((unsigned int) ft_strlen(s) < start))
	{
		while (s[start] != '\0' && i < j)
		{
			p[i] = s[start];
			i++;
			start++;
		}
	}
	p[i] = '\0';
	return (p);
}
