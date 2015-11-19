/*
** push_swap.c for pushswap in /home/VEYSSI_B/rendu/CPE_2015_Pushswap/test
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Mon Nov 16 15:08:57 2015 Baptiste veyssiere
** Last update Thu Nov 19 17:27:41 2015 Baptiste veyssiere
*/

#include <stdlib.h>
#include "list.h"

int     check(struct s_list *list)
{
  while (list->next != NULL)
    {
      if (list->next->nbr < list->nbr)
        return (1);
      list = list->next;
    }
  return (0);
}

void	space_or_backspace(struct s_list *list)
{
  my_putstr("pa");
  if (list->next != NULL)
    my_putchar(32);
  else
    my_putchar('\n');
}

void	function_free(struct s_list *list1, struct s_list *list2)
{
  struct s_list	*adress;

  while (list1 != NULL)
    {
      adress = list1;
      list1 = list1->next;
      free(adress);
    }
  while(list2 != NULL)
    list2 = list2->next;
}

void	push_swap(int ac, char **av, struct s_list *list1, struct s_list *list2)
{
  struct s_list	*adress;
  int           i;

  i = ac - 1;
  while (i > 0)
    my_put_in_list(&list1, my_getnbr(av[i--]));
  while (check(list1) != 0)
    {
      list2_filler(list1, list2);
      push(list1, &list2);
      my_putstr("pb ");
      adress = list1;
      list1 = list1->next;
      free(adress);
    }
  while (list2 != NULL)
    {
      push(list2, &list1);
      space_or_backspace(list2);
      adress = list2;
      list2 = list2->next;
      free(adress);
    }
  function_free(list1, list2);
}

void	main(int ac,char **av)
{
  struct s_list *list1;
  struct s_list *list2;
  char	*bunker;
  int	i;

  list1 = NULL;
  list2 = NULL;
  if (ac > 1)
    push_swap(ac, av, list1, list2);
  else
    my_putstr("Please enter some numbers\n");
}
