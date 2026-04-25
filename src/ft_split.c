/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:42:57 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/25 16:48:31 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_arrays(const char *s, char c);

char	**ft_split(const char *s, char c)
{
	const size_t	arrays = count_arrays(s, c);
	char			**result;
	size_t			ri;
	size_t			sj;

	result = malloc(sizeof(char *) * arrays);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, sizeof(char *) * arrays);
	ri = 0;

	while (ri < arrays)
	{
		while (s[sj] == c)
		{
			sj++;
			
		}
		ri++;
	}
}

static size_t	count_arrays(const char *s, char c)
{
	size_t	i;
	size_t	sep;

	i = 0;
	sep = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			sep++;
		i++;
	}
	return (sep + 1);
}