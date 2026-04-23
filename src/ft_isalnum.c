/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:26:02 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/23 15:05:06 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks whether the given char is alphanumeric
 */
int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c
			&& c <= 'Z'))
		return (C_CLASS_MATCHED);
	else
		return (C_CLASS_UNMATCHED);
}
