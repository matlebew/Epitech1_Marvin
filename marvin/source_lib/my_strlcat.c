/*
** my_strlcat.c for my_strlcat in /home/baudy_m//Desktop/Piscine/Jour_07
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 12 08:07:34 2010 marie baudy
** Last update Tue Oct 12 12:19:21 2010 marie baudy
*/

char	*my_strlcat(char *str1, char *str2, int l)
{
  int	index;
  int	index2;

  index = index2 = 0;
  while (str1[index] != '\0')
    index++;
  while (str2[index2] != '\0' && index2 <= (l - 1))
    {
      str1[index] = str2[index2];
      index++;
      index2++;
    }
  str1[index] = '\0';
  return (str1);
}
