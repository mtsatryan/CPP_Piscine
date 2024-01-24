# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 17:20:55 by mtsatrya          #+#    #+#              #
#    Updated: 2022/08/03 17:40:19 by mtsatrya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= megaphone

SRCS	:= megaphone.cpp
OBJS	:= $(SRCS:.cpp=.o)

CXX		:= c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME)	:$(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "$(OBJS) Removed !"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) Removed !"

re: fclean all

.PHONY: all clean fclean format re
