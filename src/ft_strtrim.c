/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:52:31 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/30 19:12:51 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start_point(const char *s1, const char *set);
static size_t	get_end_point(const char *s1, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	const size_t	start = get_start_point(s1, set);
	const size_t	end = get_end_point(s1, set);
	const size_t	size = end - start + 2;
	char			*result;

	if (size <= 0)
		return (NULL);
	result = malloc(sizeof(char) * (size));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, &s1[start], size);
	return (result);
}

static size_t	get_start_point(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

static size_t	get_end_point(const char *s1, const char *set)
{
	const size_t	s1_len = ft_strlen(s1);
	size_t			i;

	i = s1_len;
	while (i > 0 && ft_strrchr(set, s1[i]) != NULL)
		i--;
	return (i);
}
