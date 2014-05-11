/*
** my_strcapitalize.c for my_strcapitalize in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 14:52:01 2010 marie baudy
** Last update Mon Oct 11 15:29:41 2010 marie baudy
*/

char	*my_strcapitalize(char *str)
{
  int	index;

  index = 0;
  if (str[0] >= 'a' && str[0] <= 'z')
    {
      str[0] = str[0] - 32;
      index++;
    }
  while (str[index] != '\0')
    {
      if (str[index] >= 'a' && str[index] <= 'z')
	if (str[index - 1] < 'A' || str[index - 1] > 'Z')
	  if (str[index - 1] < 'a' || str[index - 1] > 'z')
	    if (str[index - 1] < '0' || str[index - 1] > '9')
	      if (str[index - 1] != '$' && str[index - 1] != '%')
		str[index] = str[index] - 32;
      index++;
    }
  return (str);
}
