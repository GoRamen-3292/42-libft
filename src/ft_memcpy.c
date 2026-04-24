/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:04:59 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/24 10:06:42 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, t_size_t n)
{
	const char	*c_src = src;
	const char	*last = dest + n - 1;
	char	 	*c_dest = dest;

	while (c_dest <= last)
	{
		*c_dest = *c_src;
		c_src++;
		c_dest++;
	}
	return (dest);
}
