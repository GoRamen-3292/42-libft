/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:32:57 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 15:57:03 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	t_byte	*result;

	total_size = nmemb * size;
	if (total_size == 0)
		total_size = 1;
	result = malloc(1);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, total_size);
	return (result);
}
