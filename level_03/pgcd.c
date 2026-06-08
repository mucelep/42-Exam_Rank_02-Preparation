#include <stdlib.h>

// void	pgdc(int a, int b)
// {
// 	int	tmp;
// 	int	result;

// 	if( a < 0 || b < 0)
// 		return ;
// 	tmp = 1;
// 	result = 0;
// 	while (tmp <= a && tmp <= b)
// 	{
// 		if (a % tmp == 0 && b % tmp == 0)
// 			result = tmp;
// 		tmp++;
// 	}
// 	printf("%d",result);
// }

void ebob(int a, int b)
{
	int	tmp;

	while (b)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	printf("%d",a);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ebob(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}