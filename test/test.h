#include "../src/libft.h"
#include <bsd/string.h>
#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>

int		int_tester(const int exp, const int res);
void	display_memory(void *ptr, size_t size);
void	memset_test(const size_t size, int val);
void	bzero_test(void);
void	memcpy_test(void);
void	memmove_test(void);
void	strlcpy_test(void);
void	strlcat_test(void);
void	strchr_test(void);
void	strrchr_test(void);
void	strncmp_test(void);
void	memchr_test(void);
void	memcmp_test(void);
void	strnstr_test(void);
int		ptr_tester(const void *exp, const void *res, int output_as_str);
int		atoi_test(char *n_str);
void	calloc_test(const size_t count, const size_t size);

void	substr_test(char *str, unsigned int start, size_t max_len);
void	strjoin_test(const char *s1, const char *s2);
void	strtrim_test(const char *s1, const char *set);
void	itoa_test(const int n);