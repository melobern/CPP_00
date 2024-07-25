# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/21 13:44:15 by mbernard          #+#    #+#              #
#    Updated: 2024/07/25 13:09:37 by mbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

G = g++
NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -MMD -MP -g3 -std=c++98
MKDIR = mkdir -p
RMDIR = rm -rf

# ---------------------------------- Sources --------------------------------- #
HEADERS_LIST = Phonebook Contact 
SRCS = main Phonebook Contact 

# ---------------------------------- Repertories ----------------------------- #
HEADERS_DIR = ./
OBJS_DIR = .objs/
OBJS = $(addprefix ${OBJS_DIR}, $(addsuffix .o, ${SRCS}))
HEADERS = $(addprefix ${HEADERS_DIR}, $(addsuffix .hpp, ${HEADERS_LIST}))
INCLUDES = -I ${HEADERS_DIR}
DEPS = ${OBJS:.o=.d}

# ---------------------------------- Compilation ----------------------------- #
all: ${NAME} ${OBJS} | ${OBJS_DIR} Makefile

${NAME}: ${OBJS} Makefile
	${G} ${CFLAGS} ${OBJS} ${INCLUDES} ${LIBFT} -o $@

${OBJS_DIR}%.o: ${SRCS_DIR}%.cpp ${HEADERS} Makefile | ${OBJS_DIR}
	${G} ${CFLAGS} ${INCLUDES} -c $< -o $@

-include ${DEPS}
# ---------------------------------- Create Repertory ---------------------- #
${OBJS_DIR}:
			${MKDIR} ${OBJS_DIR}

## ---------------------------------- Clean ----------------------------------- #
clean:
	${RMDIR} ${OBJS_DIR}

fclean: clean
	${RM} ${NAME}

re:    fclean
	${MAKE} ${NAME}

# ---------------------------------- Phony ----------------------------------- #
.PHONY: all clean fclean re
