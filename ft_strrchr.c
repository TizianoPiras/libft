/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:32:51 by tpiras            #+#    #+#             */
/*   Updated: 2023/01/31 12:52:28 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	itoc;
	int		i;

	i = 0;
	itoc = c;
	while (s[i] != '\0')
		i++;
	while (s[i] != itoc && s[i] != s[0])
		i--;
	if (s[i] == s[0] && itoc != s[0])
		return (0);
	return ((char *) s + i);
}
