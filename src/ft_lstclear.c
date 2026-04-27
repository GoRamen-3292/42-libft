/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:34:21 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/27 22:18:10 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	current_node = *lst;
	while (current_node->next != NULL)
	{
		next_node = current_node->next;
		ft_lstdelone(*lst, del);
		current_node = next_node;
	}
	ft_lstdelone(*lst, del);
}
