NAME = megaphone

SRCS 	=	megaphone.cpp

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@clang++ -o $(NAME) $(FLAGS) $(OBJ)
		@echo "megaphone done"

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all
