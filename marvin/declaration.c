/*
** declaration.c for declaration in /home/baudy_m//Desktop/Rush/marvin
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Sun Nov 28 18:22:41 2010 marie baudy
** Last update Sun Nov 28 19:09:10 2010 marie baudy
*/

#include "marvin.h"

int	func(char **tab, int left, int end)
{
  my_putstr("C'est une fonction nommee ");
  my_putstr(tab[left]);
  my_putstr(".\n");
  return_func(tab, left);
  my_putstr("Elle prend en parametre");
  param(tab, end, left);
  return (0);
}

void	ptr_func(char **tab, int save, int end)
{
  my_putstr("C'est un pointeur sur fonction qui se nomme ");
  my_putstr(tab[save]);
  save = save - 2;
  my_putstr(".\n");
  return_func(tab, end);
  my_putstr(tab[end]);
}

int	var(char **tab, int left)
{
  my_putstr("C'est une variable nommee ");
  my_putstr(tab[left]);
  if (my_strncmp(tab[left + 1], "[", 1) == 0)
    {
      my_putstr(" de ");
      my_putstr(tab[left + 2]);
      my_putstr(" caractere(s)");
    }
  my_putstr(" de type ");
  if (left - 1 == 0)
    {
      my_putstr(tab[--left]);
      my_putstr(".\n");
    }
  else
    param(tab, left, 0);
  return (0);
}
