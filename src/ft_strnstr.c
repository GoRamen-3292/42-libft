/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:02:12 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/24 13:27:40 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	start;
	size_t	i;

	start = 0;
	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (start < len)
	{
		while (big[start + i] == little[i] && little[i] != '\0')
			i++;
		if (little[i] == '\0')
			return ((char *)&big[start]);
		start++;
	}
	return (NULL);
}
