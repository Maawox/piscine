/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:43:18 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/22 14:59:43 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

int		ft_atoi(const char *str);
int		ft_add(int a, int b);
int		ft_div(int a, int b);
int		ft_sub(int a, int b);
int		ft_mod(int a, int b);
int		ft_mul(int a, int b);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	is_error(char c);
void	do_op(char c, int (*f)(int, int), int a, int b);

#endif
