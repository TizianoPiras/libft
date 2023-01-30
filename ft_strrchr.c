/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:32:51 by tpiras            #+#    #+#             */
/*   Updated: 2023/01/30 15:26:33 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	while (s[len - 1] != '\0')
	{
		if (s[len] == c)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
