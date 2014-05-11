/*
** my_putchar.c for my_putchar in /home/baudy_m//Desktop/Piscine/Jour_07
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 12 12:20:17 2010 marie baudy
** Last update Sun Nov 28 11:00:37 2010 marie baudy
*/

int	my_putchar(char c)
{
  if (write (1, &c, 1) < 0)
    return (0);
}
