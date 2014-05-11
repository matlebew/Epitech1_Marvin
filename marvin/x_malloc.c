/*
** x_malloc.c for x_malloc in /home/chamat_a//local
** 
** Made by alexandre chamati
** Login   <chamat_a@epitech.net>
** 
** Started on  Sun Nov 28 17:20:04 2010 alexandre chamati
** Last update Sun Nov 28 17:23:42 2010 alexandre chamati
*/

#include "marvin.h"

void    *x_malloc(void *ptr, int size)
{
  ptr = malloc(sizeof(ptr) * size);
  if (ptr == NULL)
    {
      my_putstr("Erreur avec malloc\n");
      exit(0);
    }
  return (ptr);
}
