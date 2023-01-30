/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:37:15 by tpiras            #+#    #+#             */
/*   Updated: 2023/01/30 15:54:09 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

int	ft_counter(char const *s, char c)
{
	int		i;
	int		count;
	char	*trim;

	count = 0;
	i = 0;
	trim = ft_strtrim(s, &c);
	while (trim[i] != '\0')
	{
		if (trim[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	ft_strcounter(char const *s, char c, int j)
{
	int			i;
	char		*trim;

	trim = ft_strtrim(s, &c);
	i = j;
	while (s[i] != '\0')
	{
		if (trim[i] == c)
			return (i - j);
		i++;
	}
	if (trim[i] == '\0')
		return (i - j);
	return (0);
}

char	*ft_subsent(char const *s, int len, int j, char c)
{
	char	*res;
	int		i;
	char	*trim;

	trim = ft_strtrim(s, &c);
	i = 0;
	res = (char *)malloc(len * sizeof(char));
	while (trim[j] != '\0' && i < len)
	{
		if (trim[j] == 32 || trim[j] == '\t' || trim[j] == '\n')
		{
			if (c == 32 || c == '\t' || c == '\n')
				j++;
		}
		((char *)res)[i] = trim[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			len;
	int			nrow;
	static int	j;
	char		**matrix;

	i = 0;
	j = 0;
	nrow = ft_counter(s, c);
	matrix = (char **)malloc((nrow + 2) * sizeof (char *));
	if (matrix == NULL)
		return (NULL);
	while (i < nrow + 2)
	{
		len = ft_strcounter(s, c, j);
		matrix[i] = (char *)malloc(len * sizeof (char *));
		matrix[i] = ft_subsent(s, len, j, c);
		i++;
		j += len + 1;
	}
	matrix[nrow + 1] = NULL;
	return (matrix);
}
