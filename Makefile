# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/02 19:45:08 by sgomez-m          #+#    #+#              #
#    Updated: 2025/06/12 22:05:11 by sgomez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#library file's name
NAME = libftprintf.a

#dir for .h files
#INC_DIR =./inc
#dir for .o files
OBJ_DIR = ./obj
#dir for .c files
SRC_DIR = ./src
#dir for .a file
#BIN_DIR = ./bin

#compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./

#Make the static library 
AR = ar rcs

#Delete files
RM = rm -rf

SRC = $(wildcard $(SRC_DIR)/*.c)

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

#rule to compile everything
all : $(NAME)

#rule to make the library
$(NAME) : $(OBJ)
	#mkdir -p $(BIN_DIR)
	$(AR) $(NAME) $(OBJ)

#%.c to %.o
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) -MD $(CFLAGS) -c $< -o $@

-include $(OBJ_DIR)/*.d

clean:
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME) $(OBJ_DIR)

re : fclean all

#indicate that the next rules are not real files
.PHONY: all clean fclean re
