/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:25:10 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/26 22:50:31 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>

int ft_printdecimal(unsigned int i)
{
	if (i > 10)
	{
		ft_putnbr (i / 10);
		ft_putnbr (i % 10);
	}
	if (i >= 0 && i <= 9)
	{
		i += 48;
		write (1, &i, 1);
		i += 1;
	}
	return (i);
}
