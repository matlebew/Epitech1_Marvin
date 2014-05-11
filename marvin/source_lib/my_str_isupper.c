/*
** my_str_isupper.c for my_str_isupper in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 17:00:00 2010 marie baudy
** Last update Mon Oct 11 17:01:10 2010 marie baudy
*/

int	my_str_isupper(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (str[index] >= 'A' && str[index] <= 'Z')
	index++;
      else
	return (0);
    }
  return (1);
}
