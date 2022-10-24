/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:25:10 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/24 20:31:47 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <unistd.h>

void ft_printfu(unsigned int u)
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
	}
}

int main()
{
	ft_printfu(45);
}
