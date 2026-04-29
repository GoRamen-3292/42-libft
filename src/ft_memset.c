/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:14:31 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 16:12:53 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	t_byte	*ptr;
	t_byte	*last_ptr;

	ptr = (t_byte *)s;
	last_ptr = (t_byte *)s + n - 1;
	while (ptr <= last_ptr)
	{
		*ptr = c;
		ptr++;
	}
	return (s);
}
