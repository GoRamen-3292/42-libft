/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:49:14 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/22 20:33:28 by ktomita          ###   ########.fr       */
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
	const int	isalpha_cases[5] = {'c', 'x', ' ', '\0', '\77'};
	int			i;

	printf("Testing the libft...\n");

	// isalpha
	// while (i = 0; i < )
	printf("isalpha\n");
	int_tester(isalpha('c'), ft_isalpha('c'));
	int_tester(isalpha('c'), ft_isalpha('c'));
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
		printf("%i == %i, OK!\n", res, exp);
		return (1);
	}
}