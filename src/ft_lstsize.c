/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:25:26 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/27 19:51:04 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	t_list	*current_node;
	size_t	size;

	current_node = list;
	size = 0;
	while (list->next != NULL)
	{
		current_node = list->next;
		size++;
	}
	return (size);
}
