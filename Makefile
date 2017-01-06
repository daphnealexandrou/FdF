# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dalexand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/06 11:38:39 by dalexand          #+#    #+#              #
#    Updated: 2017/01/06 13:48:42 by dalexand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

FLAGS = -Wall -Wextra -Werror

INCLUDES = -I ./libft

HEADER = libft/libft.h fdf.h

SRC =

OBJ = $(SRC:.c=.o)

OBJ_LIBFT = $(SRC_LIFT:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)




