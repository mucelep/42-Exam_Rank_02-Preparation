#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	while (*begin_list)
	{
		if (!cmp((*begin_list)->data, data_ref))
		{
			tmp = *begin_list;
			*begin_list = tmp->next;
			free(tmp);
		}
		else
			begin_list = &(*begin_list)->next;// ikiside **
	}
}
// *begin->next olmuyor cunku *(a->data) | (*begin)-> olması lazım
// a yı struct olarak kullanmaya calısıyor | a bir pointer | öncelik sırası ->   >   *


//* * * * (*begin_list) ilerletilseydi dısarıdaki liste degisirdi
//- else durumunda begin_list ilerliyor — artık bir sonraki node'un next alanının adresini gösteriyor.
// Sonunda listenin son node'una gelince:
// *begin_list == NULL  // son node'un next'i NULL
// begin_list dışarıdaki orijinal pointer değil artık, listenin içindeki bir next alanını gösteriyor. O next NULL olunca while durur.

// Yani while şunu kontrol ediyor:

// Başta → dışarıdaki pointer'ın değeri
// Sonra → listenin içindeki next alanlarının değeri

// begin_list'in gösterdiği yer değişiyor ama dışarıdaki orijinal pointer bozulmuyor.