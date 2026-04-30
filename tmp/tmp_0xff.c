#include <stdio.h>

int	main(void)
{
	const int		 max = 265;
	unsigned char 	result;
	// unsigned char	uc_result;
	int		i;

	i = -265;
	while (i <= max)
	{
		i++;
		result = i & 0xff;
		printf("%i (%u): %i\n", i, (unsigned char)i, result);
	}
}