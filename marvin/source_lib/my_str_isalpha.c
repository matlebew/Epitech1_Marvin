/*
** my_str_isalpha.c for my_str_is_alpha in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 15:32:13 2010 marie baudy
** Last update Mon Oct 11 16:22:42 2010 marie baudy
*/

int	my_str_isalpha(char *str)
{
  int	index;
  
  index = 0;
  while (str[index] != '\0')
    {  
      if (str[index] >= 'a' && str[index] <= 'z' 
	  || str[index] >= 'A' && str[index] <= 'Z')
	index++;
      else
	return (0);
    }
  return (1);
}
