/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:49:14 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/23 17:36:45 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>

int		int_tester(const int exp, const int res);
void	display_memory(void *ptr, t_size_t size);
void	memset_test(int val);
void	bzero_test(void);
void	memcpy_test(void);

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
	bzero_test();
	printf("\n== memcpy ==\n");
	memcpy_test();
}

void	memset_test(const int val)
{
	const t_size_t	size = 10 * sizeof(int);
	int				*a;

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

void	bzero_test(void)
{
	const int		val = 0;
	const t_size_t	size = 10 * sizeof(int);
	int				*a;

	printf("Testing for %i\n", val);
	printf("Exp:\n");
	a = malloc(size);
	bzero(a, size);
	display_memory(a, size);
	free(a);
	printf("Act:\n");
	a = malloc(size);
	ft_bzero(a, size);
	display_memory(a, size);
	free(a);
}

void	memcpy_test(void)
{
	const t_size_t	size = 10 * sizeof(int);
	int				*src;
	int				*dest;

	printf("Exp:\n");
	src = malloc(size);
	dest = malloc(size);
	memset(src, 42, size);
	memcpy(dest, src, size);
	display_memory(src, size);
	display_memory(dest, size);
	printf("Act:\n");
	memset(src, 24, size);
	ft_memcpy(dest, src, size);
	display_memory(src, size);
	display_memory(dest, size);
	free(src);
	free(dest);

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
	char		*c_ptr;
	t_size_t	i;

	i = 0;
	c_ptr = ptr;
	while (i < size)
	{
		printf("%i ", *c_ptr);
		i++;
		c_ptr++;
	}
	printf(" |");
	i = 0;
	while (i < 3)
	{
		printf("%i ", *c_ptr);
		i++;
		c_ptr++;
	}
	printf("\n");
}
