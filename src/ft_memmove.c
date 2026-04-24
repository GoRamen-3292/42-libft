/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:40:06 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/24 10:08:07 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	const char	*c_src;
	char		*last;
	char		*c_dest;

	c_src = src;
	last = dest + n - 1;
	c_dest = dest;
	if (c_src < c_dest)
	{
		while (c_dest <= last)
		{
			*c_dest = *c_src;
			c_src--;
			c_dest--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
