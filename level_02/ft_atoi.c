#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nmbr;
	int	sign;
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	nmbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nmbr = nmbr * 10 + (str[i] - '0');
		i++;
	}
	return (sign * nmbr);
}
