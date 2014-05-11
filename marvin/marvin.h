/*
** marvin.h for marvin in /home/baudy_m//Desktop/Rush/marvin
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Fri Nov 26 22:08:19 2010 marie baudy
** Last update Sun Nov 28 23:14:57 2010 marie baudy
*/

#ifndef __MARVIN_H__
#define __MARVIN_H__

#include "my.h"
#include <stdlib.h>

typedef struct	s_init
{
  int		j;
  int		i;
  int		k;
  int		m;
  char		*str;
}		t_init;

/* dbtab.c */

char	*epur_str(char *str);
int	taille_dbtab(char *str);
int	taille_tab(char *str, int *m);
char	**doubl_tab(char *tab);
void	taille_tab_two(char *str, int *i, int *g);

/* erreur_syn.c */

int	erreur_syn(char *str);
int	gest_erreur(char *str, t_init *ptr);
int	verif_paren(int paren_o, int paren_f, int temp, t_init *ptr);
int	verif_crochet(int paren_o, int paren_f, int temp, t_init *ptr);
int	verif_point_virgule(t_init *ptr);

/* tab.c  */

void	for_doubl_tab(char *tab, int *i, int *m);

/* aff_erreur_syn.c  */

int	compt_cro(char *str, int j);
int	compt_par(char *str, int j);
void	aff_error_cro(int paren_o, int paren_f, t_init *ptr);
void	aff_error_par(int paren_o, int paren_f, t_init *ptr);

/* verif_total.c */

int	paren_total(char *str);
int	cro_total(char *str);

/* same.c */

void	return_func(char **tab, int left);
void	carac_special(char **tab, int *end);
void	param(char **tab, int end, int left);
int	str_compare_struct(char **tab, int index);
int	str_compare(char **tab, int index);

/* declaration.c */

int	func(char **tab, int left, int end);
void	ptr_func(char **tab, int save, int end);
int	var(char **tab, int left);

/* fonc_elem.c */

int	compt(char *str, int *i);

/* x_malloc.c */

void	*x_malloc(void *ptr, int size);

/* gere_func.c */

int	count_par(char **tab);
void	param_func(char **tab, int end, int left);
int	gere_other(char **tab, int save, int end);
int	run_str(char **tab);

#endif /* __MARVIN_H__ */
