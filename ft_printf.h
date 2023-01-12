/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:45:30 by jboucher          #+#    #+#             */
/*   Updated: 2023/01/10 14:29:17 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <ctype.h>
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void			ft_check_cond(const char *str, va_list vaList, int *count);

unsigned int	ft_pfu(unsigned int n, int fd, unsigned int *count);
unsigned int	ft_puthexa_fd(unsigned int n, unsigned int fd,
					unsigned int *count);
unsigned int	ft_puthexu_fd(unsigned int n, int fd, unsigned int *count);
unsigned int	ft_putptr_fd(unsigned long n, int fd, unsigned int *count);
unsigned int	ft_putnbr_fd(int n, int fd, unsigned int *count);
unsigned int	ft_putunbr_fd(unsigned int n, int fd, unsigned int *count);

int				ft_print_char(const char *str, va_list vaList);
int				ft_print_num(const char *str, va_list vaList);
int				ft_print_string(const char *str, va_list vaList);
int				ft_print_hexa(const char *str, va_list vaList);

int				ft_putchar_fd(char c, int fd);
int				ft_putstr_fd(char *s, int fd);
int				ft_printf(const char *str, ...);

#endif