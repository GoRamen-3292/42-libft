#include <stdlib.h>

int	main(void)
{
	char *const test = malloc(0);
	test[0] = '*';
	printf("%c", test[0]);
	free(test);
}
