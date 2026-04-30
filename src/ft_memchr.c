/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:00:31 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/30 14:23:25 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	const t_byte	*buf = (const t_byte*)s;
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (buf[i] == (t_byte)c)
			return ((char *)&buf[i]);
		i++;
	}
	return (NULL);
}
