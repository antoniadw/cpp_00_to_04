NAME = Interface
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCDIR = srcs/
OBJDIR = objs/

SRC = 	AMateria.cpp		\
		Character.cpp		\
		Cure.cpp			\
		Ice.cpp				\
		main.cpp			\
		MateriaSource.cpp	\

SRCS = $(addprefix $(SRCDIR), $(SRC))
OBJS = $(addprefix $(OBJDIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) compiled ✅"

$(OBJDIR)%.o: $(SRCDIR)%.cpp
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