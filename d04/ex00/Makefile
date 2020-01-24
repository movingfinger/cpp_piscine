NAME = ex00
FLAG = -Wextra -Werror -Wall -Wno-unused

all: $(NAME)

$(NAME):
		@clang++ $(FLAG) *.cpp -o $(NAME)

clean:
		/bin/rm -f *.o
fclean:	clean
		/bin/rm -f $(NAME)

re: fclean all

