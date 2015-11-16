/*
** other_functions.c for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Mon Nov 16 21:56:41 2015 Baptiste veyssiere
** Last update Mon Nov 16 22:43:39 2015 Baptiste veyssiere
*/

#include <stdlib.h>
#include "list.h"

int     who_is_min(struct s_list *list)
{
  int   min;

  min = my_getnbr(list->nbr);
  list = list->next;
  while (list != NULL)
    {
      if (my_getnbr(list->nbr) < min)
        min = my_getnbr(list->nbr);
      list = list->next;
    }
  return (min);
}

void     list2_filler(struct s_list *list1, struct s_list *list2)
{
  int   min;

  min = who_is_min(list1);
  while (my_getnbr(list1->nbr) != min)
    rotate_left(list1);
}
