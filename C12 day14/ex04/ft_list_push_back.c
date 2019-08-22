#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (*begin_list)
	{	
		list = ft_create_elem(data);
		list = ft_list_last(*begin_list);
	}
	else
		*begin_list = ft_create_elem(data);	 
}