NAME		=	clapTrap

## --------------------------------- COMPILERS & FLAGS ----------------------------------
CXX		:=	c++
CPPFLAGS	:=	-Wextra -Wall -Werror -std=c++98

## --------------------------------- SOURCE ----------------------------------
FILES		:=	ClapTrap.cpp

SOURCE		:=	$(addprefix source/, $(FILES))	\
				main.cpp
## --------------------------------- COLORS ----------------------------------
CYAN	=	\033[0;36m
GREEN	=	\033[0;32m
MAGENTA	=	\033[1;35m
RED		=	\033[0;31m
RESET	=	\033[0m
YELLOW	=	\033[0;33m

## --------------------------------- COMMANDS ----------------------------------

all:	$(NAME)

$(NAME): $(SOURCE)
	@$(CXX) $(CPPFLAGS) $(SOURCE) -o $@ 
	@echo "$(GREEN) $(NAME) created$(RESET)"
	
clean:
	@echo "$(YELLOW) $(NAME) Wiped out $(RESET)🗑"
	@rm -rf $(NAME)

fclean:	clean

re: fclean all

.PHONY: re, fclean, clean, all
