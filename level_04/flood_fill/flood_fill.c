#include "flood_fill.h"

static void	fill(char **tab, t_point size, t_point begin, char target)
{
	if (begin.y < 0 || begin.x < 0 || begin.y >= size.y || begin.x >= size.x)
		return ;// sınır kontrolü sınırlar içinde degilse cık
	if (target != tab[begin.y][begin.x])
		return ;//sadece baslangıc karakterini f yapıcaz o yüzden farklıysa cık tekrardan f e gelirse de buraya girer
	tab[begin.y][begin.x] = 'F';//karakteri F yap
	fill(tab, size, (t_point){begin.x - 1, begin.y}, target); // 4 yöne de gez
	fill(tab, size, (t_point){begin.x + 1, begin.y}, target);
	fill(tab, size, (t_point){begin.x, begin.y - 1}, target);
	fill(tab, size, (t_point){begin.x, begin.y + 1}, target);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	// ** olan tab ın tab[1][3] seklinde baslangıc karakterini target de tutuyoruz
	fill(tab, size, begin, tab[begin.y][begin.x]);
	return ;
}
