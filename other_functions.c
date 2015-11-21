/*
** other_functions.c for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
**
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
**
** Started on  Mon Nov 16 21:56:41 2015 Baptiste veyssiere
** Last update Sat Nov 21 14:32:09 2015 Baptiste veyssiere
*/

#include <stdlib.h>
#include "list.h"

t_min	*who_is_min(t_list *list)
{
  t_min	*min;
  int	buffer;

  buffer = list->nbr;
  min = malloc(sizeof(*min));
  min->min = list->nbr;
  min->pos = 0;
  list = list->next;
  while (list->nbr != buffer)
    {
      if (list->nbr < min->min)
	min->min = list->nbr;
      list = list->next;
      min->pos += 1;
    }
  return (min);
}

void	space(int *i)
{
  if (*i == 0)
    *i = 1;
  else
    my_putchar(' ');
}

void	list2_filler(t_list **list1, t_list **list2, int ac, int *i)
{
  t_min	*min;

  min = who_is_min(*list1);
  while ((*list1)->nbr != min->min)
    {
      if (min->pos < ac / 2)
	{
	  rotate_left(list1);
	  space(i);
	  my_putstr("ra");
	}
      else
	{
	  rotate_right(list1);
	  space(i);
	  my_putstr("rra");
	}
    }
  free(min);
}
