/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:45:49 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/10 14:36:56 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_pfu(unsigned int n, int fd, unsigned int *count)
{
	unsigned int	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
		(*count)++;
	}
	if (number >= 10)
	{
		ft_pfu(number / 10, fd, count);
		number = number % 10;
	}
	ft_putchar_fd((48 + number), fd);
	(*count)++;
	return (*count);
}

int	ft_print_num(const char *str, va_list valist)
{
	int				num;
	unsigned int	count;
	unsigned int	unsnumber;

	count = 0;
	if (*str == 'd' || *str == 'i')
	{
		num = va_arg(valist, int);
		count = ft_putnbr_fd(num, 1, &count) - 1;
		str++;
	}
	else if (*str == 'u')
	{
		unsnumber = va_arg(valist, unsigned int);
		count = ft_pfu(unsnumber, 1, &count) - 1;
		str++;
	}
	return (count);
}
