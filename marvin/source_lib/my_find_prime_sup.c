/*
** my_find_prime.c for my_find_prime in /home/baudy_m//Desktop/Piscine/Jour_07
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 12 13:08:29 2010 marie baudy
** Last update Tue Oct 12 13:19:45 2010 marie baudy
*/

int	my_find_prime_sup(int nb)
{
  int	cnt;
  
  cnt = 2;
  if (my_is_prime(nb) == 0)
    {
      nb++;
      while (cnt < nb)
	{
	  if (nb % cnt == 0)
	    {
	      cnt = 1;
	      my_find_prime_sup(nb++);
	    }
	  cnt++;
	}
    }
  return (nb);
}
