/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:14:31 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/23 13:43:32 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	char	*ptr = (char *) s;
	char	*last_ptr = (char *) s + n;

	while (ptr <= last_ptr)
	{
		*ptr = c;
		ptr++;
	}
}