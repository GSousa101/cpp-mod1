NAME		=	serialize

## --------------------------------- COMPILERS & FLAGS ----------------------------------
CXX			:=	c++
CPPFLAGS	:=	-Wextra -Wall -Werror -std=c++98

## --------------------------------- SOURCE ----------------------------------
FILES		:=	Serializer

SOURCE		:=	$(addprefix source/, $(FILES))	\
				main

SOURCES		:=	$(addsuffix .cpp, $(SOURCE))

## --------------------------------- COLORS ----------------------------------
CYAN	=	\033[0;36m
GREEN	=	\033[0;32m
MAGENTA	=	\033[1;35m
RED		=	\033[0;31m
RESET	=	\033[0m
YELLOW	=	\033[0;33m

## --------------------------------- COMMANDS ----------------------------------

all:	$(NAME)

$(NAME): $(SOURCES)
	@$(CXX) $(CPPFLAGS) $(SOURCES) -o $@ 
	@echo " $(CYAN)$(NAME) $(GREEN)created and ready to be execute$(RESET)"
	
clean:
	@echo "$(CYAN) $(NAME) $(YELLOW)wiped out $(RESET)🗑"
	@rm -rf $(NAME)

fclean:	clean

re: fclean all

.PHONY: re, fclean, clean, all
