##
## EPITECH PROJECT, 2018
## project
## File description:
## my makefile
##

CFLAGS		=	-Wall -Werror -I./
SRC		=	$(wildcard lib/my/*.c)
OBJ		=	$(SRC:.c=.o)

all: link

link: $(OBJ)
		@ar rcs libmy.a $(OBJ)
		@cp -f ./libmy.a ../libmy.a
		@echo -n "[ "
		@echo -n -e "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo -e "\e[1;31mCompiling finished!\e[0m"

debug: 	$(SRC)
		gcc -c -g $(SRC) $(CFLAGS)
		ar rcs libmy.a $(OBJ)

clean:
		@rm -f $(OBJ) ./libmy.a ../libmy.a
		@rm -f lib/my/*~
		@echo -n "[ "
		@echo -n -e "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo -e "\e[1;31mREMOVED THE BINARY FILE!\e[0m"


fclean: 	clean
		@echo -n "[ "
		@echo -n -e "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo -e "\e[1;31mForce clean is completed!\e[0m"


re: 		fclean all
		@echo -n "[ "
		@echo -n -e "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo -e "\e[1;31mForce make is completed!\e[0m"


.PHONY: 	all obj link clean fclean re
