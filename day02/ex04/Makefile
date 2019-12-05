NAME	=	eval_expr
CMPL	=	clang++
CFLG	=	$(addprefix -W, all extra error)
BNSD	=	bonus_part
OBJD	=	obj

SRCS	=	Fixed.cpp\
			main.cpp\

OBJS	=	$(addprefix $(OBJD)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
		@$(CMPL) $(CFLG) -o $(NAME) $^
		@echo " eval_expr is ready"

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
