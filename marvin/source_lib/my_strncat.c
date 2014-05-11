/*
** my_strncat.c for my_strncat in /home/baudy_m//Desktop/Piscine/Jour_07
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 12 08:05:23 2010 marie baudy
** Last update Tue Oct 12 12:17:20 2010 marie baudy
*/

char	*my_strncat(char *str1, char *str2, int n)
{
  int	index;
  int	index2;

  index = index2 = 0;
  while (str1[index] != '\0')
    index++;
  while (str2[index2] != '\0' && index2 <= (n - 1))
    {
      str1[index] = str2[index2];
      index++;
      index2++;
    }
  str1[index] = '\0';
  return (str1);
}
