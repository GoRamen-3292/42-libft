/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:40:55 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/25 20:24:25 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	atoi_test(char *n_str)
{
	return (int_tester(atoi(n_str), ft_atoi(n_str)));
}

void	calloc_test(const size_t count, const size_t size)
{
	char	*exp_ptr;
	char	*act_ptr;
	size_t	i;

	exp_ptr = calloc(count, size);
	act_ptr = ft_calloc(count, size);
	i = 0;
	
	if (count * size > 0)
	{
		exp_ptr[i] = '\0';
		act_ptr[i] = '\0';
		printf("exp: ");
		display_memory(exp_ptr, count * size);
		printf("\nact: ");
		display_memory(act_ptr, count * size);
		printf("\n");
	}
	else
	{
		printf("0: %p\n", act_ptr);
		printf("Didn't crash when count * size == 0");
		fflush(stdout);
	}
	// ちゃんと確保した領域が読み書きできるか、一旦試しに埋めてvalgrind等で確認する
	while (i < count * size)
	{
		exp_ptr[i] = '_';
		act_ptr[i] = '_';
		i++;
	}
	free(exp_ptr);
	free(act_ptr);
}
