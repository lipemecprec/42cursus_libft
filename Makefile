NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS =  ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalpha.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_memchr.c		\
		ft_memcpy.c		\
		ft_memset.c		\
		ft_memmove.c	\
		ft_memcmp.c		\
		ft_tolower.c	\
		ft_toupper.c	\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c
LIB = libft.h
OBJS = ${SRCS:%.c=%.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS}

${OBJS}:
	clang -I . -c ${FLAGS} ${SRCS}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${OBJS} ${NAME} *.gch 17Z90P

re: fclean all

run: re
	clang ${FLAGS} -lbsd main.c -lft -L . && ./a.out

.PHONY: all clear fclean re
