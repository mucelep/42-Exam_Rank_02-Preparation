#include <unistd.h>

void	exp_str(char *s)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	while(s[i])
	{
		if (!(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))
			write(1, &s[i], 1);
		if(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		{
			while(s[i + 1] == ' ' || (s[i + 1] >= 9 && s[i + 1] <= 13))
				i++;
			if (s[i + 1])
				write(1, "   ", 3);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		exp_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}