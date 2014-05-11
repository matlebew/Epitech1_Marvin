/*
** my_putnbr_base.c for my_putnbr_base in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 12 07:38:54 2010 marie baudy
** Last update Tue Nov 23 15:33:48 2010 marie baudy
*/

int	my_putnbr_base(int nbr, char *base)
{
  int	baselen;

  if (nbr == 0)
    {
      my_putchar('0');
      return (0);
    }
  if (nbr < 0)
    {
      nbr *= -1;
      my_putchar('-');
    }
  baselen = my_strlen(base);
  if (nbr >= baselen)
    {
      my_putnbr_base(nbr / baselen, base);
      my_putchar(base[nbr % baselen]);
    }
  if ((nbr < baselen) && nbr > 0)
    my_putchar(base[nbr % baselen]);
  return (nbr);
}
