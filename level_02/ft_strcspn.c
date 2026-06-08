#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (reject[j] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
int main()
{
	size_t x = ft_strcspn("merhaba", "oxey");
	printf("%zu", x);
}