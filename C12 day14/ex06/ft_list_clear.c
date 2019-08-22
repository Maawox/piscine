#include "ft_list.h"

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
{
	t_list *list;

	list = begin_list;
	while(list)
	{
		(*free_fct)(list.data);
		list = list->next;
	}	
}