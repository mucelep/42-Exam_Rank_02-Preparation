char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	char	tmp;

	end = 0;
	while (str[end + 1])
		end++;
	start = 0;
	while (end >= start)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		end--;
		start++;
	}
	return (str);
}