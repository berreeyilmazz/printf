/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:26:22 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/31 19:59:34 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdecimal(unsigned int u)
{
	int	i;

	i = 0;
	if (u <= 9)
		i += ft_putchar(u + 48);
	else
	{
		i += ft_printdecimal(u / 10);
		i += ft_printdecimal(u % 10);
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb >= 0 && nb <= 9)
		i += ft_putchar(nb + '0');
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		i += ft_putchar('-');
		i += ft_putnbr(nb * (-1));
	}
	else
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	return (i);
}
