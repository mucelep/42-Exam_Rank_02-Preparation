#include <unistd.h>

// " abc    def  dfg.  " verilicek "abc def dfg." çıkıcak her kelime arasına 1 bosluk basta sonda olmayacak 
void	epur_str(char *s)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	while (s[i])
	{
		if(!(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))//bosluk değilse yaz
			write(1, &s[i], 1);
		if (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		{
			while (s[i + 1] == ' ' || (s[i + 1] >= 9 && s[i + 1] <= 13))//bosluga denk gelirsen tüm boslukları geç
				i++;
			if (s[i + 1])//devamında karakter varsa bosluk koy
				write(1, " ", 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}