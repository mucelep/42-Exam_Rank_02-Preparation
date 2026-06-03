#include <stdlib.h>

int	int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)// negatif bir değer yada 0 ise - için veya 0 için uzunlugu bir arttırıyor
	{
		len++;
		n = -n;
	}
	while (n)//1 basamak silip uzunlugu 1 arttırıyor
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len;

	if (nbr == -2147483648)
		return ("-2147483648");//int min kontrolü
	len = int_len(nbr);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
