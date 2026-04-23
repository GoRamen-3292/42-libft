/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:49:14 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/23 20:20:17 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

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
	printf("\n== memmove ==\n");
	printf("Not implemented yet..\n");
	printf("\n== strlcpy ==\n");
	strlcpy_test();
	printf("\n== strlcat ==\n");
	printf("Not implemented yet..\n");
	printf("\n== toupper ==\n");
	printf("Not implemented yet..\n");
	printf("\n== toupper ==\n");
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
