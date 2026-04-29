/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:10:10 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 11:37:43 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c_s1 = (const unsigned char *)s1;
	const unsigned char	*c_s2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	while (c_s1[i] == c_s2[i] && i < n)
		i++;
	return (c_s1[i] - c_s2[i]);
}
