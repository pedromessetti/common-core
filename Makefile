.SILENT:
# Color variables
RED = \033[1;31m
GREEN = \033[1;32m
WHITE = \033[1;37m
RESET = \033[0m
NAME = libft.a

CC = cc

CME = ar -rcs

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c \
ft_strlcat.c \
ft_atoi.c \
ft_atoi_base.c \
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
ft_memset.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_calloc.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putnbr_fd.c \
ft_putendl_fd.c

SRCS_BONUS = ft_lstnew.c \
ft_lstadd_front.c \
ft_lstadd_back.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

$(NAME):	$(OBJS) $(OBJS_BONUS)
	$(CME) $(NAME) $(OBJS) $(OBJS_BONUS)
	echo "$(GREEN)[OK]$(NAME)$(RESET)"

all:	$(NAME)

clean: $(NAME)
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all

bonus:	$(SRCS_BONUS)
	$(CME) $(NAME) $(OBJS_BONUS)

compile:	re
	$(CC) main.c -L. -lft

run:	compile
	./a.out