/*
** my_power_rec.c for my_power_rec in /home/baudy_m//Desktop/Piscine/Jour_05
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Fri Oct  8 10:23:29 2010 marie baudy
** Last update Fri Oct  8 10:24:50 2010 marie baudy
*/

int	my_power_rec(int nb, int power)
{
  if (power < 0)
    return (0);
  if (power)
    return (nb * my_power_rec(nb, --power));
  return (1);
}
