/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:25:23 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/31 20:00:49 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatter(char t, va_list arg)
{
	int	i;
	i = 0;

	if (t == 'c')
		i += ft_putchar (va_arg (arg, int));
	if (t == 's')
		i += ft_putstr (va_arg (arg, char *));
	if (t == 'p')
	{
		i += ft_putstr ("0x");
		i += ft_printlower (va_arg(arg, unsigned long));
	}
	if (t == 'd' || t == 'i')
		i += ft_putnbr(va_arg(arg, int));
	if (t == 'u')
		i += ft_printdecimal(va_arg(arg, unsigned int));
	if (t == 'x')
		i += ft_printlower (va_arg(arg, unsigned int));
	if (t == 'X')
		i += ft_printupper (va_arg(arg, unsigned int));
	if (t == '%')
		i += ft_putchar ('%');
	return (i);
}

int ft_printf(const char *str, ...)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	va_list	lst;
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			while (str[i] == ' ' && str[i])
			{
				i++;
				j++;
			}
			j += ft_formatter(str[i], lst);
		}
		else
			j += ft_putchar(str[i]);
		i++;
	}
	va_end(lst);
	return (j);
}
