/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:42:54 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 19:04:20 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t	src_size = ft_strlen(src);
	size_t			i;
	size_t			offset;

	i = 0;
    // sizeが0の時...
	while (dst[i] != '\0' && i + 1 < size)
		i++;
	offset = i;
	while (src[i - offset] != '\0' && i + 1 < size)
	{
		dst[i] = src[i - offset];
		i++;
	}
	if (size >= 1)
		dst[i] = '\0';
	return (src_size + offset);
}
