#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc > 1 && argv[1][0] != '\0')
	{
		printf("Expectation: %d\n", atoi(argv[1]));
		printf("My Function: %d\n", ft_atoi(argv[1]));
	}
		
	else
	{
		printf("Parameter Error!\n");
	}

}
