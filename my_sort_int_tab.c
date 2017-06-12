/*
** my_sort_int_tab.c for my_sort_int_tab in /home/benjamin.g/save/nouveau_projet/lib/my
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Sun Nov 20 13:48:13 2016 Benjamin GAYMAY
** Last update Thu Jan 19 18:09:31 2017 Benjamin GAYMAY
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	tmp;
  int	f;

  i = 0;
  f = size;
  while (f != 0)
    {
      while (i != size - 1)
	{
	  if (tab[i] > tab[i + 1])
	    {
	      tmp = tab[i];
	      tab[i] = tab[i + 1];
	      tab[i + 1] = tmp;
	    }
	  i++;
	}
      i = 0;
      f--;
    }
}
