# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/06 23:47:35 by jiandre           #+#    #+#              #
#    Updated: 2020/05/17 20:14:01 by jiandre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_DIR		= ./inc
SRC_DIR		= ./srcs
OBJ_DIR		= ./obj

HEAD		= $(INC_DIR)/libft.h

SRC		=	 ft_atoi.c   ft_calloc.c   ft_isalpha.c  ft_isdigit.c ft_itoa.c  ft_memccpy.c  ft_lstmap.c ft_memcmp.c ft_lstadd_back.c ft_lstiter.c\
ft_memmove.c  ft_strchr.c  ft_strlcat.c  ft_strlen.c   ft_strnstr.c  ft_tolower.c ft_strtrim.c ft_lstadd_front.c ft_lstdelone.c ft_lstclear.c\
ft_bzero.c  ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_memchr.c ft_strjoin.c ft_lstsize.c ft_lstnew.c ft_lstlast.c ft_memcpy.c  \
ft_memset.c  ft_split.c ft_strmapi.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c  ft_putendl_fd.c ft_putnbr_fd.c ft_strdup.c  ft_strlcpy.c  ft_strncmp.c  ft_strrchr.c  ft_toupper.c

OBJS	=	$(addprefix $(OBJ_DIR)/,$(SRC:%.c=%.o))

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)


$(NAME): $(OBJ_DIR) $(OBJS) $(HEAD) $(PFT_OBJ_DIR) $(PFT_OBJS) $(PFT_HEAD)
	@ar rc $(NAME) $(OBJS) $(PFT_OBJS)
	@ranlib $(NAME)
	@echo "libft.a was created"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@clang $F -g -c $< -I$(INC_DIR) -o$@

clean:
	@rm -Rf $(OBJ_DIR) $(PFT_OBJ_DIR)
	@echo "Objects was deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "libft.a was deleted"

re: fclean all

norm:
	@norminette

.PHONY: all clean fclean re norm