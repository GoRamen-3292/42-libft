#include "test.h"

void	strlcpy_test(void)
{
	char src[4] = "Hi!";
	char dest[12] = "__________";
	const size_t	size = 12;
	printf("Exp:\n");
	printf("%s | %s\n", src, dest);
	strlcpy(dest, src, 0);
	printf("%s | %s\n", src, dest);
	strlcpy(dest, src, 2);
	printf("%s | %s ->", src, dest);
	display_memory(dest, size);
	strlcpy(dest, src, 7);
	printf("%s | %s ->", src, dest);
	display_memory(dest, size);

	char dest_2[12] = "__________";
	printf("Act:\n");
	printf("\n\n%s | %s\n", src, dest_2);
	strlcpy(dest_2, src, 0);
	printf("%s | %s\n", src, dest_2);
	strlcpy(dest_2, src, 2);
	printf("%s | %s -> ", src, dest_2);
	display_memory(dest_2, size);
	strlcpy(dest_2, src, 7);
	printf("%s | %s ->", src, dest_2);
	display_memory(dest_2, size);
}

void	strlcat_test(void)
{
	char	dest[30] = "This is ";
	const char	src[3] = "42";
	const size_t size = 20;

	ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	display_memory(dest, size);
}

void	strchr_test(void)
{
	const char	*str = "This is 42!";
	const char	*exp_result = strchr(str, 's');
	const char	*act_result = ft_strchr(str, 's');
	const char	*act_nul_result = ft_strchr(str, 'z');

	printf("Exp: %s\nAct: %s\n", exp_result, act_result);
	printf("Exp: NULL\nAct: %s\n", act_nul_result);
}

void	strrchr_test(void)
{
	const char	*str = "This is 42!";
	const char	*exp_result = strrchr(str, 's');
	const char	*act_result = ft_strrchr(str, 's');
	const char	*act_nul_result = ft_strrchr(str, 'z');

	printf("Exp: %s\nAct: %s\n", exp_result, act_result);
	printf("Exp: NULL\nAct: %s\n", act_nul_result);
}

void	strncmp_test(void)
{
	const char	*s1 = "This is 42";
	const char	*s2 = "This is 24";

	int_tester(strncmp(s1, s2, 7), ft_strncmp(s1, s2, 7));
	int_tester(strncmp(s1, s2, 11), ft_strncmp(s1, s2, 11));
	int_tester(strncmp(s1, s2, 42), ft_strncmp(s1, s2, 42));

	const char	*s3 = "This is 42!!";
	int_tester(strncmp(s1, s3, 7), ft_strncmp(s1, s3, 7));
	int_tester(strncmp(s1, s3, 13), ft_strncmp(s1, s3, 13));
}