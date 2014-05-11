/*
** my_showmem.c for my_showmem in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 12 07:49:31 2010 marie baudy
** Last update Tue Oct 12 13:24:55 2010 marie baudy
*/

void	my_putnbr_base_pad(int nbr, char *base, int pad)
{
  int	base_len;

  if (pad > 0)
    base_len = my_strlen(base);
  if (pad > 0)
    {
      my_putnbr_base_pad(nbr / base_len, base, pad - 1);
      my_putchar(base[nbr % base_len]);
    }
}

void	my_showmem16(char *str, int size)
{
  int   index;
  
  index = 0;
  my_putnbr_base_pad((int)str, "0123456789abcdef", 8);
  my_putchar(':');
  while (index < 16)
    {
      if ((index % 2) == 0)
	my_putchar(' ');
      if (index < size)
	my_putnbr_base_pad(str[index], "0123456789abcdef", 2);
      else
	my_putstr("  ");
      index++;
    }
  index = 0;
  my_putstr("  ");
  while(index < 16 && index < size)
    {
      if (str[index] >= 32 && str[index] <= 127)
        my_putchar(str[index]);
      else
        my_putchar('.');
      index++;
    }
}

int	my_showmem(char *str, int size)
{
  int	index;

  index = 0;
  while (index < size)
    {
      my_showmem16(&str[index], size - index);
      my_putchar('\n');
      index = index+ 16;
    }
  return (0);
}
