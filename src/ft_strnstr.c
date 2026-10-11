/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:02:12 by ktomita           #+#    #+#             */
/*   Updated: 2026/05/04 22:32:36 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	start;
	size_t	i;
	char	*result;

	start = 0;
	i = 0;
	result = NULL;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (start < len && big[start] != '\0')
	{
		while (big[start + i] == little[i] && big[start + i] != '\0' && start
			+ i < len && little[i] != '\0')
			i++;
		if (little[i] == '\0')
			return ((char *)&big[start]);
		start++;
	}
	return (NULL);
}
