/*
** operation_list.c for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Mon Nov 16 16:15:05 2015 Baptiste veyssiere
** Last update Tue Nov 17 19:23:26 2015 Baptiste veyssiere
*/

#include <stdlib.h>
#include "list.h"

void	swap(struct s_list *list)
{
  char	*buffer;

  buffer = malloc(sizeof(list->nbr));
  my_strcpy(buffer, list->nbr);
  my_strcpy(list->nbr, list->next->nbr);
  my_strcpy(list->next->nbr, buffer);
  free(buffer);
}

void	rotate_right(struct s_list *list)
{
  char  *buffer;
  char  *buffer2;
  struct s_list	*adress;

  adress = list;
  buffer2 = malloc(sizeof(list->nbr));
  my_strcpy(buffer2, list->nbr);
  list = list->next;
  while (list != NULL)
    {
      buffer = malloc(sizeof(list->nbr));
      my_strcpy(buffer, list->nbr);
      my_strcpy(list->nbr, buffer2);
      free(buffer2);
      buffer2 = malloc(sizeof(buffer));
      my_strcpy(buffer2, buffer);
      free(buffer);
      list = list->next;
    }
  list = adress;
  my_strcpy(list->nbr, buffer2);
  free(buffer2);  
}

void    rotate_left(struct s_list *list)
{
  char  *buffer;

  buffer = malloc(sizeof(list->nbr));
  my_strcpy(buffer, list->nbr);
  while (list->next != NULL)
    {
      my_strcpy(list->nbr, list->next->nbr);
      list = list->next;
    }
  my_strcpy(list->nbr, buffer);
  free(buffer);
}

int	push(struct s_list *list1, struct s_list **list2)
{
  struct s_list	*elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->nbr = malloc(sizeof(list1->nbr));
  my_strcpy(elem->nbr, list1->nbr);
  elem->next = *list2;
  *list2 = elem;
  list1 = list1->next;
  return (0);
}
