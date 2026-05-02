/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:32:57 by ktomita           #+#    #+#             */
/*   Updated: 2026/05/02 13:17:21 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	const size_t	total_size = nmemb * size;
	t_byte			*result;

	if (SIZE_MAX / size > nmemb)
		return (NULL);
	if (total_size <= 0)
		return (malloc(0));
	result = malloc(total_size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, total_size);
	return (result);
}
