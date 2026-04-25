/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktomita <ktomita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 20:26:06 by ktomita           #+#    #+#             */
/*   Updated: 2026/04/25 14:50:21 by ktomita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// External libraries for types, malloc() and free()
#include <limits.h>
#include <stdlib.h>
#include <string.h>

// Constants
#define C_CLASS_MATCHED 1
#define C_CLASS_UNMATCHED 0
#define TRUE 1
#define FALSE 0

// typedef

// Prototypes
// - Part 1.
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(char c);
void					*ft_memset(void *s, int c, size_t n);
size_t				ft_strlen(const char *str);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memmove(void *dest, const void *src, size_t n);
size_t					ft_strlcpy(char *dst, const char *src, size_t size);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strchr(const char *str, int c);
char					*ft_strrchr(const char *str, int c);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
char					*ft_strnstr(const char *big, const char *little,
							size_t len);
int						ft_atoi(const char *src);
void					*ft_calloc(size_t nmemb, size_t size);
char					*ft_strdup(const char *s1);

// - Part 2.
char					*ft_substr(const char *s, unsigned int start,
							size_t len);
char					*ft_strjoin(const char *s1, const char *s2);
char					*ft_strtrim(const char *s1, const char *set);
