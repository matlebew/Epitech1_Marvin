/*
** my_str_dup.c for my_strdup in /home/baudy_m//Desktop/Piscine/Jour_08
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Wed Oct 13 09:04:10 2010 marie baudy
** Last update Fri Nov 12 19:07:12 2010 marie baudy
*/

#include <stdlib.h>

char	*my_strdup(char *str)
{
  char	*str2;

  str2 = malloc(sizeof(*str2) * (my_strlen(str) + 1));
  if (str2 == 0)
    {
      my_putstr("Error with malloc in ==> my_strdup\n");
      return (0);
    }
  my_strcpy(str2, str);
  return (str2);
}
