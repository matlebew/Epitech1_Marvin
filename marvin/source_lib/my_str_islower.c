/*
** my_str_islower.c for my_str_islower in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 16:58:16 2010 marie baudy
** Last update Mon Oct 11 16:59:33 2010 marie baudy
*/

int	my_str_islower(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (str[index] >= 'a' && str[index] <= 'z')
	index++;
      else
	return (0);
    }
  return (1);
}
