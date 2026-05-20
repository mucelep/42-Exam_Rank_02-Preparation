#include <unistd.h>
#include <stdlib.h>

int	string_len(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && i != 0)
			len++;
		len++;
		i++;
	}
	return(len);
}

char	*camel_to_snake(char *str)
{
	char	*st;
	int		len;
	int		i;
	int		j;

	len = string_len(str);
	st = malloc(len + 1);

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i != 0)
				st[j++] = '_';
			st[j] = str[i] + 32;
		}
		else
			st[j] = str[i];
		j++;
		i++;
	}
	st[j] = '\0';
	return (st);
}

int	main(int argc, char **argv)
{
	int	len;
	char *str;

	if(argc == 2)
	{
		str = camel_to_snake(argv[1]);
		len = string_len(argv[1]);
		write(1, str, len);
	}
	write(1, "\n", 1);
	return (0);
}