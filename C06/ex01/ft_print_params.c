#include <unistd.h>

int	main(int argc, char **argv)
{	
	int	counter;
	int	len;
	
	counter = 1;
	len = 0;
	if (argc > 1)
	{
		while (counter < argc)
		{	
			len = 0;
			while (argv[counter][len])
			{
				write(1, &argv[counter][len], 1);
				len++;
			}
			write(1, "\n", 1);
			counter++;
		}
	}
	return (0);
}
