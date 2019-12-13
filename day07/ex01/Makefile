NAME	=	iter
CMPL	=	clang++
CFLG	=	$(addprefix -W, all extra error)
BNSD	=	bonus_part
#SRCD	=	src
#INCD	=	inc
OBJD	=	obj
#INCS	=	-I$(addprefix $(LIBD)/, $(INCD)) -I $(INCD)

SRCS	=	iter.cpp\

OBJS	=	$(addprefix $(OBJD)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
		@$(CMPL) $(CFLG) -o $(NAME) $^
		@echo " ex01 is ready"

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
