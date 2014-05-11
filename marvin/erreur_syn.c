/*
** erreur_null.c for erreur_null in 
** 
** Made by alexandre chamati
** Login   <chamat_a@epitech.net>
** 
** Started on  Thu Oct 28 18:04:00 2010 alexandre chamati
** Last update Sun Nov 28 23:22:13 2010 marie baudy
*/

#include "marvin.h"

int	verif_point_virgule(t_init *ptr)
{
  if (ptr->str[ptr->k - 1] != ';' || ptr->str[ptr->k] != '\0')
    {
      my_putstr("Veuillez verifier que votre expression soit contenue");
      my_putstr(" avant le ';' au caractere : ");
      my_put_nbr(ptr->k - 1);
      my_putchar('\n');
      exit(0);
    }
  else
    return (1);
}

int	verif_crochet(int paren_o, int paren_f, int temp, t_init *ptr)
{
  while (ptr->str[ptr->j] != '\0')
    {
      if (ptr->str[ptr->j] == '[')
	{
	  paren_o = paren_o + 1;
	  ptr->i = ptr->j;
	  while (ptr->str[ptr->i] != '\0')
	    {
	      if (ptr->str[ptr->i] == ']')
		{
		  temp = ptr->i;
		  paren_f = paren_f + 1;
		  ptr->i = (ptr->k - 1);
		}
	      ptr->i = ptr->i + 1;
	    }
	}
      if (ptr->str[ptr->j] == ']' && ptr->j != temp)
	paren_f = (paren_f + 1) - (paren_o - 1);
      ptr->j = ptr->j + 1;
    }
  if (paren_o != paren_f)
    aff_error_cro(paren_o, paren_f, ptr);
  return (0);
}

int	verif_paren(int paren_o, int paren_f, int temp, t_init *ptr)
{
  while (ptr->str[ptr->j] != '\0')
    {
      if (ptr->str[ptr->j] == '(')
        {
	  paren_o = paren_o + 1;
	  ptr->i = ptr->j;
          while (ptr->str[ptr->i] != '\0')
	    {
              if (ptr->str[ptr->i] == ')')
                {
                  temp = ptr->i;
                  paren_f = paren_f + 1;
                  ptr->i = (ptr->k - 1);
                }
              ptr->i = ptr->i + 1;
            }
        }
      if (ptr->str[ptr->j] == ')' && ptr->j != temp)
	paren_f = paren_f + 1;
      ptr->j = ptr->j + 1;
    }
  if (paren_o != paren_f) 
    aff_error_par(paren_o, paren_f, ptr);
  return (0);
}

int	gest_erreur(char *str, t_init *ptr)
{
  int	temp;
  int	paren_o;
  int	paren_f;

  ptr->j = ptr->i = temp = paren_o = paren_f = 0;
  if (str == NULL)
    {
      my_putchar('\n');
      exit(0);
    }
  if (str[0] == ' ')
    {
      my_putstr("Veuillez supprimer le(s) espace(s) en debut d'expression.\n");
      exit (0);
    }
  verif_paren(paren_o, paren_f, temp, ptr);
  ptr->j = ptr->i = 0;
  verif_crochet(paren_o, paren_f, temp, ptr);
  ptr->j = ptr->i = 0;
  verif_point_virgule(ptr);
  return (0);
}

int		erreur_syn(char *str)
{
  t_init	ptr;

  ptr.str = str;
  ptr.k = my_strlen(ptr.str);
  gest_erreur(ptr.str, &ptr);
  return (0);
}
