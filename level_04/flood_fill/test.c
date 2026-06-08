#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

//**zone read-only bellekte oldugu için üzerinde degisiklik yapabilmek adına malloc ile yer açıyor
char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);// kac kelime varsa o kadar yer ayırıyor
	for (int i = 0; i < size.y; ++i)//tüm kelimeleri geziyor
	{
		new[i] = malloc(size.x + 1);// kaç harf varsa + 1 kadar yer acıyor
		for (int j = 0; j < size.x; ++j)//harf sayısı bitene kadar ilerliyor
			new[i][j] = zone[i][j];//karakterleri dolduruyor
		new[i][size.x] = '\0';//sonuna null koyuyor
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
