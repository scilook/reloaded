CC=cc
AR=ar
CCFLAGS=-Wall -Wextra -Werror
ARFLAGS=rcs
CS=./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
INC=./includes
OBJS=$(CS:.c=.o)
TARGET=libft.a

%.o : $(CS)
	$(CC) $(CCFLAGS) -I$(INC) $< -o $@

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

all: $(TARGET)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re