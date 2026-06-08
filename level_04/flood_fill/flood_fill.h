#ifndef FLOOD_FİLL_H
# define FLOOD_FİLL_H

typedef struct  s_point
{
	int		x;
	int		y;
}			t_point;

void	flood_fill(char **tab, t_point size, t_point begin);

#endif