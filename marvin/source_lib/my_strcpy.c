/*
** my_strcpy.c for my_strcpy in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 09:31:16 2010 marie baudy
** Last update Mon Oct 11 09:40:57 2010 marie baudy
*/

char	*my_strcpy(char *dest, char *src)
{
  int	index;
  
  index = 0;
  while (src[index] != '\0')
    dest[index] = src[index++];
  dest[index] = '\0';
  return (dest);
}
