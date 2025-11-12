NAME = phonebook
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = 	Contact.cpp		\
		main.cpp		\
		PhoneBook.cpp	\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) compiled ✅"

%.o: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "Clean done."

fclean: clean
	@$(RM) $(NAME)
	@echo "Full clean done."

re: fclean all

.PHONY: all clean fclean re