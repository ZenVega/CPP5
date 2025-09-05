# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/10 10:00:21 by uschmidt          #+#    #+#              #
#    Updated: 2025/09/05 12:32:46 by uschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= intern 

SRC_FOLDER	= ./
OBJ_FOLDER	= build/

CFILES		:=
vpath %.cpp $(SRC_FOLDER)
CFILES += main.cpp

vpath %.cpp $(SRC_FOLDER)Bureaucrat
CFILES += Bureaucrat.cpp

vpath %.cpp $(SRC_FOLDER)Intern
CFILES += Intern.cpp

vpath %.cpp $(SRC_FOLDER)AForm
CFILES += AForm.cpp

vpath %.cpp $(SRC_FOLDER)RobotomyRequestForm
CFILES += RobotomyRequestForm.cpp

vpath %.cpp $(SRC_FOLDER)ShrubberyCreationForm
CFILES += ShrubberyCreationForm.cpp

vpath %.cpp $(SRC_FOLDER)PresidentialPardonForm
CFILES += PresidentialPardonForm.cpp

OFILES      = $(addprefix $(OBJ_FOLDER), $(notdir $(CFILES:.cpp=.o)))

CC			= c++

CFLAGS		= -g -Wall -Wextra -Werror -std=c++98 -Wshadow

all: $(NAME) 

run: $(NAME) 
	./$(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) -o $(SRC_FOLDER)$(NAME) $(OFILES)

$(OBJ_FOLDER)%.o: %.cpp $(DEPS)
	mkdir -p $(OBJ_FOLDER)
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	rm -f $(OFILES)
	find $(SRC_FOLDER) -name "*.o" -delete

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
