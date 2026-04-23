/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:40:06 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/23 17:46:05 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	const char	*c_src = src;
	const char	*last = dest + n - 1;
	char		*c_dest;

	c_dest = dest;
	while (c_dest <= last)
	{
		*c_dest = *c_src++;
		c_dest++;
	}
	return (dest);
}
