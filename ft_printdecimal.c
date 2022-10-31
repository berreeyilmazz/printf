/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:25:10 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/31 16:50:18 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdecimal(unsigned int i)
{
	int	a;

	a = 0;
	if (i > 10)
	{
		a += ft_printdecimal (i / 10);
		a += ft_printdecimal (i % 10);
	}
	if (i >= 0 && i <= 9)
	{
		i += 48;
		a += ft_putchar(i);
	}
	return (a);
}
