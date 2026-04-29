/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:53:28 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/29 15:58:07 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_digits(int n);
static void			set_sign_and_numbers(const int n, t_byte *dest,
						const unsigned int digits);
static int			int_abs(const int n);

char	*ft_itoa(int n)
{
	const unsigned int	digits = get_digits(n);
	const unsigned int	chars = digits + (n <= 0);
	t_byte				*result;

	result = malloc(sizeof(t_byte) * (chars + 1));
	if (result == NULL)
		return (NULL);
	set_sign_and_numbers(n, result, digits);
	result[chars] = '\0';
	return (result);
}

static unsigned int	get_digits(const int n)
{
	int				calc_n;
	unsigned int	digits;

	calc_n = n;
	digits = 0;
	while (calc_n != 0)
	{
		calc_n /= 10;
		digits++;
	}
	return (digits);
}

static void	set_sign_and_numbers(const int n, t_byte *dest,
		const unsigned int digits)
{
	unsigned int	i;
	int				ten_n;

	if (n == 0)
	{
		dest[0] = '0';
		return ;
	}
	i = 1;
	ten_n = 1;
	while (i++ < digits)
		ten_n *= 10;
	i = 0;
	if (n < 0)
		dest[i++] = '-';
	while (ten_n != 0)
	{
		dest[i] = int_abs((n / ten_n) % 10) + '0';
		ten_n /= 10;
		i++;
	}
}

static int	int_abs(const int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
