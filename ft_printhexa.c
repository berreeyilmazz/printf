/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:22:33 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/26 22:50:47 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int a)
{
	write(1, &a, 1);
	return (1);
}

int	ft_printlower(unsigned long a)
{
	int	i;

	i = 0;
	if (a > 15)
	{
		ft_printx(a / 16);
		ft_printx(a % 16);
	}
	if (a >= 10 && a <= 15)
	{
		a = a + 87;
		ft_putchar(a);
		i += 1;
	}
	if (a >= 0 && a <= 9)
	{
		a = a + 48;
		ft_putchar(a);
		i += 1;
	}
	return (i);
}

int	ft_printupper(unsigned long a)
{
	if (a > 15)
	{
		ft_printxx(a / 16);
		ft_printxx(a % 16);
	}
	if (a >= 10 && a <= 15)
	{
		a = a + 55;
		ft_putchar(a);
	}
	if (a >= 0 && a <= 9)
	{
		a = a + 48;
		ft_putchar(a);
	}
	return (0);
}
