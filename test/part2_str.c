#include "test.h"

void	substr_test(char *str, unsigned int start, size_t max_len)
{
	char	*result = ft_substr(str, start, max_len);
	printf("%s, start: %u, max_len: %lu\n%s\n", str, start, max_len, result);
	free(result);
}

void	strtrim_test(const char *s1, const char *set)
{
	char	*result = ft_strtrim(s1, set);
	printf("%s, set: %s\n%s\n", s1, set, result);
	free(result);
}
