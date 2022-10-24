/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:22:33 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/24 19:49:48 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <unistd.h>

void	ft_putchar(int a)
{
	write(1, &a, 1);
}

int	ft_printp(int a)
{
	if (a > 15)
	{
		ft_printp(a / 16);
		ft_printp(a % 16);
	}
	if (a >= 10 && a <= 15)
	{
		a = a + 87;
		ft_putchar(a);
	}
	if (a >= 0 && a <= 9)
	{
		a = a + 48;
		ft_putchar(a);
	}



	return (0);
}
