/*
** my_strcmp.c for my_strcmp in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 11:09:31 2010 marie baudy
** Last update Mon Oct 11 16:42:41 2010 marie baudy
*/

int	my_strcmp(char *s1, char *s2)
{
  int	index;

  index = 0;
  while (s1[index] != '\0' || s2[index] != '\0')
    {
      if (s1[index] != s2[index])
	return (s1[index] - s2[index]);
      index++;
    }
  return (0);
}
