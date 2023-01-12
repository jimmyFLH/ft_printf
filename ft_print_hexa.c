/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:45:55 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/09 18:21:48 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex(const char *str, va_list valist)
{
	unsigned int	hexnum;
	unsigned int	count;

	count = 0;
	hexnum = va_arg(valist, unsigned int);
	count = ft_puthexa_fd(hexnum, 1, &count) - 1;
	str++;
	return (count);
}

static int	ft_print_hexu(const char *str, va_list valist)
{
	unsigned int	lenght;
	unsigned int	count;

	count = 0;
	lenght = va_arg(valist, unsigned int);
	count = ft_puthexu_fd(lenght, 1, &count) - 1;
	str++;
	return (count);
}

int	ft_print_hexa(const char *str, va_list valist)
{
	unsigned int	count;
	unsigned long	ptrnbr;

	count = 0;
	if (*str == 'x')
		count = ft_print_hex(str, valist);
	else if (*str == 'X')
		count = ft_print_hexu(str, valist);
	else
	{
		ptrnbr = va_arg(valist, unsigned long);
		ft_putchar_fd('0', 1);
		ft_putchar_fd('x', 1);
		if (ptrnbr == '0')
		{
			ft_putchar_fd('0', 1);
			count = +1;
		}
		else
			count = ft_putptr_fd(ptrnbr, 1, &count) + 1;
		str++;
	}
	return (count);
}
