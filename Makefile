NAME = game

SRCS = main.c \
		moves.c \
		players.c \
		ft_itoa.c \
		
		

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra  -lmlx -framework OpenGL -framework AppKit -g3 -fsanitize=address
CFLAGS = -Wall -Werror -Wextra 

CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS)  $(OBJS) libft.a -o $(NAME)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
		./game

.PHONY: all, clean, fclean, re