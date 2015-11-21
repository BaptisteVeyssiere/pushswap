/*
** my_getnbr.c for my_getnbr in /home/VEYSSI_B/rendu
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Fri Oct  9 11:36:28 2015 Baptiste veyssiere
** Last update Fri Nov 20 19:19:14 2015 Baptiste veyssiere
*/

int	power_up(char *str, int *length, int *key, int *power)
{
  if (str[0] == '-')
    {
      *length += 1;
      *key = 1;
    }
  while (str[*length] != 0)
    {
      *power *= 10;
      *length += 1;
    }
  return (0);
}

int	my_getnbr(char *str)
{
  int	length;
  int	power;
  int	nbr;
  int	key;

  key = 0;
  nbr = 0;
  length = 0;
  power = 1;
  power_up(str, &length, &key, &power);
  power /= 10;
  length = key;
  while (power > 0)
    {
      nbr += power * (str[length++] - 48);
      power /= 10;
    }
  if (key == 1)
    nbr *= -1;
  return (nbr);
}
