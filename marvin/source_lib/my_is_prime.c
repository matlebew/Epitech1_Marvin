/*
** my_is_prime.c for my_is_prime in /home/baudy_m//Desktop/Piscine/Jour_07
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 12 12:53:16 2010 marie baudy
** Last update Tue Oct 12 13:05:27 2010 marie baudy
*/

int	my_is_prime(int nombre)
{
  int	cnt;

  cnt = 2;
  while (cnt < nombre)
    {
      if (nombre % cnt == 0)
	return (0);
      cnt++;
    }
  return (1);
}
