/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:52:31 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 10:04:47 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	matched_chs;
	size_t	i;
	size_t	rj;
	char	*result;

	i = 0;
	matched_chs = 0;
	while (s1[i] != '\0')
		if (ft_strrchr(set, s1[i++]) != NULL)
			matched_chs++;
	s1_len = i;
	result = malloc(sizeof(char) * (s1_len - matched_chs + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	rj = 0;
	while (s1[i] != '\0')
	{
		if (ft_strrchr(set, s1[i]) == NULL)
			result[rj++] = s1[i];
		i++;
	}
	result[rj] = '\0';
	return (result);
}
