# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkilic <hkilic@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 13:32:22 by hkilic            #+#    #+#              #
#    Updated: 2022/08/18 13:32:23 by hkilic           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -framework OpenGL -framework AppKit -L./minilibx -lmlx

all:
	$(CC) $(FLAGS) *.c -o solong
fclean:
	rm -rf a.out solong
