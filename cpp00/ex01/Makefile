NAME = phonebook
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
OBJDIR = objs/

SRC = 	Contact.cpp		\
		main.cpp		\
		PhoneBook.cpp	\

OBJS = $(addprefix $(OBJDIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) compiled ✅"

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CPP) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR)
	@echo "Clean done."

fclean: clean
	@$(RM) $(NAME)
	@echo "Full clean done."

re: fclean all

.PHONY: all clean fclean re