/*
** my_str_isnum.c for my_str_isnum in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 16:23:04 2010 marie baudy
** Last update Mon Oct 11 16:57:46 2010 marie baudy
*/

int	my_str_isnum(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (str[index] >= '0' && str[index] <= '9')
	index++;
      else
	return (0);
    }
  return (1);
}
