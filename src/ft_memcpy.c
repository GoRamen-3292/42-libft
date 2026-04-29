/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:04:59 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 16:05:06 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const t_byte	*c_src = src;
	const t_byte	*last = dest + n - 1;
	t_byte			*c_dest;

	c_dest = dest;
	while (c_dest <= last)
	{
		*c_dest = *c_src;
		c_src++;
		c_dest++;
	}
	return (dest);
}
