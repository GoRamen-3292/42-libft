/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:14:31 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/23 15:18:57 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, t_size_t n)
{
	char	*ptr;
	char	*last_ptr;

	ptr = (char *)s;
	last_ptr = (char *)s + n - 1;
	while (ptr <= last_ptr)
	{
		*ptr = c;
		ptr++;
	}
	return (s);
}
