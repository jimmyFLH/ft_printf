/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:19:25 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/09 16:59:47 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putptr_fd(unsigned long n, int fd, unsigned int *count)
{
	char	c;
	char	*str;

	str = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putptr_fd(n / 16, fd, count);
	}
	c = str[n % 16];
	ft_putchar_fd(c, fd);
	(*count)++;
	return (*count);
}
