/*
** list_manager.c for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
**
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
**
** Started on  Mon Nov 16 16:11:24 2015 Baptiste veyssiere
** Last update Sat Nov 21 12:20:05 2015 Baptiste veyssiere
*/

#include <stdlib.h>
#include "list.h"

int     my_put_in_list(t_list **list, int nbr, t_list **adress)
{
  t_list *elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->nbr = nbr;
  elem->next = *list;
  if (elem->next != NULL)
    elem->next->prev = elem;
  else
    *adress = elem;
  *list = elem;
  return (0);
}
