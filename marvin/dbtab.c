/*
** dbtab.c for dbtab in /home/chamat_a//local/Rush_1
** 
** Made by alexandre chamati
** Login   <chamat_a@epitech.net>
** 
** Started on  Sat Nov 27 10:40:29 2010 alexandre chamati
** Last update Sun Nov 28 23:17:36 2010 marie baudy
*/

#include "marvin.h"

char		*epur_str(char *str)
{
  int		index;
  int		tmp;

  index = tmp = 0;
  while (str[index] == ' ' || str[index] == '\t')
    index++;
  while (str[index] != '\0')
    {
      while (str[index] == ' ' || str[index] == '\t')
        index++;
      if (str[index] != '\0')
        if (tmp > 0)
          if (str[index - 1] == ' ' || str[index - 1] == '\t')
            str[tmp++] = ' ';
      str[tmp++] = str[index++];
    }
  str[tmp] = '\0';
  return (str);
}

int		taille_dbtab(char *str)
{
  int		i;
  int		taille;
  
  i = 0;
  taille = 1;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a' && str[i] <= 'z') 
	  || (str[i] >= 'A' && str[i] <= 'Z'))
	{
	  taille++;
	  while ((str[i] >= 'a' && str[i] <= 'z')
		 || (str[i] >= 'A' && str[i] <= 'Z'))
	    i++;
	}
      if (str[i] == '(' || str[i] == ')' 
	  || str[i] == '*' || str[i] == ',' 
	  || str[i] == '[' || str[i] == ']' || str[i] == ';')
	  taille++;
      i++;
    }
  return (taille);
}

void	taille_tab_two(char *str, int *i, int *g)
{
  while ((str[*i] >= 'a' && str[*i] <= 'z') || (str[*i] >= 'A' 
					      && str[*i] <= 'Z'))
    {
      (*g)++;
      (*i)++;
    }
}

int		taille_tab(char *str, int *m)
{
  int	i;
  int	g;

  g = 0;
  i = *m;
  if (str[i] == ' ')
    {
      (*m)++;
      i++;
    }
  if (str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']'
      || str[i] == '*' || str[i] == ';' || str[i] == ',')
    {
      g++;
      *m = *m + 1;
    }
  if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
      taille_tab_two(str, &i, &g);
      *m = g + *m + 1;
    }
  return (g);
}

char		**doubl_tab(char *tab)
{
  char		**dbtab;
  int		i;
  int		x;
  int		y;
  int		g;
  int		m;
  
  dbtab = malloc(taille_dbtab(epur_str(tab)) * sizeof(*dbtab));
  y = i = m = 0;
  while (y < taille_dbtab(epur_str(tab)))
    {
      g = taille_tab(tab, &m);
      dbtab[y] = malloc(g * sizeof(**dbtab));
      x = 0;
      while (x < g)
	{
	  dbtab[y][x++] = tab[i++];
	  for_doubl_tab(tab, &i, &m);
	}
      y++;
    }
  run_str(dbtab);
  dbtab[y] = 0;
  return (0);
}
