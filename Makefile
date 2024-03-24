# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jteissie <jteissie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 16:14:13 by jteissie          #+#    #+#              #
#    Updated: 2024/03/24 17:58:30 by jteissie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC_DIR = ./src/

SRC = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

SRCS = $(addprefix $(SRC_DIR), $(SRC))

SRC_BONUS       = ft_lstnew_bonus.c \
                          ft_lstadd_front_bonus.c \
                          ft_lstsize_bonus.c \
                          ft_lstlast_bonus.c \
                          ft_lstadd_back_bonus.c \
                          ft_lstdelone_bonus.c \
                          ft_lstclear_bonus.c \
                          ft_lstiter_bonus.c \
                          ft_lstmap_bonus.c

SRC_BONUS := $(filter-out %ft_lstnew_bonus.c,$(SRC_BONUS))
SRC_BONUS := $(filter-out %ft_lstadd_front_bonus.c,$(SRC_BONUS))
SRC_BONUS := $(filter-out %ft_lstsize_bonus.c,$(SRC_BONUS))
SRC_BONUS := $(filter-out %ft_lstlast_bonus.c,$(SRC_BONUS))
SRC_BONUS := $(filter-out %ft_lstadd_back_bonus.c,$(SRC_BONUS))
SRC_BONUS := $(filter-out %ft_lstdelone_bonus.c,$(SRC_BONUS))
SRC_BONUS := $(filter-out %ft_lstclear_bonus.c,$(SRC_BONUS))
SRC_BONUS := $(filter-out %ft_lstiter_bonus.c,$(SRC_BONUS))
SRC_BONUS := $(filter-out %ft_lstmap_bonus.c,$(SRC_BONUS))

SRCS_BONUS = $(addprefix $(SRC_DIR), $(SRC_BONUS))

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)


all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRC_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CCFLAGS) -c -include ./libft.h $< -o $@

bonus: ${OBJS} ${OBJS_BONUS}
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
