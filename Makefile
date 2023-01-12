# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 15:55:03 by jboucher          #+#    #+#              #
#    Updated: 2023/01/10 14:31:21 by jboucher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS 	=	ft_check_cond.c ft_printf.c ft_print_char.c ft_print_num.c \
			ft_print_string.c  ft_putchar_fd.c ft_putstr_fd.c\
			ft_print_hexa.c ft_puthexu_fd.c ft_puthexa_fd.c ft_putnbr_fd.c \
			ft_putptr_fd.c ft_putunbr_fd.c\


OBJS		=	${SRCS:.c=.o}

CC 		=	gcc

RM		=	rm -f

CFLAGS 	=	-Wall -Werror -Wextra

NAME 	=	libftprintf.a

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	ar rcs ${NAME} ${OBJS}

all	:		${NAME}

clean		:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re			:		fclean all

.PHONY	:	all clean fclean re