/*
** my_putstr.c for my_putstr in /home/VEYSSI_B/rendu/Piscine_C_J04
**
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
**
** Started on  Thu Oct  1 13:28:06 2015 Baptiste veyssiere
** Last update Sat Nov 21 14:29:13 2015 Baptiste veyssiere
*/

void	my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str[n] != 0)
    {
      my_putchar(str[n++]);
    }
}
