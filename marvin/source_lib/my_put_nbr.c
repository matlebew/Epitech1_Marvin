/*
** my_put_nbr.c for my_put_nbr.c in /home/baudy_m//Desktop/Piscine/Jour_03
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Storted on  Wed Oct  6 12:19:06 2010 marie baudy
** Last update Wed Oct 27 11:25:50 2010 marie baudy
*/

int	my_put_nbr(int nb)
{
  int	index;
  int	neg;
  int	test0;

  neg = 1;
  test0 = 0;
  index = 1000000000;
  if (nb < 0)
    {
      neg = -1;
      my_putchar('-');
    }
  while (index > 0)
    {
      if (test0 == 0)
	test0 = nb / index;
      if (test0 != 0 || (nb == 0 && index == 1000000000))
	my_putchar((nb / index * neg) + 48);
      nb = nb % index;
      index = index / 10;
    }
}
