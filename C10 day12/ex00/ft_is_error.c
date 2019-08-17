#include "ft_display_file.h"

int ft_is_error(int ac, int fd)
{
	char *msg_missing_arg;
	char *msg_many_arg;
	char *msg_file_error;

	msg_missing_arg = "File name missing.\n";
	msg_many_arg = "Too many arguments.\n";
	msg_file_error  = "Cannot read file.\n";
	if (ac != 2)
	{
		if (ac < 2)
			ft_putstr(msg_missing_arg);
		else if (ac > 2)
			ft_putstr(msg_many_arg);
		return (1);
	}	
	if (fd == -1)
	{
		ft_putstr(msg_file_error);
		return (1);
	}
	return (0);

}