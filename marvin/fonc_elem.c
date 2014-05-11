/*
** Fonction.h for Fonction in /home/chamat_a//local/BSQ
** 
** Made by alexandre chamati
** Login   <chamat_a@epitech.net>
** 
** Started on  Sat Nov  6 17:53:03 2010 alexandre chamati
** Last update Sat Nov 27 18:42:21 2010 marie baudy
*/

#include "marvin.h"

int	compt(char *str, int *i)
{
  int	n;
  
  n = 0;
  while(str[*i] == '-' || str[*i] == '+')
    {
      if (str[*i] == '-')
	{
	  n = n + 1;
	}
      *i = *i + 1;
    }
  n = n % 2;
  return (n);
}
