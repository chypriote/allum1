NAME=	allum1

SRC=	main.c \
	player.c \
	computer.c \
	options.c \
	game.c \
	display.c \
	lib.c \
	my_atoi.c \
	get_next_line.c \
	my_strcpy.c \

OBJ=	$(SRC:.c=.o)

CC=	cc -g3

RM=	rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:		all clean fclean re