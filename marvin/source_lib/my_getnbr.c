/*
** my_getnbr.c for my_getnbr.c in /home/baudy_m//Desktop/Piscine/Jour_04
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Thu Oct  7 10:12:24 2010 marie baudy
** Last update Thu Oct  7 10:37:28 2010 marie baudy
*/

int	my_getnbr(char *str)
{
  int	neg;
  int	result;
  int	index;

  index = result = 0;
  neg = 1;
  while (str[index] == '-' || str[index] == '+')
    {
      if (str[index] == '-')
	neg = neg * -1;
      index++;
    }
  while (str[index] != '\0')
    {
      if (str[index] < '0' || str[index] > '9')
	return (result * neg);
      result = (result * 10) + str[index] - 48;
      index++;
    }
  return (result * neg);
}
