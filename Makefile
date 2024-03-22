CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDES_DIR = ./includes/

SRC_DIR = ./src/

SRC_FILES = ft_atoi.c \
						ft_bzero.c \
						ft_calloc.c \
						ft_isalnum.c \
						ft_isalpha.c \
						ft_isascii.c \
						ft_isdigit.c \
						ft_isprint.c \
						ft_itoa.c \
						ft_memchr.c \
						ft_memcmp.c \
						ft_memmove.c \
						ft_memset.c \
						ft_split.c \
						ft_strchr.c \
						ft_strdup.c \
						ft_strjoin.c \
						ft_strlcat.c \
						ft_strlcpy.c \
						ft_strlen.c \
						ft_strncmp.c \
						ft_strnstr.c \
						ft_strrchr.c \
						ft_substr.c \
						ft_tolower.c \
						ft_toupper.c \
						ft_strtrim.c \

LIB = libft.a

SRC = ${addprefix ${SRC_DIR}, ${SRC_FILES}}

OBJS = ${SRC:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} -I ${INCLUDES_DIR} -c $< -o ${<:.c=.o}
