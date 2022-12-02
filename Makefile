# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 14:49:28 by ccoste            #+#    #+#              #
#    Updated: 2022/12/02 12:52:24 by ccoste           ###   ########.fr        #
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

LIBFT= libft

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER_DIR)
		make -C $(LIBFT)
		cp libft/libft.a .
		mv libft.a $(NAME)
		$(CC) $(CFLAGS) -c $(SRC)
		ar -rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) -o $@ -c $^

clean :
	rm -rf $(OBJ)
	make clean -C $(LIBFT)

fclean : clean
	rm -rf $(NAME)
	rm -rf $(LIBFT)/libft.a

re : fclean all

.PHONY : fclean clean
