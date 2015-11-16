/*
** push_swap.c for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Mon Nov 16 15:08:57 2015 Baptiste veyssiere
** Last update Mon Nov 16 22:44:55 2015 Baptiste veyssiere
*/

#include <stdlib.h>
#include "list.h"

int     check(struct s_list *list)
{
  while (list->next != NULL)
    {
      if (my_getnbr(list->next->nbr) < my_getnbr(list->nbr))
        return (1);
      list = list->next;
    }
  return (0);
}

void	main(int ac,char **av)
{
  struct s_list	*list1;
  struct s_list *list2;
  int		i;

  list1 = NULL;
  list2 = NULL;
  i = ac - 1;
  while (i > 0)
    {
      my_put_in_list(&list1, av[i]);
      i--;
    }
  while (check(list1) != 0)
    {
      list2_filler(list1, list2);
      push(list1, &list2);
      list1 = list1->next;
    }
  while (list2 != NULL)
    {
      push(list2, &list1);
      list2 = list2->next;
    }
  my_show_list(list1);
}
