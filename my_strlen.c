/*
** my_strlen.c for my_strlen in /home/VEYSSI_B/rendu/Piscine_C_J04
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Thu Oct  1 18:31:00 2015 Baptiste veyssiere
** Last update Tue Oct 27 17:38:42 2015 vincent garde
*/

int	my_strlen(char *str)
{
  int	n;

  n = 0;
  while (*str != 0)
    {
      n++;
      str++;
    }
  return (n);
}
