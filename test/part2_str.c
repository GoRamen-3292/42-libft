#include "test.h"

void	plus_3_iteri(unsigned int i, char *a);

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
	printf("\"%s\", set: \"%s\"\n-> \"%s\"\n", s1, set, result);
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
	char	*result;

	result = ft_itoa(n);
	printf("%i -> \"%s\"\n", n, result);
	free(result);
}

void	strmapi_test(const char *s, char (*f)(unsigned int, char))
{
	char	*result;

	result = ft_strmapi(s, f);
	printf("\"%s\" -> \"%s\"\n", s, result);
	free(result);
}

void	striteri_test(const char *str)
{
	char	*iter_str;

	iter_str = ft_strdup(str);
	printf("\"%s\" ->", str);
	ft_striteri(iter_str, plus_3_iteri);
	printf(" \"%s\"\n", iter_str);
	free(iter_str);
}

void	plus_3_iteri(unsigned int i, char *a)
{
	(void)(i);
	*a = *a + 3;
}

void	split_test(const char *str, char sep)
{
	char	**result;
	size_t	i;

	result = ft_split(str, sep);
	i = 0;
	printf("%s ->\n", str);
	while (result[i] != NULL)
	{
		printf("[%zu] \"%s\"\n", i, result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
}
