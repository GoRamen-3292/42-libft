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