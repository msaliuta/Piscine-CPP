NAME	=	serialize
CMPL	=	clang++
CFLG	=	$(addprefix -W, all extra error)
OBJD	=	obj

SRCS	=	serialize.cpp\

OBJS	=	$(addprefix $(OBJD)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
		@$(CMPL) $(CFLG) -o $(NAME) $^
		@echo " serialize is ready"

$(OBJD)/%.o: %.cpp | $(OBJD)
		@$(CMPL) $(CFLG) -c $< -o $@
		@echo ".\c"

$(OBJD):
		@mkdir -p $(OBJD)
		@echo "preparing \c"

clean:
		@rm -rf $(OBJD)

fclean: clean
		@rm -f $(NAME)

re:
		@$(MAKE) fclean
		@$(MAKE) all

.PHONY: all clean fclean re
