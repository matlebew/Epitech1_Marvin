/*
** verif_total.c for verif_total in /home/chamat_a//local
** 
** Made by alexandre chamati
** Login   <chamat_a@epitech.net>
** 
** Started on  Sun Nov 28 17:29:31 2010 alexandre chamati
** Last update Sun Nov 28 23:26:21 2010 marie baudy
*/

#include "marvin.h"

int	paren_total(char *str)
{
  int	i;
  int	n;
  int	m;

  i = n = m = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '(')
	n++;
      if (str[i] == ')')
	m++;
      i++;
    }
  if (n == m)
    return (1);
  else
    {
      my_putstr("Veuillez revoir la disposition de vos parenthese\n");
      exit(0);
    }
}

int	cro_total(char *str)
{
  int	i;
  int	n;
  int	m;

  i = n = m = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '[')
        n++;
      if (str[i] == ']')
        m++;
      i++;
    }
  if (n == m)
    return (1);
  else
    {
      my_putstr("Veuillez revoir la disposition de vos crochets\n");
      exit(0);
    }
}
