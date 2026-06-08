#include <stdlib.h>
#include <stdio.h>
//split ama free all fonksiyonu yok fakat sınav için yeterli
static int	is_sep(char c)// subjectte tab ve new line i katıyo diye kısa yol tek tek yazmamak için
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static int	word_count(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && is_sep(s[i]))
			i++;
		if (s[i])
			count++;
		while (s[i] && !(is_sep(s[i])))
			i++;
	}
	return (count);
}

static char *copy_word(char *s)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (s[len] && !(is_sep(s[len])))// bosluga gelene kadar arttır yani kelimenin uzunlugunu bul
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && !(is_sep(s[i])))// kelime bitene kadar kopyala
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**split;
	int		i;// str degiskeni için
	int		j;//split *

	if (!str)
		return (NULL);
	split = malloc(sizeof(char *) * (word_count(str) + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))// basta bosluk varsa gec
			i++;
		if (str[i])
		{
			split[j] = copy_word(str + i); // string in hep basından vermiyoruz kaldıgı yerden devam etsin diye + i
			if (!split[j])
				return (NULL);
			j++;
		}
		while (str[i] && !(is_sep(str[i])))// bosluga kadar ilerle
			i++;
	}
	split[j] = NULL;
	return (split);
}

// int	main(void)
// {
// 	int	i = 0;
// 	char	**result;

// 	// Test string
// 	char str[] = "   hello   world   this is 42   ";

// 	result = ft_split(str);

// 	if (!result)
// 	{
// 		printf("malloc fail\n");
// 		return (1);
// 	}
// 	while (result[i])
// 	{
// 		printf("word[%d]: %s\n", i, result[i]);
// 		free(result[i]); // tek tek free
// 		i++;
// 	}
// 	free(result); // pointer array free
// 	return (0);
// }