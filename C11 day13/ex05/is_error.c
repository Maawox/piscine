/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 20:57:10 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/21 21:01:49 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	is_error(char c)
{
	if (c == '/')
		write(1, "Stop : division by zero\n", 24);
	else if (c == '%')
		write(1, "Stop : modulo by zero\n", 22);
}
