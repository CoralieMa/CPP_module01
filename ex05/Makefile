# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 10:04:20 by cmartino          #+#    #+#              #
#    Updated: 2024/01/30 12:26:14 by cmartino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harl

FILES	= main

SRCS	= $(addsuffix .cpp, $(FILES))

OBJS	= ${SRCS:.cpp=.o}

CC		= c++

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
