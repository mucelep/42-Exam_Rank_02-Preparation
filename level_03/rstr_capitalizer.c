#include <unistd.h>

void	rstr(char **args)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			c = args[i][j];
			if((args[i][j] >= 'A' && args[i][j] <= 'Z') && args[i][j + 1] != '\0' && args[i][j + 1] != ' ')
				c = args[i][j] + 32;
			else if ((args[i][j] >= 'a' && args[i][j] <= 'z') && args[i][j + 1] == ' ')
				c = args[i][j] - 32;
			else if (args[i][j + 1] == '\0' && (args[i][j] >= 'a' && args[i][j] <= 'z'))
				c = args[i][j] - 32;
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	else
		rstr(argv);
	return (0);
}