#include "test.h"

void	substr_test(char *str, unsigned int start, size_t max_len)
{
	char	*result;

	result = ft_substr(str, start, max_len);
	printf("%s, start: %u, max_len: %lu\n%s\n", str, start, max_len, result);
	free(result);
}

void	strtrim_test(const char *s1, const char *set)
{
	char	*result;

	result = ft_strtrim(s1, set);
	printf("%s, set: %s\n%s\n", s1, set, result);
	free(result);
}

void	strjoin_test(const char *s1, const char *s2)
{
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("\"%s\" + \"%s\" = \"%s\"\n", s1, s2, result);
	free(result);
}

void	itoa_test(const int n)
{
	char *result = ft_itoa(n);
	printf("%i -> \"%s\"\n", n, result);
	free(result);
}
