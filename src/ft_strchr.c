/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:03:38 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/30 11:34:15 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	t_byte const	*b_str = (t_byte const *)str;
	size_t			i;

	i = 0;
	c &= 0xff;
	while (TRUE)
	{
		if (b_str[i] == c)
			return ((char *)&b_str[i]);
		if (b_str[i] == '\0')
			return (NULL);
		i++;
	}
}
