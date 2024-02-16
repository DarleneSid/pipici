NAME		=	PolymprphismAndBrain

SRC			=	Animal.cpp Cat.cpp Dog.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		=	-Wall -Wextra -Werror -g3 -std=c++98

EXE_NAME	=	-o PolymorphismAndBrain

EXEC		=	PolymorphismAndBrain


all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all