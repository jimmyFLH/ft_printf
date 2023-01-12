/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:45:39 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/06 16:05:11 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)

{
	int		count;
	va_list	valist;

	count = 0;
	va_start(valist, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_check_cond(str, valist, &count);
			str++;
			count++;
		}
		else
		{
			ft_putchar_fd(*str, 1);
			str++;
			count++;
		}
	}
	va_end(valist);
	return (count);
}
