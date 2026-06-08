#include <unistd.h>

void	lastword(char *str)
{
	int	i;
	char	*s;

	i = 0;
	while (str[i + 1])
		i++;
	while (i > 0 && (str[i] == ' ' || str[i] == '\t'))//string "   " ise i > 0 oldugu için sonda 1 karakter kalıyor 
		i--;// str[-1] segf diye var i>0
	if (str[i] == ' ' || str[i] == '\t')// str[0] == ' ' diye bakıyor.
		return ;
	while (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t') 
		i--;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		lastword(argv[1]);
	write(1, "\n", 1);
	return (0);
}