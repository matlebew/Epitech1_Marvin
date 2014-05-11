/*
** my_strupcase.c for my_strupcase in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 11:47:10 2010 marie baudy
** Last update Mon Oct 11 14:44:15 2010 marie baudy
*/

char	*my_strupcase(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (str[index] >= 'a' && str[index] <= 'z')
	str[index] = str[index] - 32;
      index++;
    }
  return (str);
}
