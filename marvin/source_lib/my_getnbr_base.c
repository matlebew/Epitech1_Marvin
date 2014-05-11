/*
** my_getnbr_base.c for my_getnbr_base in /home/baudy_m//Desktop/Piscine/Jour_06
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Tue Oct 12 07:42:09 2010 marie baudy
** Last update Tue Oct 12 13:22:33 2010 marie baudy
*/

int	if_in_base(char c, char * base)
{
  int	index;

  index = 0;
  while (base[index] != '\0')
    {
      if (c == base[index])
	return (1);
      index++;
    }
  return (-1);
}

int	pow_it(char nbr, char *base, int pow)
{
  int	nb;
  int	baselen;

  nb = 0;
  baselen = my_strlen(base);
  while (base[nb] != nbr)
    nb++;
  while (pow > 1)
    {
      nb *= baselen;
      pow--;
    }
  return (nb);
}

int	my_getnbr_base(char *str, char *base)
{
  int	nbr;
  int	baselen;
  int	neg;
  int	index;

  nbr = index = 0;
  baselen = my_strlen(base);
  while ((str[index] != '\0') && if_in_base(str[index], base))
    {
      nbr += pow_it(str[index], base, my_strlen(str));
      index++;
    }
  if ((neg % 2) > 0)
    nbr *= -1;
  return (nbr);
}
