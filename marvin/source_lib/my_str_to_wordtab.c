/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/baudy_m//Desktop/Piscine/Jour_10
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 19 14:22:32 2010 marie baudy
** Last update Sun Nov 28 21:35:51 2010 marie baudy
*/

#include <stdlib.h>

int	begin(char *str, int words)
{
  int   cpt;

  cpt = 0;
  while (str[cpt])
    {
      if ((str[cpt] != ' ') && ((str[cpt + 1] == ' ')
                                || (str[cpt + 1] == '\0')))
        words++;
      cpt++;
    }
  return (words);
}

char	**my_str_to_wordtab(char *str)
{
  int   words;
  int   w_end;
  int   w_start;
  int   cpt;
  char  **wtab;

  words = cpt = w_end = w_start = 0;
  words = begin(str, words);
  wtab = malloc(sizeof(*wtab) * (words + 1));
  cpt = 0;
  while (str[w_end])
    {
      if ((str[w_end] != ' ') && (str[w_end - 1] == ' '))
        w_start = w_end;
      while (str[w_end] >= 'a' && str[w_end] <= 'z' || str[w_end] >= 'A' && str[w_end] <= 'Z')
	{
          wtab[cpt] = malloc(sizeof(**wtab) * ((w_end - w_start) + 1));
          my_strncpy(wtab[cpt], (str + w_start), ((w_end - w_start) + 1));
          cpt++;
	  w_end++;
	}
      if (str[w_end] == ' ')
	w_end++;
      if (str[w_end] == '(' || str[w_end] == ')' || str[w_end] == '*' || str[w_end] == '[' 
	  || str[w_end] == ']' || str[w_end] == ',' || str[w_end] == ';')
	{
	  wtab[cpt] = malloc(sizeof(**wtab) * ((w_end - w_start) + 1));
	  my_strncpy(wtab[cpt], (str + w_start), ((w_end - w_start) + 1));
	  cpt++;
	}
      w_end++;
    }
  wtab[cpt] = 0;
  return (wtab);
}
