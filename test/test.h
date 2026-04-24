#include "../src/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>
#include <unistd.h>

int		int_tester(const int exp, const int res);
void	display_memory(void *ptr, t_size_t size);
void	memset_test(int val);
void	bzero_test(void);
void	memcpy_test(void);
void	strlcpy_test(void);
void	strlcat_test(void);
void	strchr_test(void);
void	strrchr_test(void);
void	strncmp_test(void);