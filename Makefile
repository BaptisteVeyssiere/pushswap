##
## Makefile for Push_swap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap
## 
## Made by Baptiste veyssiere
## Login   <VEYSSI_B@epitech.net>
## 
## Started on  Mon Nov  2 12:03:04 2015 Baptiste veyssiere
## Last update Fri Nov 20 16:00:22 2015 Baptiste veyssiere
##

NAME	= push_swap

SRCS	= list_manager.c \
	my_getnbr.c \
	my_putchar.c \
	my_putstr.c \
	operation_list.c \
	other_functions.c \
	push_swap.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
	cc -c $(SRCS) -I./include
	cc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
