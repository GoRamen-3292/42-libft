/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:57:53 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/25 11:38:36 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calc_len(const char *s, unsigned int start, size_t max_len);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	const size_t	res_len = calc_len(s, start, len);
	char			*result;
	size_t			i;

	result = malloc(sizeof(char) * (res_len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < res_len)
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static size_t	calc_len(const char *s, unsigned int start, size_t max_len)
{
	const size_t	s_len = ft_strlen(s);
	if (s_len - start < max_len)
		return (s_len - start);
	else
		return (max_len);
}