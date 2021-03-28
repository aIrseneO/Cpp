#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2021/03/22 18:21:58 by atemfack          #+#    #+#             *#
#*   Updated: 2021/03/27 12:59:04 by atemfack         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME		= sed
SRCS		= sed.cpp
OBJS		= $(subst .cpp,.o,$(SRCS))
CC			= clang++
CPPFLAGS	= -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) -o $@ $^

%.o:		%.cpp
			$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
			rm -f $(OBJS) *.replace*

fclean:		clean
			rm -f $(NAME)

re:			fclean all

f:			all clean

.PHONY:		all clean fclean re f
