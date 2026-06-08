#include <unistd.h>
#include <stdlib.h>

//bir sayının kendi ve önce gelen tüm asal sayıları toplayıp ekrana yazdıran program
int	ft_atoi(char *nbr)
{
	int	i;
	int	resl;
	int	sign;

	i = 0;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	sign = 1;
	if (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	resl= 0;
	while (nbr[i])
	{
		resl = resl * 10 + (nbr[i] - '0');
		i++;
	}
	return (resl * sign);
}

int	is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	i = 2;
	while(i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	prime_sum(char *nbr)
{
	int	nb;
	int	i;
	int	res;

	nb = ft_atoi(nbr);
	i = 2;
	res = 0;
	while (i <= nb)
	{
		if(is_prime(i))
			res += i;
		i++;
	}
	return (res);
}

void ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	n;

	n = 0;
	if(argc == 2)
	{
		n = prime_sum(argv[1]);
		ft_putnbr(n);
		write(1, "\n", 1);
		exit(0);
	}
	write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}