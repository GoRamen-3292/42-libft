/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:42:57 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/26 15:16:46 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_arrays(const char *s, char c);
static char		**store_arrays(const char *s, const char c, char **result,
					const size_t arrays);

char	**ft_split(const char *s, char c)
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

	ri = 0;
	sj = 0;
	while (ri < arrays)
	{
		while (s[sj] == c && s[sj] != '\0')
			sj++;
		start = sj;
		while (s[sj] != c && s[sj] != '\0')
			sj++;
		result[ri] = malloc(sizeof(char) * sj - start + 1);
		sj = start;
		while (s[sj] != c && s[sj] != '\0')
		{
			result[ri][sj - start] = s[sj];
			sj++;
		}
		result[ri][sj - start] = '\0';
		ri++;
	}
	result[ri] = NULL;
	return (result);
}

static size_t	count_arrays(const char *s, char c)
{
	size_t	i;
	size_t	sep;
	int		prev_sep;

	i = 0;
	sep = 0;
	prev_sep = TRUE;
	while (s[i] != '\0')
	{
		if (s[i] == c && !prev_sep)
		{
			sep++;
			prev_sep = TRUE;
		}
		else if (s[i] != c)
			prev_sep = FALSE;
		else
			prev_sep = TRUE;
		i++;
	}
	if (prev_sep)
		return (sep);
	else
		return (sep + 1);
}
