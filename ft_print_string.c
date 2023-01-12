/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:45:44 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/09 17:43:30 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(const char *str, va_list valist)
{
	int		count;
	int		len;
	char	*pstr;

	count = 0;
	pstr = va_arg(valist, char *);
	if (!pstr)
	{
		ft_putstr_fd("(null)", 1);
		count += 5;
		str++;
	}
	else
	{
		len = ft_putstr_fd(pstr, 1);
		count += len - 1;
		str++;
	}
	return (count);
}
