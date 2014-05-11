/*
** my_putstr.c for my_putstr.c in /home/baudy_m//Desktop/Piscine/Jour_04
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Thu Oct  7 09:55:03 2010 marie baudy
** Last update Thu Oct  7 09:59:13 2010 marie baudy
*/

int	my_putstr(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    my_putchar(str[index++]);
}
