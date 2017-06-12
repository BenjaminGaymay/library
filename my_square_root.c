/*
** my_square_root.c for my_square_root in /home/benjamin.g/delivery/CPool_Day05
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Fri Oct  7 20:16:37 2016 Benjamin GAYMAY
** Last update Thu Jan 19 18:09:57 2017 Benjamin GAYMAY
*/

int	my_square_root(int nb)
{
  int	i;

  i = 1;
  while ((i*i) < nb)
    i++;
  if ((i*i) > nb)
    return (0);
  if (i > 2147483647)
    return (0);
  return (i);
}
