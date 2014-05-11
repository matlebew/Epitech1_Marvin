/*
** my_swap.c for my_swap.c in /home/baudy_m//Desktop/Piscine/Jour_04
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Thu Oct  7 09:52:19 2010 marie baudy
** Last update Thu Oct  7 09:53:11 2010 marie baudy
*/

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
