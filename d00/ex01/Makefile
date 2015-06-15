CC = clang++
NAME = phonebook
CFLAGS = -Wextra -Wall -Werror

SRC_MAIN = main.cpp \
		   ft_menu.cpp

SRC_CLASS = Contact.class.cpp

SRC = $(SRC_MAIN)
SRC += $(addprefix class/, $(SRC_CLASS))

HEADER = includes/phonebook.hpp \
		 class/includes/Contact.class.hpp
DIR_HEADERS = -I includes/ \
			  -I class/includes

OBJ = $(SRC:%.cpp=.obj/%.o)

OBJ_DIR = .obj/ \
		  .obj/class/

.PHONY: all libs clean fclean re

all: dor $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $@ $^
	@echo "\033[32mReady!\033[0m"

dor:
	@mkdir $(OBJ_DIR) 2> /dev/null || env -i

.obj/%.o: %.cpp $(HEADER)
	@echo "\033[33m 	$<"
	@$(CC) $(CFLAGS) -o $@ $(DIR_HEADERS) -c $<

clean:
	@rm -f $(OBJ)
	@rmdir $(OBJ_DIR) 2> /dev/null || env -i

fclean: clean
	@rm -f $(NAME)

re: fclean all
