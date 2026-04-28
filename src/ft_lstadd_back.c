/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:33:44 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/28 17:11:11 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || *lst == NULL || new == NULL)
		return ;
	t_list	*current_node;

	current_node = *lst;
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new;
}
