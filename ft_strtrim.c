/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:21:13 by tpiras            #+#    #+#             */
/*   Updated: 2023/02/01 14:18:43 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	ft_counter(char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == (char)set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char				*s_trim;
	unsigned int		size_s1;
	unsigned int		i;
	unsigned int		j;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[i] != '\0')
	{
		while (s1[i] != '\0' && (ft_counter(s1[i], set) == 1))
			i++;
		size_s1 = ((unsigned int)ft_strlen(s1)) - 1;
		while ((ft_counter(s1[size_s1], set) == 1) && i < size_s1)
			size_s1--;
		j = (size_s1 - i) + 1;
	}
	else
		j = 1;
	s_trim = ft_substr(s1, i, j);
	if (!s_trim)
		return (NULL);
	return (s_trim);
}
