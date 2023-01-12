/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:11:15 by jimmyfleisc       #+#    #+#             */
/*   Updated: 2023/01/09 18:01:57 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_puthexa_fd(unsigned int n, unsigned int fd,
		unsigned int *count)
{
	long long	nb;
	char		c;
	char		*str;

	nb = n;
	str = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_puthexa_fd(nb / 16, fd, count);
		nb = nb % 16;
	}
	c = str[nb % 16];
	ft_putchar_fd(c, fd);
	(*count)++;
	return (*count);
}
