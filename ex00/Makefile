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

NAME = fixed

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -MMD -MP

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)


.PHONY: all
all : $(NAME)

-include $(DEPS)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
		rm -f *.o
		rm -f *.d

.PHONY: fclean
fclean:	clean
		rm -f $(NAME)

.PHONY: re
re:		fclean all

