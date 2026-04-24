/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:10:10 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/24 12:18:11 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*c_s1 = (char *)s1;
	const char	*c_s2 = (char *)s2;
	size_t i;

	i = 0;
	while (c_s1[i] == c_s2[i] && i < n)
		i++;
	return (c_s1[i] - c_s2[i]);
}