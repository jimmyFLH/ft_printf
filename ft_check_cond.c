/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cond.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:46:08 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/09 18:06:38 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_cond(const char *str, va_list valist, int *count)
{
	int	len;

	len = 0;
	if (*str == 's')
	{
		len = ft_print_string(str, valist);
		(*count) += len;
	}
	else if (*str == 'd' || *str == 'i' || *str == 'u')
	{
		len = ft_print_num(str, valist);
		(*count) += len;
	}
	else if (*str == 'c' || *str == '%')
	{
		ft_print_char(str, valist);
	}
	else if (*str == 'x' || *str == 'X' || *str == 'p')
	{
		len = ft_print_hexa(str, valist);
		(*count) += len;
	}
}
