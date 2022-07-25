SOURCES = functions/ft_.c			\
		  main.c

OBJECTS = ${SOURCES : .c = .o}

NAME = bsq

cc = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJECTS)
			$(cc) $(CFLAGS) $^ -o $@

.c .o :
	$(cc) $(CFLAGS) -I./includes -c $< -o ${<:.c = .o}

clean : rm -f $(OBJECTS)

fclean : clean
		@ rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
