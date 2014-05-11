/*
** gere_func.c for gere_func in /home/baudy_m//Desktop/Rush/marvin
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Sat Nov 27 11:38:11 2010 marie baudy
** Last update Sun Nov 28 19:04:23 2010 marie baudy
*/

#include "marvin.h"

int	count_par(char **tab)
{
  int	index;
  int	cnt;

  index = cnt = 0;
  while (my_strncmp(tab[index], ";", 1) != 0)
    {
      if (my_strncmp(tab[index], "(", 1) == 0)
	cnt++;
      index++;
    }
  return (cnt);
}

int	gere_other(char **tab, int save, int end)
{
  int	nb_par;

  if ((nb_par = count_par(tab)) > 1)
    return (0);
    /*ptr_func(tab, save, end);*/
  else
    {
      func(tab, save, end);
    }   
  return (0);
}

int	run_str(char **tab)
{
  int	save;
  int	index;
  int	flag;

  save = flag = index = 0;
  while (my_strncmp(tab[index], ";", 1) != 0)
    {
      if (str_compare(tab, index) == 0 && save == 0 
	  && my_strncmp(tab[index], "*", 1) != 0
	  && my_strncmp(tab[index], "(", 1) != 0
	  && my_strncmp(tab[index], ")", 1) != 0
	  && my_strncmp(tab[index], "[", 1) != 0
	  && my_strncmp(tab[index], "]", 1) != 0
	  && my_strncmp(tab[index], ",", 1) != 0
	  && my_strncmp(tab[index], " ", 1) != 0)
	save = index;
      if (my_strncmp(tab[index++], "(", 1) == 0)
	flag = 1;
    }
  if (flag == 1)
    gere_other(tab, save, index);
  else
    var(tab, save);
  return (0);
}
