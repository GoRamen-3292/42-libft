/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:36:35 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/28 17:50:21 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_node;

	if (lst == NULL || f == NULL)
		return ;
	current_node = lst;
	while (current_node != NULL)
	{
		f(current_node->content);
		current_node = current_node->next;
	}
}
