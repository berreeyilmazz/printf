/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:51:00 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/26 22:52:40 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>

int	ft_putnbr(int i)
{
	int	count;
	count = 0;
	if (i < 0)
	{
		int	minus;
		minus = 45;
		write (1, &minus, 1);
		i *= -1;
		count++;
	}
	if (i > 10)
	{
		ft_putnbr (i / 10);
		ft_putnbr (i % 10);
	}
	if (i >= 0 && i <= 9)
	{
		i += 48;
		write (1, &i, 1);
		count++;
	}
	return (count);
}
