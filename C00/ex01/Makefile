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
	$(CC) $(CFLAGS) $<.cpp -o $< 

clean: fclean
	@echo $(YELLOW) $(NAME) Wiped out $(RESET)🗑

fclean:	clean
	@rm -rf $(NAME)

re: fclean all

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --trace-children=yes --track-fds=yes ./minishell

.PHONY: re, fclean, clean, all
