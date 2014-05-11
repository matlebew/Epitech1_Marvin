/*
** my_revstr.c for my_revstr in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Mon Oct 11 10:10:27 2010 marie baudy
** Last update Tue Oct 12 13:24:37 2010 marie baudy
*/

char	*my_revstr(char *str)
{
  int	begin;
  int	end;
  char	tmp;
  
  begin = 0;
  end = my_strlen(str) - 1;
  while (begin < end)
    {
      tmp = str[begin];
      str[begin] = str[end];
      str[end] = tmp;
      begin++;
      end--;
    }
  return (str);
}
