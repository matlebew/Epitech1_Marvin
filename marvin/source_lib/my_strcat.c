/*
** my_strcat.c for my_strcat in /home/baudy_m//Desktop/Piscine/Jour_07
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 12 08:02:31 2010 marie baudy
** Last update Tue Nov 23 15:33:24 2010 marie baudy
*/

char	*my_strcat(char *str1, char *str2)
{
  int	index;
  int	index2;
  
  index = index2 = 0;
  while (str1[index] != '\0')
    index++;
  while (str2[index2] != '\0')
    {
      str1[index] = str2[index2];
      index++;
      index2++;
    }
  str1[index] = '\0';
  return (str1);
}
