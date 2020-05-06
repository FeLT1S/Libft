# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/06 23:47:35 by jiandre           #+#    #+#              #
#    Updated: 2020/05/07 00:54:42 by Student          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_DIR		= ./inc
SRC_DIR		= ./srcs
OBJ_DIR		= ./obj

HEAD		= $(INC_DIR)/libft.h

SRC		=	 ft_atoi.c   ft_calloc.c   ft_isalpha.c  ft_isdigit.c  ft_memccpy.c  ft_memcmp.c \
ft_memmove.c  ft_strchr.c  ft_strlcat.c  ft_strlen.c   ft_strnstr.c  ft_tolower.c \
ft_bzero.c  ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_memchr.c   ft_memcpy.c  \
ft_memset.c   ft_strdup.c  ft_strlcpy.c  ft_strncmp.c  ft_strrchr.c  ft_toupper.c

OBJS	=	$(addprefix $(OBJ_DIR)/,$(SRC:%.c=%.o))

F = -Wall -Wextra -Werror

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)


$(NAME): $(OBJ_DIR) $(OBJS) $(HEAD)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "\033[1;32mlibft.a was built\033[0m"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@clang $F -g -c $< -I$(INC_DIR) -o$@

$(PFT_OBJ_DIR)/%.o: $(PFT_SRC_DIR)/%.c
	@clang $F -g -c $< -I$(INC_DIR) -o$@

clean:
	@rm -Rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

norm:
	@norminette

.PHONY: all clean fclean re norm
