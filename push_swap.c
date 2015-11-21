/*
** push_swap.c for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
**
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
**
** Started on  Mon Nov 16 15:08:57 2015 Baptiste veyssiere
** Last update Sat Nov 21 14:31:24 2015 Baptiste veyssiere
*/

#include <stdlib.h>
#include "list.h"

int	check(t_list *list)
{
  int	buffer;

  buffer = list->nbr;
  while (list->next->nbr != buffer)
    {
      if (list->next->nbr < list->nbr)
        return (1);
      list = list->next;
    }
  return (0);
}

void	function_free(t_list *list1, t_list *list2)
{
  t_list	*adress;

  list1->prev->next = NULL;
  while (list1 != NULL)
    {
      adress = list1;
      list1 = list1->next;
      free(adress);
    }
  while (list2 != NULL)
    list2 = list2->next;
}

void	push_swap(int ac, char **av, t_list *list1, t_list *list2)
{
  t_list	*adress;
  int           i;

  i = ac - 1;
  list1 = NULL;
  list2 = NULL;
  while (i > 0)
    my_put_in_list(&list1, my_getnbr(av[i--]), &adress);
  list1->prev = adress;
  adress->next = list1;
  while (check(list1) != 0)
    {
      list2_filler(&list1, &list2, ac, &i);
      pb(&list1, &list2, &i);
    }
  while (list2 != NULL)
    {
      my_putchar(' ');
      pa(&list1, &list2);
    }
  my_putchar('\n');
  function_free(list1, list2);
}

int	main(int ac,char **av)
{
  t_list	*list1;
  t_list	*list2;
  int		i;

  if (ac > 1)
    push_swap(ac, av, list1, list2);
  else
    return (1);
  return (0);
}
