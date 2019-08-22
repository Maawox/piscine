#include "ft_list.h"

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list **begin_list;
	t_list *list;
	int x;

	x = 0;
	while (str[x])
	{
		ft_list_push_front(begin_list, strs[x]);
		x++;
	}
	list = *begin_list;
	return(list);	
}