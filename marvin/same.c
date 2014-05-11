/*
** same.c for same in /home/baudy_m//Desktop/Rush/marvin
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Sun Nov 28 18:14:07 2010 marie baudy
** Last update Sun Nov 28 19:05:52 2010 marie baudy
*/

#include "marvin.h"

void	return_func(char **tab, int left)
{
  my_putstr("Il/Elle retourne le type ");
  left--;
  while (left >= 0)
    {
      while (my_strncmp(tab[left], "*", 1) == 0)
	{
	  my_putstr("pointeur sur ");
	  left--;
	}
      if (str_compare(tab, left) == 1)
	{
	  my_putstr(tab[left]);
	  if (left != 0)
	    my_putchar(' ');
	}
      left--;
    }
  my_putstr(".\n");
}

void	carac_special(char **tab, int *end)
{
  if (str_compare(tab, *end) == 0 && my_strncmp(tab[*end], "*", 1) != 0
      && my_strncmp(tab[*end], "(", 1) != 0
      && my_strncmp(tab[*end], ")", 1) != 0
      && my_strncmp(tab[*end], "[", 1) != 0
      && my_strncmp(tab[*end], "]", 1) != 0
      && my_strncmp(tab[*end], ",", 1) != 0
      && my_strncmp(tab[*end], " ", 1) != 0)
    {
      my_putstr(tab[(*end)--]);
      my_putstr(" de type ");
    }
  while (my_strncmp(tab[*end], "*", 1) == 0)
    {
      my_putstr("pointeur sur ");
      (*end)--;
    }
}

void	param(char **tab, int end, int left)
{
  end--;
  while (end > left)
    {
      carac_special(tab, &end);
      if (str_compare(tab, end) == 1)
        my_putstr(tab[end]);
      if (my_strncmp(tab[end], ",", 1) == 0)
        my_putstr("et");
      end--;
      if (end > left + 1)
        my_putchar(' ');
    }
  my_putstr(".\n");
}

int	str_compare_struct(char **tab, int index)
{
  if (my_strncmp(tab[index], "typedef struct", 14) == 0)
    return (1);
  if (my_strncmp(tab[index], "struct", 6) == 0)
    return (1);
  return (0);
}

int	str_compare(char **tab, int index)
{
  if (my_strncmp(tab[index], "int", 3) == 0)
    return (1);
  if (my_strncmp(tab[index], "char", 4) == 0)
    return (1);
  if (my_strncmp(tab[index], "float", 5) == 0)
    return (1);
  if (my_strncmp(tab[index], "double", 6) == 0)
    return (1);
  if (my_strncmp(tab[index], "const", 5) == 0)
    return (1);
  if (my_strncmp(tab[index], "void", 4) == 0)
    return (1);
  if (my_strncmp(tab[index], "static", 6) == 0)
    return (1);
  if (my_strncmp(tab[index], "unsigned", 8) == 0)
    return (1);
  if (my_strncmp(tab[index], "short", 5) == 0)
    return (1);
  if (my_strncmp(tab[index], "long", 4) == 0)
    return (1);
  if (str_compare_struct(tab, index) == 1)
    return (1);
  return (0);
}
