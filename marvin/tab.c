/*
** tab.c for tab in /home/baudy_m//Desktop/Rush/marvin
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Sun Nov 28 22:59:56 2010 marie baudy
** Last update Sun Nov 28 23:09:09 2010 marie baudy
*/

#include "marvin.h"

void	for_doubl_tab(char *tab, int *i, int *m)
{
  if (tab[*i] == ' ')
    (*i)++;
  else
    {
      if (tab[*i] == '('
	  || tab[*i] == ')' || tab[*i] == '[' || tab[*i] == ']'
	  || tab[*i] == ';' || tab[*i] == ',')
	(*m) = (*m) - 1;
    }
}
