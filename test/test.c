/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:49:14 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/26 11:39:11 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char	plus_3(unsigned int i, char a);

int	main(void)
{
	printf("Testing the libft...\n");
	printf("###### Part 1. libc ######\n");
	printf("== isalpha ==\n");
	int_tester(C_CLASS_MATCHED, ft_isalpha('c'));
	int_tester(C_CLASS_MATCHED, ft_isalpha('a'));
	int_tester(C_CLASS_MATCHED, ft_isalpha('z'));
	int_tester(C_CLASS_MATCHED, ft_isalpha('A'));
	int_tester(C_CLASS_MATCHED, ft_isalpha('Z'));
	int_tester(C_CLASS_UNMATCHED, ft_isalpha('0'));
	printf("\n== isdigit ==\n");
	int_tester(C_CLASS_UNMATCHED, ft_isdigit('c'));
	int_tester(C_CLASS_UNMATCHED, ft_isdigit('A'));
	int_tester(C_CLASS_MATCHED, ft_isdigit('0'));
	int_tester(C_CLASS_MATCHED, ft_isdigit('5'));
	int_tester(C_CLASS_MATCHED, ft_isdigit('9'));
	printf("\n== isascii ==\n");
	int_tester(isascii('0'), ft_isascii('0'));
	int_tester(isascii('Z'), ft_isascii('Z'));
	int_tester(isascii('A'), ft_isascii('A'));
	int_tester(isascii('0'), ft_isascii('0'));
	printf("\n== isalnum ==\n");
	int_tester(C_CLASS_MATCHED, ft_isalnum('c'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('a'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('d'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('z'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('A'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('C'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('Z'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('0'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('5'));
	int_tester(C_CLASS_MATCHED, ft_isalnum('9'));
	int_tester(C_CLASS_UNMATCHED, ft_isalnum('-'));
	printf("\n== strlen ==\n");
	int_tester(strlen("aaaaa"), ft_strlen("aaaaa"));
	int_tester(strlen(""), ft_strlen(""));
	printf("\n== memset ==\n");
	memset_test(40, 2);
	memset_test(40, 5029);
	memset_test(40, 435029);
	memset_test(0, 435029);
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
	atoi_test(" 		-2147483648");
	atoi_test(" 		-2147483648");
	atoi_test("		-2147483648");
	printf("Error\n");
	atoi_test("---2147483648");
	atoi_test("_2147483648");
	printf("Overflow Testing... ");
	ft_atoi("2147483648");
	// Overflow
	ft_atoi(" 214747543059841356974580237853645987612865471846987358792654183648");
	// Overflow
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
	printf("\n=== calloc ===\n");
	calloc_test(5, 4);
	calloc_test(0, 0);
	printf("\n\n###### Part 2. 42 func ######\n");
	printf("\n=== ft_substr ===\n");
	substr_test("1234567890", 0, 0);
	substr_test("1234567890", 0, 3);
	substr_test("1234567890", 2, 3);
	substr_test("1234567890", 2, 7);
	substr_test("1234567890", 2, 8);
	substr_test("1234567890", 2, 10000);
	printf("\n=== ft_strjoin ===\n");
	strjoin_test("aaaaa", "bbbbb");
	strjoin_test("", "bbbbb");
	printf("\n=== ft_strtrim ===\n");
	strtrim_test("Tuuuuhis iuuuuus 42uuuuuuu", "up$");
	strtrim_test("Tuuuuhis iuuuuus 42uuuuuuu", "uuup$");
	strtrim_test("This is 42u", " ");
	strtrim_test("This\b\t is \v42u", "\b\t\v ");
	strtrim_test("This iuuuuus 42uuuuuuu", "");
	strtrim_test("", "This iuuuuus 42uuuuuuu");
	strtrim_test("", "");
	printf("\n=== ft_split ===\n");
	split_test("This is 42", ' ');
	split_test(" This is 42", ' ');
	split_test("This is 42 ", ' ');
	split_test(" This is 42 ", ' ');
	split_test(" This       is               42 ", ' ');
	split_test("", ' ');
	split_test("This is 42", '\0');
	printf("\n=== ft_itoa ===\n");
	itoa_test(0);
	itoa_test(1);
	itoa_test(9);
	itoa_test(10);
	itoa_test(99);
	itoa_test(100);
	itoa_test(999);
	itoa_test(-1);
	itoa_test(-9);
	itoa_test(-10);
	itoa_test(-99);
	itoa_test(INT_MAX);
	itoa_test(INT_MIN);
	printf("\n=== ft_strmapi ===\n");
	strmapi_test("ABCDEFGabcdefg0123456", plus_3);
	strmapi_test("", plus_3);
	printf("\n=== ft_striteri ===\n");
	striteri_test("ABCDEFGabcdefg0123456");
	striteri_test("");
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
void	display_memory(void *ptr, size_t size)
{
	char	*c_ptr;
	size_t	i;

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

char	plus_3(unsigned int i, char a)
{
	(void)(i);
	return (a + 3);
}
