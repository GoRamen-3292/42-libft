#include <stdio.h>

int	return_test(void);

int	main(void)
{
	printf("%i\n", return_test());
}

int	return_test(void)
{
	const unsigned char a = 10;
	const unsigned char b = 30;

	return (a - b); // -20
}