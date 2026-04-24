/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:49:14 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/24 19:15:14 by ktomita          ###   ########.fr       */
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
	memmove_test();
	printf("\n== strlcpy ==\n");
	strlcpy_test();
	printf("\n== strlcat ==\n");
	strlcat_test();
	printf("\n== strchr ==\n");
	strchr_test();
	printf("\n== strrchr ==\n");
	strrchr_test();
	printf("\n== strncmp ==\n");
	strncmp_test();
	printf("\n== memchr ==\n");
	memchr_test();
	printf("\n== memcmp ==\n");
	memcmp_test();
	printf("\n== strnstr ==\n");
	strnstr_test();
	printf("\n== atoi ==\n");
	atoi_test("0");
	atoi_test("00000");
	atoi_test("1");
	atoi_test("42");
	atoi_test("00042");
	atoi_test("4242");
	atoi_test("-1");
	atoi_test("2147483647");
	atoi_test("-2147483648");
	atoi_test("+2147483647");
	atoi_test(" 	 -2147483648");
	atoi_test(" 	 -2147483648");
	atoi_test("		-2147483648");
	printf("Error\n");
	atoi_test("---2147483648");
	atoi_test("_2147483648");
	printf("Overflow Testing... ");
	ft_atoi("2147483648"); // Overflow
	ft_atoi(" 214747543059841356974580237853645987612865471846987358792654183648"); // Overflow
	printf("OK!\n");
	printf("\n== toupper ==\n");
	int_tester('A', toupper('a'));
	int_tester('K', toupper('k'));
	int_tester('Z', toupper('z'));
	int_tester('A', toupper('A'));
	int_tester(' ', toupper(' '));
	printf("\n== tolower ==\n");
	int_tester('a', tolower('A'));
	int_tester('k', tolower('K'));
	int_tester('z', tolower('Z'));
	int_tester('a', tolower('a'));
	int_tester(' ', tolower(' '));
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
		printf("%i (exp: %i), Diff... ///\n", res, exp);
		return (1);
	}
}

int	ptr_tester(const void *exp, const void *res, int output_as_str)
{
	if (exp == res)
		printf("%p (exp: %p), OK!\n", res, exp);
	else
		printf("%p (exp: %p), Diff... ///\n", res, exp);
	if (output_as_str)
		printf("-> %s (exp: %s)\n", (char *)res, (char *)exp);
	return (exp == res);
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
	// while (i < 3)
	// {
	// 	printf("%i ", *c_ptr);
	// 	i++;
	// 	c_ptr++;
	// }
	printf("\n");
}
