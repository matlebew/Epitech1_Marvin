/*
** my_isneg.c for my_isneg in /home/baudy_m//Desktop/Piscine/Jour_03
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Wed Oct  6 09:43:08 2010 marie baudy
** Last update Thu Oct  7 20:24:51 2010 marie baudy
*/

int	my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  if (n >= 0)
    {
      my_putchar('P');
    }
  return (0);
}
