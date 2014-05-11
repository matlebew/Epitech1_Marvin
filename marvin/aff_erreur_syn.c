/*
** aff_erreur_syn.c for aff_erreur_syn in /home/chamat_a//local/Rush_1
** 
** Made by alexandre chamati
** Login   <chamat_a@epitech.net>
** 
** Started on  Sun Nov 28 14:31:41 2010 alexandre chamati
** Last update Sun Nov 28 23:25:44 2010 marie baudy
*/

#include "marvin.h"

int	compt_cro(char *str, int j)
{
  int	i;
  char	k;

  if (j == 0)
    k = '[';
  if (j == 1)
    k = ']';
  i = 0;
  while (str[i] != k)
    i++;
  return (i);
}


int	compt_par(char *str, int j)
{
  int	i;
  char	k;

  if (j == 0)
    k = '(';
  if (j == 1)
    k = ')';
  i = 0;
  while (str[i] != k)
    i++;
  return (i);
}

void	aff_error_cro(int paren_o, int paren_f, t_init *ptr)
{
  int	g;

  cro_total(ptr->str);
  my_putstr("Veuillez verifier la disposition de vos crochets,");
  my_putstr(" au caractere : ");
  if (paren_o > paren_f)
    {
      g = compt_cro(ptr->str, 0);
      my_put_nbr(g);
    }
  if (paren_f > paren_o)
    {
      g = compt_cro(ptr->str, 1);
      my_put_nbr(g);
    }
  my_putchar('\n');
  exit(0);
}

void	aff_error_par(int paren_o, int paren_f, t_init *ptr)
{
  int	h;

  paren_total(ptr->str);
  my_putstr("Veuillez verifier la disposition de vos parentheses,");
  my_putstr(" au caractere : ");
  if (paren_o > paren_f)
    {
      h = compt_par(ptr->str, 0);
      my_put_nbr(h);
    }
  if (paren_f > paren_o)
    {
      compt_par(ptr->str, 1);
      my_put_nbr((paren_f - paren_o));
    }
  my_putchar('\n');
  exit(0);
}




