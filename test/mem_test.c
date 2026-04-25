#include "test.h"

void	memset_test(const size_t size, int val)
{
	char				*a;

	printf("Testing for %i\n", val);
	printf("Exp:\n");
	a = malloc(size);
	memset(a, val, size);
	display_memory(a, size);
	free(a);
	printf("Act:\n");
	a = malloc(size);
	ft_memset(a, val, size);
	display_memory(a, size);
	free(a);
}

void	memmove_test(void)
{
	char		str_1[1000] = "42_________________________________________";
	char		str_2[1000] = "__________42_____________________________";
	const int	offset = 10;

	printf("Before: %s\n", str_1);
	printf("Result: %s\n", (char *)ft_memmove(&str_1[offset], str_1, 2));
	printf("After: %s\n", str_1);
	printf("Before: %s\n", &str_2[offset]);
	printf("Result: %s\n", (char *)ft_memmove(str_2, &str_2[offset], 2));
	printf("After: %s\n", str_2);
}

void	bzero_test(void)
{
	const size_t	size = 10 * sizeof(int);
	int				*a;

	printf("Exp:\n");
	a = malloc(size);
	bzero(a, size);
	display_memory(a, size);
	free(a);
	printf("Act:\n");
	a = malloc(size);
	ft_bzero(a, size);
	display_memory(a, size);
	free(a);
}

void	memcpy_test(void)
{
	const size_t	size = 10 * sizeof(int);
	int				*src;
	int				*dest;

	printf("Exp:\n");
	src = malloc(size);
	dest = malloc(size);
	memset(src, 42, size);
	memcpy(dest, src, size);
	display_memory(src, size);
	display_memory(dest, size);
	printf("Act:\n");
	memset(src, 24, size);
	ft_memcpy(dest, src, size);
	display_memory(src, size);
	display_memory(dest, size);
	free(src);
	free(dest);
}

void	memchr_test(void)
{
	const char		*str = "This is 42!";
	const size_t	size = strlen(str) + 1;
	const char		*exp_result = memchr(str, 's', size);
	const char		*act_result = ft_memchr(str, 's', size);
	const char		*act_nul_result = ft_memchr(str, 'z', size);

	ptr_tester(exp_result, act_result, 1);
	ptr_tester(NULL, act_nul_result, 0);
}

void	memcmp_test(void)
{
	const char	s1[50] = "This is 42";
	const char	s2[50] = "This is 24";
	const char	s3[50] = "This is 42!!";

	int_tester(memcmp(s1, s2, 7), ft_memcmp(s1, s2, 7));
	int_tester(memcmp(s1, s2, 11), ft_memcmp(s1, s2, 11));
	int_tester(memcmp(s1, s2, 42), ft_memcmp(s1, s2, 42));
	int_tester(memcmp(s1, s3, 7), ft_memcmp(s1, s3, 7));
	int_tester(memcmp(s1, s3, 13), ft_memcmp(s1, s3, 13));
}
