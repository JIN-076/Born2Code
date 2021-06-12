# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhong <jhong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 14:23:02 by jhong             #+#    #+#              #
#    Updated: 2021/06/12 17:55:50 by jhong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a

SRCDIR = srcs
BONUS_SRCDIR = bonus

INCDIR = -I ./

SOURCES = $(addprefix $(SRCDIR)/, ft_atoi.c\
								ft_bzero.c \
								ft_calloc.c \
								ft_isalnum.c \
								ft_isalpha.c \
								ft_isascii.c \
								ft_isdigit.c \
								ft_isprint.c \
								ft_memccpy.c \
								ft_memchr.c \
								ft_memcmp.c \
								ft_memcpy.c \
								ft_memmove.c \
								ft_memset.c \
								ft_strdup.c \
								ft_strlcat.c \
								ft_strlcpy.c \
								ft_strlen.c \
								ft_strncmp.c \
								ft_strnstr.c \
								ft_strrchr.c \
								ft_tolower.c \
								ft_toupper.c \
								ft_strchr.c \
								ft_substr.c \
								ft_strjoin.c \
								ft_strtrim.c \
								ft_split.c \
								ft_itoa.c \
								ft_strmapi.c \
								ft_putchar_fd.c \
								ft_putstr_fd.c \
								ft_putendl_fd.c \
								ft_putnbr_fd.c)
OBJECTS = $(SOURCES:.c=.o)

BONUS_SOURCES = $(addprefix $(BONUS_SRCDIR)/, ft_lstadd_back.c \
												ft_lstadd_front.c \
												ft_lstclear.c \
												ft_lstdelone.c \
												ft_lstiter.c \
												ft_lstlast.c \
												ft_lstmap.c \
												ft_lstnew.c \
												ft_lstsize.c)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@ $(INCDIR)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

bonus : $(BONUS_OBJECTS)
	ar rc $(NAME) $(BONUS_OBJECTS)

clean:
	rm -rf $(OBJECTS)
	rm -rf $(BONUS_OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
