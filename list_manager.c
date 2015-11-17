/*
** list_manager.c for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Mon Nov 16 16:11:24 2015 Baptiste veyssiere
** Last update Tue Nov 17 11:37:44 2015 Baptiste veyssiere
*/

#include <stdlib.h>
#include "list.h"

int     my_put_in_list(struct s_list **list, char *nbr)
{
  struct s_list *elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->nbr = malloc(sizeof(nbr));
  my_strcpy(elem->nbr, nbr);
  elem->next = *list;
  *list = elem;
  return (0);
}
