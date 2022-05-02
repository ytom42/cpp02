# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytomiyos <ytomiyos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 08:44:19 by ytomiyos          #+#    #+#              #
#    Updated: 2022/04/21 17:33:05 by ytomiyos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -MMD -MP

NAME = fixed

SRCS = Fixed.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

-include $(DEPS)

all : $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $@ $^

clean:
		rm -f *.o
		rm -f *.d

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re

