NAME		= Polymorphism
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror

SRCS		=	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \


OBJS		= $(SRCS:.cpp=.o)


RED			= \033[0;31m
GREEN		= \033[0;32m
CRYAN		= \033[0;36m
RESET		= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Compiling $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled successfully!$(RESET)"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Cleaning $(NAME) object files...$(RESET)"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(RED)Cleaning $(NAME)...$(RESET)"
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
