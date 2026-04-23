/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 20:26:06 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/23 13:36:34 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Constants
#define C_CLASS_MATCHED 1
#define C_CLASS_UNMATCHED 0

typedef unsigned long	size_t;

//
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(char c);
void					*memset(void *s, int c, size_t n);
size_t					ft_strlen(char *str);
