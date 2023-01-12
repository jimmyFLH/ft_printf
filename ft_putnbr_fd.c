/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:09:21 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/09 15:18:22 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_fd(int n, int fd, unsigned int *count)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
		(*count)++;
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd, count);
		number = number % 10;
	}
	ft_putchar_fd((48 + number), fd);
	(*count)++;
	return (*count);
}
