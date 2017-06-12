/*
** my_swap.c for my_swap in /home/benjamin.g/delivery/CPool_Day04
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Thu Oct  6 10:10:18 2016 Benjamin GAYMAY
** Last update Thu Jan 19 18:21:10 2017 Benjamin GAYMAY
*/

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
  return (0);
}
