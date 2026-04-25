/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:40:55 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/25 11:17:26 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	atoi_test(char *n_str)
{
	return (int_tester(atoi(n_str), ft_atoi(n_str)));
}

void	calloc_test(void)
{
	const size_t	count = 5;
	const size_t	size = 4;
	char *exp_ptr = calloc(count, size);
	char *act_ptr = ft_calloc(count, size);
	size_t i;

	i = 0;
	while (i < count * size - 1)
	{
		exp_ptr[i] = '_';
		act_ptr[i] = '_';
		i++;
	}
	exp_ptr[i] = '\0';
	act_ptr[i] = '\0';
	printf("exp: %s\n", exp_ptr);
	printf("act: %s\n", act_ptr);
	free(exp_ptr);
	free(act_ptr);
}

