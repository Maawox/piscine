#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *list;

	list = NULL;
	list = malloc(sizeof(t_list));
	if (list)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}