/*
** my_str_is_printable.c for my_str_isprintable in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 17:01:42 2010 marie baudy
** Last update Tue Oct 12 07:34:39 2010 marie baudy
*/

int	my_str_isprintable(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (str[index] >= ' ')
	return (0);
      else
	index++;
    }
  return (1);
}
