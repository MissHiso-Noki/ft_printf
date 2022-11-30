# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 13:41:19 by ccoste            #+#    #+#              #
#    Updated: 2022/11/24 11:40:33 by ccoste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c \
	ft_isprint.c \
	ft_putchar_fd.c \
	ft_bzero.c \
	ft_putendl_fd.c \
	ft_strjoin.c \
	ft_strrchr.c \
	ft_memchr.c \
	ft_strlcat.c \
	ft_strtrim.c \
	ft_isalnum.c \
	ft_memcmp.c \
	ft_putstr_fd.c \
	ft_strlcpy.c \
	ft_substr.c \
	ft_isalpha.c \
	ft_memcpy.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_isascii.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_toupper.c \
	ft_isdigit.c \
	ft_memset.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_itoa.c \
	ft_calloc.c \
	ft_putnbr_fd.c \
	ft_strnstr.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_split.c

SRC_BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

OBJ= $(SRC:.c=.o)

BONUS_OBJ= $(SRC_BONUS:.c=.o)

HEADER_DIR = .

all: $(NAME)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@ -I $(HEADER_DIR)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)
		randlib $(NAME)

bonus: $(OBJ) $(BONUS_OBJ)
		ar rc $(NAME) $(OBJ) $(BONUS_OBJ)


clean :
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(SRC_BONUS)
# 	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUS_OBJ)
