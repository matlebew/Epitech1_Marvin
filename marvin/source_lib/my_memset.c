/*
** my_memset.c for my_memset in /home/baudy_m//Desktop/Compilation/source_lib
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Nov  2 14:26:44 2010 marie baudy
** Last update Tue Nov  2 14:27:51 2010 marie baudy
*/

void	*my_memset(void *str, char c, int n)
{
  int	index;

  index = 0;
  while (index < n)
    {
      *((char*)(str) + index) = c;
      index++;
    }
  return (str);
}
