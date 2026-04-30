/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:03:38 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/30 13:32:15 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*result;

	i = 0;
	result = NULL;
	c &= 0xff;
	while (TRUE)
	{
		if (str[i] == c)
			result = (char *)&str[i];
		if (str[i] == '\0')
			return (result);
		i++;
	}
}
