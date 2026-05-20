#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;

	if (argc == 2)
	{
		argv++;
		while (**argv)
		{
			
			if (**argv >= 'a' && **argv <= 'z')
			{
				c = 'z' - (**argv - 'a');
				write(1, &c, 1);
			}
			else if (**argv >= 'A' && **argv <= 'Z')
			{
				c = 'Z'- (**argv - 'A');
				write(1, &c, 1);
			}
			else
				write(1, &**argv, 1);
			(*argv)++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
