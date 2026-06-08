#include <unistd.h>

void	ft_hex(int n)
{
	char *base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_hex(n / 16);
	write(1, &base[n % 16], 1);// ör sayı 10 10&16 = 10 ve basenin 10. elemanı a
}

int	main(int argc, char **argv)
{
	int	nb;
	int	i;

	if (argc == 2)
	{
		i = 0;
		nb = 0;
		while(argv[1][i])// atoi yazmamak için stringi kendimiz sayıya ceviriyoruz mini atoi
		{
			nb = nb * 10 + (argv[1][i] - '0');
			i++;
		}
		ft_hex(nb);
	}
	write(1, "\n", 1);
	return (0);
}