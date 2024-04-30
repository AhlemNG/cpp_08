# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouri <anouri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 17:56:46 by anouri            #+#    #+#              #
#    Updated: 2024/04/30 15:57:38 by anouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= easyfind

INCDIR= -I./incs

SRCDIR= ./srcs

# BUILDDIR= ./objs

CXX= c++

CXXFLAGS= -Wall -Werror -Wextra -std=c++98 ${INCDIR} 

SRCS = ${SRCDIR}/main.cpp

OBJS = ${SRCS:.cpp=.o}

RM= rm -rf

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -g -o $@

all: ${NAME}

%.o:%.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.Phony: clean fclean re