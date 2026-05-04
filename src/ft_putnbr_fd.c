/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:04:33 by ktomita           #+#    #+#             */
/*   Updated: 2026/05/02 13:26:37 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	f_set_chars(char *str, int n);
static unsigned int	get_digits(int n);
static void			set_sign_and_numbers(const int n, char *dest,
						const unsigned int digits);
static int	int_abs(const int n);

void	ft_putnbr_fd(int n, int fd)
{
	char	str[20];

	f_set_chars(str, n);
	ft_putstr_fd(str, fd);
}

static void	f_set_chars(char *str, int n)
{
	const unsigned int	digits = get_digits(n);
	const unsigned int	chars = digits + (n <= 0);

	set_sign_and_numbers(n, str, digits);
	str[chars] = '\0';
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

static void	set_sign_and_numbers(const int n, char *dest,
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
