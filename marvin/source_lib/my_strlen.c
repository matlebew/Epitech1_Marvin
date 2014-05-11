/*
** my_strlen.c for my_strlen.c in /home/baudy_m//Desktop/Piscine/Jour_04
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Thu Oct  7 09:59:36 2010 marie baudy
** Last update Thu Oct  7 10:00:34 2010 marie baudy
*/

int	my_strlen(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    index++;
  return (index);
}
