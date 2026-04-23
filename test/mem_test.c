#include "test.h"

void	memset_test(const int val)
{
	const t_size_t	size = 10 * sizeof(int);
	int				*a;

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

void	bzero_test(void)
{
	const int		val = 0;
	const t_size_t	size = 10 * sizeof(int);
	int				*a;

	printf("Testing for %i\n", val);
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
	const t_size_t	size = 10 * sizeof(int);
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