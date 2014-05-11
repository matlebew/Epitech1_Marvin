/*
** my_strncpy.c for my_strncpy in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 09:39:37 2010 marie baudy
** Last update Mon Oct 11 10:09:56 2010 marie baudy
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	index;

  index = 0;
  while (src[index] != '\0' && n > 0)
    {
      dest[index] = src[index++];
      if (src[index] == '\0')
	dest[index] = '\0';
      n--;
    }
  return (dest);
}
