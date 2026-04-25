/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:50:35 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/25 14:48:32 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const size_t	s1_size = ft_strlen(s1);
	char			*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(s1_size);
	if (ptr == NULL)
		return (NULL);
	while (i < s1_size)
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}
