/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:25:26 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 12:28:42 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current_node;
	size_t	size;

	current_node = lst;
	size = 0;
	while (lst->next != NULL)
	{
		current_node = lst->next;
		size++;
	}
	return (size);
}
