# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 12:23:08 by pmessett          #+#    #+#              #
#    Updated: 2023/04/12 17:13:33 by pmessett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CME = ar -rcs

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c \
ft_strlcat.c \
ft_atoi.c \
ft_isalnum.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_split.c \
ft_strdup.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
ft_bzero.c \
ft_strchr.c \
ft_strrchr.c \
ft_memcpy.c \
ft_memset.c 

OBJ = $(SRC:.c=.o)

$(NAME):	$(OBJ)
					$(CME) $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f *.o

fclean:	clean
						rm -f $(NAME)

re:
	fclean all