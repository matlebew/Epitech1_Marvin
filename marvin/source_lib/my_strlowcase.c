/*
** my_strlowcase.c for my_strlowcase in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 14:44:44 2010 marie baudy
** Last update Mon Oct 11 14:51:22 2010 marie baudy
*/

char	*my_strlowcase(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (str[index] >= 'A' && str[index] <= 'Z')
	str[index] = str[index] + 32;
      index++;
    }
  return (str);
}
