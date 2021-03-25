#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2021/03/22 18:21:58 by atemfack          #+#    #+#             *#
#*   Updated: 2021/03/24 19:35:52 by atemfack         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME				= phonebook
SRCS				= main.cpp phonebook.class.cpp contact.class.cpp
OBJS				= $(subst .cpp,.o,$(SRCS))
HEADERS				= phonebook.class.hpp contact.class.hpp
CC					= clang++
CPPFLAGS			= -std=c++98 -Wall -Wextra -Werror
MAXPHONEBOOKSIZE	= 2

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) -D MAXPHONEBOOKSIZE=$(MAXPHONEBOOKSIZE) -o $@ $^

%.o:		%.cpp $(HEADERS)
			$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

f:			all clean

.PHONY:		all clean fclean re f
