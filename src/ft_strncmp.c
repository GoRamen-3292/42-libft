/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:35:50 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/30 13:35:56 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const t_byte	*u_s1 = (const t_byte *)s1;
	const t_byte	*u_s2 = (const t_byte *)s2;
	size_t			i;

	if (n <= 0)
		return (0);
	i = 0;
	while (u_s1[i] == u_s2[i] && u_s1[i] != '\0' && i < n - 1)
		i++;
	return (u_s1[i] - u_s2[i]);
}
