/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:25:26 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/30 20:05:31 by ktomita          ###   ########.fr       */
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
		current_node = lst->next;
		size++;
	}
	return (size);
}
