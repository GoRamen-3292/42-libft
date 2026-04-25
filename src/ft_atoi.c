/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:39:39 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/25 13:05:39 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(const char c);

int	ft_atoi(const char *src)
{
	long	n;
	char	sign;
	size_t	i;

	i = 0;
	n = 0;
	sign = 1;
	while (isspace(src[i]))
		i++;
	if (src[i] == '-' || src[i] == '+')
	{
		if (src[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= src[i] && src[i] <= '9')
	{
		n = n * 10 + src[i] - '0';
		i++;
	}
	return (n * (long)sign);
}

static int	isspace(const char c)
{
	if (('\t' <= c && c <= '\r') || c == ' ')
		return (TRUE);
	else
		return (FALSE);
}
