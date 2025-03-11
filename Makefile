# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 10:57:54 by ghenriqu          #+#    #+#              #
#    Updated: 2025/03/11 10:57:54 by ghenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# name:
NAME = libft.a

# compiler and flags:
CC = CC
CFLAGS = -Wall -Wextra - Werror

# files:
SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# .o files:
OBJ = $(SRC:.c=.o)

# standard rule:
all: $(NAME)

# compile and create the lib:
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# compile .o:
%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

# clean files:
clean:
	rm -f $(OBJ)

# clean everything, .o and libft.a:
fclean: clean
	rm -f $(NAME)

# recompile all:
re: fclean all
