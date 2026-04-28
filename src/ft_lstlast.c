/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:28:47 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/28 16:21:25 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	t_list	*current_node;

	current_node = lst;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	return (current_node);
}
