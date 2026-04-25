/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:42:57 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/25 20:23:25 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO: DELETE THIS
#include <stdio.h>

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
	size_t	chars;
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
		chars = sj - start;
		sj = start;
		result[ri] = malloc(sizeof(char) * chars + 1);
		// TODO: NULLの処理を書く
		while (chars > 0)
		{
			result[ri][sj - start] = s[sj];
			chars--;
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

// int	main(void)
// {
// 	const char	**result = (const char **) ft_split("This is 42!", ' ');
// 	size_t	i;

// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("[%zu] %s\n", i, result[i]);
// 		i++;
// 	}
// }