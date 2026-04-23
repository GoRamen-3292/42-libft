/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:49:14 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/23 13:36:53 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

int	int_tester(const int exp, const int res);

int	main()
{
	printf("Testing the libft...\n");

	printf("== isalpha ==\n");
	int_tester(isalpha('c'), ft_isalpha('c'));
	int_tester(isalpha('A'), ft_isalpha('A'));
	int_tester(isalpha('0'), ft_isalpha('0'));

	printf("== isdigit ==\n");
	int_tester(isdigit('c'), ft_isdigit('c'));
	int_tester(isdigit('A'), ft_isdigit('A'));
	int_tester(isdigit('0'), ft_isdigit('0'));

	printf("== isascii ==\n");
	int_tester(isascii('0'), ft_isascii('c'));
	int_tester(isascii('A'), ft_isascii('A'));
	int_tester(isascii('0'), ft_isascii('0'));

	printf("== isalnum ==\n");
	int_tester(isalnum('c'), ft_isalnum('c'));
	int_tester(isalnum('A'), ft_isalnum('A'));
	int_tester(isalnum('0'), ft_isalnum('0'));

	printf("== strlen ==\n");
	int_tester(strlen("aaaaa"), ft_strlen("aaaaa"));
	int_tester(strlen(""), ft_strlen(""));

}

int	int_tester(const int exp, const int res)
{
	if (exp == res)
	{
		printf("%i == %i, OK!\n", res, exp);
		return (0);
	}
	else
	{
		printf("%i != %i, Diff...\n", res, exp);
		return (1);
	}
}