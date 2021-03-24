#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2021/03/22 18:21:58 by atemfack          #+#    #+#             *#
#*   Updated: 2021/03/22 18:36:03 by atemfack         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME		= megaphone
SRCS		= megaphone.cpp
OBJS		= $(subst .cpp,.o,$(SRCS))
CC			= clang++
CPPFLAGS	= -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) -o $@ $^
%.o:		%.cpp
			$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

f:			all clean

.PHONY:		all clean fclean re f
