/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:49:14 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/23 16:17:09 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		int_tester(const int exp, const int res);
void	display_memory(void *ptr, t_size_t size);
void	memset_test(int val);

int	main(void)
{
	printf("Testing the libft...\n");
	printf("== isalpha ==\n");
	int_tester(C_CLASS_MATCHED, ft_isalpha('c'));
	int_tester(C_CLASS_MATCHED, ft_isalpha('A'));
	int_tester(C_CLASS_UNMATCHED, ft_isalpha('0'));
	printf("\n== isdigit ==\n");
	int_tester(C_CLASS_UNMATCHED, ft_isdigit('c'));
	int_tester(C_CLASS_UNMATCHED, ft_isdigit('A'));
	int_tester(C_CLASS_MATCHED, ft_isdigit('0'));
	printf("\n== isascii ==\n");
	int_tester(isascii('0'), ft_isascii('0'));
	int_tester(isascii('A'), ft_isascii('A'));
	int_tester(isascii('0'), ft_isascii('0'));
	printf("\n== isalnum ==\n");
	int_tester(C_CLASS_MATCHED, ft_isalnum('c'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('A'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('0'));
	int_tester(C_CLASS_UNMATCHED, ft_isalnum('-'));
	printf("\n== strlen ==\n");
	int_tester(strlen("aaaaa"), ft_strlen("aaaaa"));
	int_tester(strlen(""), ft_strlen(""));
	printf("\n== memset ==\n");
	memset_test(2);
	memset_test(5029);
	memset_test(435029);
	printf("\n== bzero ==\n");
}

void	memset_test(const int val)
{
	int				*a;
	const t_size_t	size = 10 * sizeof(int);

	printf("Testing for %i\n", val);
	printf("Exp:\n");
	a = malloc(size);
	memset(a, val, size);
	display_memory(a, size);
	free(a);
	printf("Act:\n");
	a = malloc(size);
	ft_memset(a, val, size);
	display_memory(a, size);
	free(a);
}

void	bzero_test(const int val)
{
	int				*a;
	const t_size_t	size = 10 * sizeof(int);

	printf("Testing for %i\n", val);
	printf("Exp:\n");
	a = malloc(size);
	bzero(100);
	display_memory(a, size);
	free(a);
	printf("Act:\n");
	a = malloc(size);
	ft_memset(a, val, size);
	display_memory(a, size);
	free(a);
}

int	int_tester(const int exp, const int res)
{
	if (exp == res)
	{
		printf("%i (exp: %i), OK!\n", res, exp);
		return (0);
	}
	else
	{
		printf("%i (exp: %i), Diff...\n", res, exp);
		return (1);
	}
}

void	display_memory(void *ptr, t_size_t size)
{
	char *c_ptr;
	t_size_t i;

	i = 0;
	c_ptr = ptr;
	while (i <= size)
	{
		printf("%i ", *c_ptr);
		i++;
		c_ptr++;
	}
	printf("\n");
}