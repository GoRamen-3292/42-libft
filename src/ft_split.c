/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:42:57 by ktomita           #+#    #+#             */
/*   Updated: 2026/05/04 20:17:12 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_arrays(const char *s, char c);
static char		**store_arrays(const char *s, const char c, char **result,
					const size_t arrays);
static char **free_all(char **result);

char	**ft_split(char const *s, char c)
{
	const size_t	arrays = count_arrays(s, c);
	char			**result;

	result = ft_calloc(arrays + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	return (store_arrays(s, c, result, arrays));
}

static char	**store_arrays(const char *s, const char c, char **result,
		const size_t arrays)
{
	size_t	ri;
	size_t	sj;
	size_t	start;
	size_t	size;

	ri = 0;
	sj = 0;
	while (ri < arrays)
	{
		while (s[sj] == c && s[sj] != '\0')
			sj++;
		start = sj;
		while (s[sj] != c && s[sj] != '\0')
			sj++;
		size = sj - start + 1;
		result[ri] = malloc(sizeof(char) * size);
		if (result[ri] == NULL)
			return (free_all(result));
		ft_strlcpy(result[ri], &s[start], size);
		ri++;
	}
	result[ri] = NULL;
	return (result);
}

static size_t	count_arrays(const char *s, char c)
{
	size_t	i;
	size_t	sep;
	int		cur_sep;
	int		prev_sep;

	i = 0;
	sep = 0;
	prev_sep = TRUE;
	while (s[i] != '\0')
	{
		cur_sep = (s[i] == c);
		if (cur_sep && !prev_sep)
			sep++;
		prev_sep = cur_sep;
		i++;
	}
	if (prev_sep)
		return (sep);
	else
		return (sep + 1);
}

static char **free_all(char **result)
{
	size_t	i;

	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		result[i] = NULL;
	}
	free(result);
	return (NULL);
}
