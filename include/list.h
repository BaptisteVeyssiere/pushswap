/*
** list.h for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Mon Nov 16 15:10:24 2015 Baptiste veyssiere
** Last update Fri Nov 20 15:59:54 2015 Baptiste veyssiere
*/

#ifndef LIST_H_
# define LIST_H_

struct	s_list
{
  int		nbr;
  struct s_list	*next;
};

int	my_put_in_list(struct s_list **list, int nbr);

#endif /* !LIST_H_ */
