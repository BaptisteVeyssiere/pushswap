/*
** operation_list.c for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Mon Nov 16 16:15:05 2015 Baptiste veyssiere
** Last update Thu Nov 19 17:25:47 2015 Baptiste veyssiere
*/

#include <stdlib.h>
#include "list.h"

void	swap(struct s_list *list)
{
  int	buffer;

  buffer = list->nbr;
  list->nbr = list->next->nbr;
  list->next->nbr = buffer;
}

void	rotate_right(struct s_list *list)
{
  int  buffer;
  int  buffer2;
  struct s_list	*adress;

  adress = list;
  buffer2 = list->nbr;
  list = list->next;
  while (list != NULL)
    {
      buffer = list->nbr;
      list->nbr = buffer2;
      buffer2 = buffer;
      list = list->next;
    }
  list = adress;
  list->nbr = buffer2;
}

void    rotate_left(struct s_list *list)
{
  int  buffer;

  buffer = list->nbr;
  while (list->next != NULL)
    {
      list->nbr = list->next->nbr;
      list = list->next;
    }
  list->nbr = buffer;
}

int	push(struct s_list *list1, struct s_list **list2)
{
  struct s_list	*elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->nbr = list1->nbr;
  elem->next = *list2;
  *list2 = elem;
  list1 = list1->next;
  return (0);
}
