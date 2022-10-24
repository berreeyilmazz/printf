/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:51:00 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/24 20:24:07 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <unistd.h>

void	ft_putnbr(int i)
{
	if (i < 0)
	{
		int	minus;
		minus = 45;
		write (1, &minus, 1);
		i *= -1;
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
	}
}
