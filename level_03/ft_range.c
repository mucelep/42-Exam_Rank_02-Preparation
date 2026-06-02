#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	int	size;
	int	i;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (start <= end)
			arr[i++] = start++;
		else
			arr[i++] = start--;
	}
	return (arr);
}

int main()
{
	int *arr;
	arr = ft_range(0,-3);
	int	i = 0;
	while (i < 4)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	free(arr);
}