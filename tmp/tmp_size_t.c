#include <limits.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%lu, ", sizeof(size_t));
	printf("%lu", sizeof(((long)INT_MAX * 10 + 3)));
	printf("%lu", ((long)INT_MAX * 10 + 3));
}