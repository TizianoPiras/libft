/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:59:27 by tpiras            #+#    #+#             */
/*   Updated: 2023/02/01 14:12:49 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_final;
	int		size_s1;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	s_final = (char *)malloc((size_s1 + ft_strlen(s2) + 1) * sizeof(char));
	if (!s_final)
		return (NULL);
	i = 0;
	while (i < size_s1)
	{
		s_final[i] = s1[i];
		i++;
	}
	size_s1 = 0;
	while (size_s1 < ft_strlen(s2))
	{
		s_final[i] = s2[size_s1];
		i++;
		size_s1++;
	}
	s_final[i] = '\0';
	return (s_final);
}
