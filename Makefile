CC = clang
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
LIB = libft.h
SRCS =  ft_atoi.c	ft_bzero.c		ft_calloc.c		ft_isalpha.c	\
	ft_isalnum.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c	\
	ft_strchr.c		ft_strdup.c		ft_strlcat.c	ft_strlcpy.c	\
	ft_strlen.c		ft_strrchr.c	ft_strncmp.c	ft_strnstr.c	\
	ft_memchr.c		ft_memcpy.c		ft_memset.c		ft_memmove.c	\
	ft_memcmp.c		ft_tolower.c	ft_toupper.c	ft_substr.c		\
	ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_itoa.c		\
	ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c	ft_putendl_fd.c	\
	ft_putnbr_fd.c	ft_putstr_fd.c	ft_lstsize.c
OBJS = ${SRCS:%.c=%.o}
BONUSSRCS = ft_lstnew.c			ft_lstadd_front.c	ft_lstlast.c	\
			ft_lstadd_back.c
BONUSOBJS = ${BONUSSRCS:%.c=%.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS}

${OBJS}:
	$(CC) -I . -c ${FLAGS} ${SRCS}

clean:
	rm -f ${OBJS} ${BONUSOBJS}

fclean:
	rm -f ${OBJS} ${BONUSOBJS} ${NAME} *.gch 17Z90P

re: fclean all

rebonus: fclean all bonus

run: re
	$(CC) ${FLAGS} -lbsd main.c -lft -L . && ./a.out

runbonus: rebonus
	$(CC) ${FLAGS} -lbsd main.c -lft -L . && ./a.out

bonus: ${BONUSOBJS}
	ar rcs ${NAME} ${BONUSOBJS}

${BONUSOBJS}:
	${CC} -I . -c ${FLAGS} ${BONUSSRCS}

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: all clear fclean re run bonus rebonus
