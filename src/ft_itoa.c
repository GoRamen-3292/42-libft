/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:53:28 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/25 20:46:42 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	const unsigned int	digits = get_digit(n);
	const unsigned int	chars = digits + is_minus(n);
	char *result;

	result = malloc(sizeof(char) *( chars + 1));
	if (result == NULL)
		return (NULL);
	// ここに順々に割っていて結果を1文字ずつ代入する関数を書く
}

int	is_minus(const int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}