# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 12:46:50 by ghenriqu          #+#    #+#              #
#    Updated: 2025/04/17 19:05:41 by ghenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# name:
NAME = libft.a

# compiler and flags:
CC = cc
CFLAGS = -Wall -Wextra -Werror

# basic and additional files:
SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

OBJ = $(SRC:.c=.o)

# bonus files:
SRCB = 	ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c

OBJB = $(SRCB:.c=.o)

RM = rm -rf

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
	$(RM) $(OBJ) $(OBJB)

# clean everything, .o and libft.a:
fclean: clean
	$(RM) $(NAME)

# recompile all:
re: fclean all

bonus: $(OBJB)
	@make OBJ="$(OBJB)" all

.PHONY: all re clean fclean
