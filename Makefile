# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dalexand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/06 11:38:39 by dalexand          #+#    #+#              #
#    Updated: 2017/01/24 13:09:09 by dalexand         ###   ########.fr        #
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
		make -C libft
		gcc -o $(NAME) $(SRC) $(INCLUDES) -L./libft -lft

libft/libft.a: $(OBJ_LIBFT)
		ar rc libft/lift.a $(OBJ_LIBFT)

%.o: %.c $(HEADER)
		gcc $(FLAGS) -c $< -o $@

clean:
		make clean -C libft
		rm -rf $(OBJ) $(OBJ_LIBFT) libft/libft.a

fclean: clean
		make fclean -C libft
		rm -f $(NAME)
