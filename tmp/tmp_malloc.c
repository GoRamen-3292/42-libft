#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char *const test = ft_calloc(0, 0);
	test[0] = '*';
	printf("%c", test[0]);
	free(test);
}
