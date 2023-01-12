/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:32:39 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/09 16:55:37 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putunbr_fd(unsigned int n, int fd, unsigned int *count)
{
	unsigned long	nb;

	nb = n;
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd, count);
		nb = nb % 10;
	}
	ft_putchar_fd((48 + nb), fd);
	(*count)++;
	return (*count);
}
