##
## Makefile for Push_swap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap
## 
## Made by Baptiste veyssiere
## Login   <VEYSSI_B@epitech.net>
## 
## Started on  Mon Nov  2 12:03:04 2015 Baptiste veyssiere
## Last update Mon Nov 16 22:48:23 2015 Baptiste veyssiere
##

NAME	= push_swap

SRCS	= list_manager.c \
	my_getnbr.c \
	my_putchar.c \
	my_putstr.c \
	my_strcpy.c \
	my_strlen.c \
	operation_list.c \
	other_functions.c \
	push_swap.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
	cc -c $(SRCS)
	cc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
