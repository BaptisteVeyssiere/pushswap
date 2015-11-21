/*
** list.h for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
**
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
**
** Started on  Mon Nov 16 15:10:24 2015 Baptiste veyssiere
** Last update Sat Nov 21 23:20:35 2015 Baptiste veyssiere
*/

#ifndef LIST_H_
# define LIST_H_

struct s_list
{
  int		nbr;
  struct s_list	*next;
  struct s_list *prev;
};

typedef struct s_list t_list;
typedef struct
{
  int	min;
  int	pos;
} t_min;

void	my_putchar(char);
void	my_putstr(char*);
int	my_getnbr(char*);
int	my_put_in_list(t_list**, int, t_list**);
void	rotate_right(t_list**);
void	rotate_left(t_list**);
int	pb(t_list**, t_list**, int*);
int	pa(t_list**, t_list**);
t_min	*who_is_min(t_list*);
void	space(int*);
void	list2_filler(t_list**, t_list**, int, int*);
int	check(t_list*);
void	function_free(t_list*, t_list*);
void	push_swap(int, char**, t_list*, t_list*);

#endif /* !LIST_H_ */
