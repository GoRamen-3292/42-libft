/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:35:50 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 11:37:32 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*u_s1 = (const unsigned char *)s1;
	const unsigned char	*u_s2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	while (u_s1[i] == u_s2[i] && u_s1[i] != '\0' && i < n)
		i++;
	return (u_s1[i] - u_s2[i]);
}
