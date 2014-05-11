/*
** my_sort_int_tab.c for my_sort_int_tab.c in /home/baudy_m//Desktop/Piscine/Jour_04
** 
** Made by marie baudy
** Login   <baudy_m@epitech.net>
** 
** Started on  Thu Oct  7 10:39:12 2010 marie baudy
** Last update Tue Oct 12 12:30:18 2010 marie baudy
*/

void	my_sort_int_tab(char *tab, int size)
{
  int	index;
  char	tmp;

  index = 0;
  while (index <= size)
    if (tab[index] < tab[index + 1])
      {
	tmp = tab[index];
	tab[index] = tab[index + 1];
	tab[index + 1] = tmp;
	index = 0;
      }
    else
      index++;
}
