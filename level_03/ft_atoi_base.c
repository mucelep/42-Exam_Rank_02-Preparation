int	char_val(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if(c >= 'a' && c <= 'f')// a - a + 10 = 10 / b - a + 10 = 11
		return (c - 'a' + 10);
	else if(c >= 'Z' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	res;
	int	cval;//char value 0123456789abcef

	sign = 1;
	i = 0;
	if(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	res = 0;
	while (str[i])
	{
		cval = char_val(str[i]);
		if (cval == -1 || cval >= str_base)
			break;
		res = res * str_base + cval;
		i++;
	}
	return (sign * res);
}

int main(){
	int nbr;
	nbr = ft_atoi_base("01010010101",2);
	printf("%d",nbr);
}