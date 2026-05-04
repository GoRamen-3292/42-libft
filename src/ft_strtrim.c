/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:52:31 by ktomita           #+#    #+#             */
/*   Updated: 2026/05/04 22:57:16 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start_point(const char *s1, const char *set);
static size_t	get_end_point(const char *s1, const char *set);
static char		*empty_str(void);

char	*ft_strtrim(char const *s1, char const *set)
{
	const size_t	start = get_start_point(s1, set);
	const size_t	end = get_end_point(s1, set);
	const size_t	size = end - start + 2;
	char			*result;

	if (s1[0] == '\0' || start > end)
		return (empty_str());
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
	while (i > 0 && ft_strchr(set, s1[i]) != NULL)
		i--;
	return (i);
}

static char	*empty_str(void)
{
	char *const	result = malloc(sizeof(char));

	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	return (result);
}
