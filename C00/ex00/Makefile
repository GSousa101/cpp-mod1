NAME		=	megaphone	
##MAKEFLAGS	:= --silent

####	Compilers & flags	####
CC		:=	c++
CFLAGS	:=	-Wextra -Wall -Werror -std=c++98

# Colors
BLACK	=	\033[0;30m
BLUE	=	\033[0;34m
CYAN	=	\033[0;36m
GREEN	=	\033[0;32m
MAGENTA	=	\033[1;35m
ORANGE	=	\033[1;38;5;214m
RED		=	\033[0;31m
RESET	=	\033[0m
WHITE	=	\033[0;37m
YELLOW	=	\033[0;33m

######	Commands	######

all:	$(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $@.cpp -o $@ 
	@echo "$(GREEN) $(NAME) created$(RESET)🗑"
	
clean:
	@echo "$(YELLOW) $(NAME) Wiped out $(RESET)🗑"
	@rm -rf $(NAME)

fclean:	clean

re: fclean all

.PHONY: re, fclean, clean, all
