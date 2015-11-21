/*
** operation_list.c for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
**
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
**
** Started on  Mon Nov 16 16:15:05 2015 Baptiste veyssiere
** Last update Sat Nov 21 12:20:30 2015 Baptiste veyssiere
*/

#include <stdlib.h>
#include "list.h"

void	rotate_right(t_list **list)
{
  *list = (*list)->prev;
}

void    rotate_left(t_list **list)
{
  *list = (*list)->next;
}

int	pb(t_list **list1, t_list **list2, int *i)
{
  t_list *elem;
  t_list *previous;

  if (elem == NULL)
    return (1);
  elem = (*list1)->next;
  previous = (*list1)->prev;
  (*list1)->next = *list2;
  *list2 = *list1;
  *list1 = elem;
  elem->prev = previous;
  elem->prev->next = elem;
  space(i);
  my_putstr("pb");
  return (0);
}

int	pa(t_list **list1, t_list **list2)
{
  t_list *elem;
  t_list	*buffer;
  t_list *previous;

  if (elem == NULL)
    return (1);
  elem = *list2;
  *list2 = (*list2)->next;
  (*list1)->prev->next = elem;
  elem->prev = (*list1)->prev;
  elem->next = *list1;
  (*list1)->prev = elem;
  *list1 = (*list1)->prev;
  my_putstr("pa");
  return (0);
}
