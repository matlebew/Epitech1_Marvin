/*
** my_square_root.c for my_square_root in /home/baudy_m//Desktop/Piscine/Jour_05
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Fri Oct  8 08:13:07 2010 marie baudy
** Last update Fri Oct  8 08:14:03 2010 marie baudy
*/

int	my_square_root(int nb)
{
  int	cnt;

  cnt = 1;
  while (cnt <= nb)
    {
      if (nb == (cnt * cnt))
	return (cnt);
      cnt++;
    }
  return (0);
}
