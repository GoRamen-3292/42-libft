/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:50:35 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 09:59:16 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	const size_t	s_size = ft_strlen(s);
	char			*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(sizeof(char) * (s_size + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < s_size)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
