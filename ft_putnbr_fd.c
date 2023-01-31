/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:00:37 by tpiras            #+#    #+#             */
/*   Updated: 2023/01/31 11:53:14 by tpiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

int	ft_count(long int n)
{
	long int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*i;

	if (fd != -1)
	{
		i = ft_itoa(n);
		write (fd, i, ft_count(n));
	}
}
