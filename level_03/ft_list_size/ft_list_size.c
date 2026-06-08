#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int	len;

	while (begin_list)
	{
		len++;
		begin_list = begin_list->next;
	}
	return (len);
}