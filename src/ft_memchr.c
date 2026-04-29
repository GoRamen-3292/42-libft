/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:00:31 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 16:52:27 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	t_byte	*buf;
	size_t	i;

	buf = (t_byte *)s;
	i = 0;
	while (i < n)
	{
		if (buf[i] == c)
			return ((char *)&buf[i]);
		i++;
	}
	return (NULL);
}
