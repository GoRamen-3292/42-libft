/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:10:10 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 18:12:15 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const t_byte	*c_s1 = (const t_byte *)s1;
	const t_byte	*c_s2 = (const t_byte *)s2;
	size_t			i;

	i = 0;
	if (n <= 0)
		return (0);
	while (c_s1[i] == c_s2[i] && i < n)
		i++;
	return (c_s1[i] - c_s2[i]);
}
