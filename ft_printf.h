/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:09:02 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/31 20:00:27 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_formatter(char t, va_list arg);
int		ft_putchar (int a);
int		ft_printdecimal(unsigned int i);
int		ft_printlower(unsigned long a);
int		ft_printupper(unsigned long a);
int		ft_putstr(char *str);
int		ft_strlen(char *tab);
int		ft_putnbr(int nb);
#endif
