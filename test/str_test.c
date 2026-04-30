#include "test.h"

void	strlcpy_test(void)
{
	char			src[4] = "Hi!";
	char			dest[12] = "__________";
	const size_t	size = 12;
	char			dest_2[12] = "__________";
	int				res;

	printf("Exp:\n");
	printf("%s | %s\n", src, dest);
	res = strlcpy(dest, src, 0);
	printf("%s | %s (%i)\n", src, dest, res);
	res = strlcpy(dest, src, 2);
	printf("%s | %s (%i) ->", src, dest, res);
	display_memory(dest, size);
	res = strlcpy(dest, src, 7);
	printf("%s | %s (%i) ->", src, dest, res);
	display_memory(dest, size);
	printf("\nAct:\n");
	printf("%s | %s\n", src, dest_2);
	res = ft_strlcpy(dest_2, src, 0);
	printf("%s | %s (%i)\n", src, dest_2, res);
	res = ft_strlcpy(dest_2, src, 2);
	printf("%s | %s (%i) -> ", src, dest_2, res);
	display_memory(dest_2, size);
	res = ft_strlcpy(dest_2, src, 7);
	printf("%s | %s (%i) ->", src, dest_2, res);
	display_memory(dest_2, size);
}

void	strlcat_test(void)
{
	char			dest[30] = "This is ";
	const char		src[3] = "42";
	const size_t	size = 20;

	ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	display_memory(dest, size);
}

void	strchr_test(void)
{
	const char	*str = "This is 42!";
	const char	*exp_result = strchr(str, 's');
	const char	*act_result = ft_strchr(str, 's');
	const char	*act_null_result = ft_strchr(str, 'z');
	const char	*exp_nul_result = strchr(str, '\0');
	const char	*act_nul_result = ft_strchr(str, '\0');

	ptr_tester(exp_result, act_result, 1);
	ptr_tester(NULL, act_null_result, 0);
	ptr_tester(exp_nul_result, act_nul_result, 0);
}

void	strrchr_test(void)
{
	const char	*str = "This is 42!";
	const char	*exp_result = strrchr(str, 's');
	const char	*act_result = ft_strrchr(str, 's');
	const char	*exp2_result = strrchr(str, '2');
	const char	*act2_result = ft_strrchr(str, '2');
	const char	*act_nul_result = ft_strrchr(str, 'z');

	ptr_tester(exp_result, act_result, 1);
	ptr_tester(exp2_result, act2_result, 1);
	ptr_tester(NULL, act_nul_result, 0);
}

void	strncmp_test(void)
{
	const char	*s1 = "This is 42";
	const char	*s2 = "This is 24";
	const char	*s3 = "This is 42!!";

	int_tester(strncmp(s1, s2, 7), ft_strncmp(s1, s2, 7));
	int_tester(strncmp(s1, s2, 11), ft_strncmp(s1, s2, 11));
	int_tester(strncmp(s1, s2, 42), ft_strncmp(s1, s2, 42));
	int_tester(strncmp(s1, s3, 7), ft_strncmp(s1, s3, 7));
	int_tester(strncmp(s1, s3, 13), ft_strncmp(s1, s3, 13));
}

void	strnstr_test(void)
{
	const char	*big = "I really really really really like 42";
	const char	*small = "really";

	ptr_tester(strnstr(big, small, 38), ft_strnstr(big, small, 38), 1);
}
