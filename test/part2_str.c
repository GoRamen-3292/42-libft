#include "test.h"

void	substr_test(char *str, unsigned int start, size_t max_len)
{
	printf("%s, start: %u, max_len: %lu\n%s\n", str, start, max_len,
		ft_substr(str, start, max_len));
}
