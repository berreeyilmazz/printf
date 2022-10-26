/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:25:23 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/26 22:53:34 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_formatter(char t, va_list arg)
{
	int	i;
	i = 0;

	if (t == 'c')
		i += ft_putchar (va_arg (arg, int));
	else if (t == 's')
		i += ft_putstr (va_arg (arg, char *));
	else if (t == 'p')
	{
		ft_putstr ("0x");
		i += 2;
		i += ft_printlower (va_arg(arg, unsigned long));
	}
	else if (t == 'd' || t == 'i')
		i += ft_putnbr (va_arg(arg, long));
	else if (t == 'u')
		i += ft_printfdecimal(va_arg(arg, unsigned int));
	else if (t == 'x')
		i += ft_printlower (va_arg(arg, unsigned int));
	else if (t == 'X')
		i += ft_printupper (va_arg(arg, unsigned int));
	else if (t == '%')
		i += ft_putchar ('%');
	return (i);
}

int ft_printf(const char *str, ...)
{
	int	i;
	i = 0;
	va_list	lst;
	va_start(lst, str);
	if (str)
	{
		while (str[i])
		{
			if (str[i] == '%')
				ft_formatter(str[++i], lst);
			else if (str[i] != '%')
				ft_putchar(str[i]);
			i++;
		}
	}
	va_end(lst);
	return (i);
}
