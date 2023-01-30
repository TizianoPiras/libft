/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:07:58 by tpiras            #+#    #+#             */
/*   Updated: 2023/01/30 17:05:54 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof (char));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
