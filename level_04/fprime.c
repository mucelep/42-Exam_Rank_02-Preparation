#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	int	p;

	p = 2;// en kucuk asal sayi
	if (n < 0)
		return ;
	if (n == 1)
		printf("1");
	while (p <= n)// < degilde <= olmasının sebebi sayı asalsa yani baska hiçbir asal böleni yoksa sayıyı yazsın diye
	{
		if(n % p == 0)
		{
			printf("%d", p);
			n = n / p;
			if (n > 1)
				printf("*");
		}
		else
			p++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}