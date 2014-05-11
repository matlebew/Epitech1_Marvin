/*
** my_showstr.c for my_showstr in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 12 07:35:56 2010 marie baudy
** Last update Tue Oct 12 13:25:17 2010 marie baudy
*/

int	my_showstr(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (str[index] >= ' ')
	my_putchar(str[index]);
      else
	{
	  my_putchar('\\');
	  my_putchar('0');
	  my_putnbr_base(str[index], "0123456789abcdef");
	}
      index++;
    }
  return (0);
}
