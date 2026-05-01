/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:25:26 by ktomita           #+#    #+#             */
/*   Updated: 2026/05/01 17:04:05 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current_node;
	size_t	size;

	if (lst == NULL)
		return (0);
	current_node = lst;
	size = 1;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
		size++;
	}
	return (size);
}
