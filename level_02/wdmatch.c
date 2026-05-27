#include <unistd.h>

//2. stringde 1. string yazdırılabiliyor mu "cad" "cbabd" olur ama "cad" "dac" olmaz
void ft_wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (!s1[i])
	{
		i = 0;
		while (s1[i])
		{
			write(1, &s1[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}