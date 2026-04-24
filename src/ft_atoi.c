/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:39:39 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/24 15:46:59 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *src)
{
	size_t			i;
	unsigned int	n;
	char			sign;

	n = 0;
	sign = 1;
	while (src[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while ('0' <= src[i] && src[i] <= '9')
	{
		if ()
		{
			return (0);
		}
		else if (n > INT_MIN / 10 || (n == INT_MIN / 10 && n > INT_MIN
						% 10))
			return (0);
		n = n * 10 + src[i] - '0';
	}

	return ();
}