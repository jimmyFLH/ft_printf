/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:46:01 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/07 16:31:39 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(const char *str, va_list valist)
{
	int		count;
	int		arg;

	count = 0;
	if (*str == 'c')
	{
		arg = va_arg(valist, int);
		ft_putchar_fd(arg, 1);
		count++;
	}
	if (*str == '%')
	{
		ft_putchar_fd('%', 1);
		count++;
	}
	str++;
	return (count);
}
