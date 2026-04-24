/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:40:06 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/24 19:06:38 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	char		*c_src;
	char		*c_dest;
	size_t		i;

	if (src < dest)
	{
		i = 0;
		c_src = (char *) src + n - 1;
		c_dest = dest + n - 1;
		while ((void *) c_dest >= dest)
		{
			*c_dest = *c_src;
			c_dest--;
			c_src--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
