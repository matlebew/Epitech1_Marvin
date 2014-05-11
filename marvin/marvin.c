/*
** marvin.c for marvin in /home/chamat_a//local/Rush_1
** 
** Made by alexandre chamati
** Login   <chamat_a@epitech.net>
** 
** Started on  Sat Nov 27 11:12:14 2010 alexandre chamati
** Last update Sun Nov 28 23:14:45 2010 marie baudy
*/

#include "marvin.h"

int     main(int ac, char **av)
{
  if (ac)
    {
      erreur_syn(av[1]);
      doubl_tab(av[1]);
    }
  return (0);
}
