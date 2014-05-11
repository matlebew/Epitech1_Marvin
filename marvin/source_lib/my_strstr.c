/*
** my_strstr.c for my_strstr in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 10:19:49 2010 marie baudy
** Last update Tue Oct 12 13:26:25 2010 marie baudy
*/

char	*my_strstr(char *str, char *to_find)
{
  int	index;

  index = 0;
  while (*str != '\0')
    {
      if (my_strncmp(str, to_find, my_strlen(to_find)) == 0)
	return (str);
      index++;
      return (0);
    } 
}
