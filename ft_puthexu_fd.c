/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexu_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:57:17 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/07 16:44:28 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_puthexu_fd(unsigned int n, int fd, unsigned int *count)
{
	unsigned long	number;
	char			c;
	char			*str;

	str = "0123456789ABCDEF";
	number = n;
	if (number >= 16)
	{
		ft_puthexu_fd(number / 16, fd, count);
		number = number % 16;
	}
	c = str[number % 16];
	ft_putchar_fd(c, fd);
	(*count)++;
	return (*count);
}
