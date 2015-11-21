/*
** list.h for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
**
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
**
** Started on  Mon Nov 16 15:10:24 2015 Baptiste veyssiere
** Last update Sat Nov 21 10:55:36 2015 Baptiste veyssiere
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

int	my_put_in_list(t_list**, int, t_list**);

#endif /* !LIST_H_ */
