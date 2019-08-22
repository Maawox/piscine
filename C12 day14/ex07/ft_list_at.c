#include "ft_list.h"


t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *list;
	int i;

	list = begin_list;
	i = 0;
	while (i < nbr)
	{
		list = list->next;
		i++;
	}
	return (list);
}