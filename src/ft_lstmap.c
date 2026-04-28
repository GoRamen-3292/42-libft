/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:37:36 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/28 16:21:53 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*src_current_node;
	t_list	*new_current_node;
	t_list	*new_prev_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	src_current_node = lst;
	new_list = ft_lstnew(lst->content);
	new_list->content = f(new_list->content);
	new_current_node = new_list;
	while (src_current_node != NULL)
	{
		new_prev_node = new_current_node;
		src_current_node = src_current_node->next;
		new_current_node = malloc(sizeof(t_list));
		if (new_current_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_prev_node->next = new_current_node;
		new_current_node->content = f(src_current_node->content);
		new_current_node->next = NULL;
	}
	return (new_list);
}
