# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 14:49:28 by ccoste            #+#    #+#              #
#    Updated: 2022/12/01 17:08:08 by ccoste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_formats.c \
	ft_formats_c.c \
	ft_formats_p.c \
	ft_formats_s.c \
	ft_formats_di.c \
	ft_formats_u.c \
	ft_formats_xX.c \
	ft_printf.c

OBJ= $(SRC:.c=.o)

HEADER_DIR = .

all: $(NAME)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@ -I $(HEADER_DIR)

$(NAME) : $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(NAME)

re : fclean all

.PHONY : fclean clean
