NAME	=	ex03
CLANG	=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic

SRCS	= 	./main.cpp \
			./AMateria.cpp \
			./Character.cpp \
			./Cure.cpp \
			./Ice.cpp \
			./MateriaSource.cpp

OBJS	= $(SRCS:.cpp=.o)
RM		= rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CLANG) $(CFLAGS) -o $@ $^

%.o : %.cpp
	$(CLANG) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)
	@echo "Object files removed."

fclean : clean
	$(RM) $(NAME)
	@echo "Executable file removed."

re : fclean all

.PHONY : all clean fclean re