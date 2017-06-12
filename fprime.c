/*
** fprime.c for fprime in /home/benjamin.g
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Thu Feb 16 14:30:32 2017 Benjamin GAYMAY
** Last update Thu Apr 27 16:55:59 2017 Benjamin GAYMAY
*/

#include <stdio.h>

int	my_getnbr(char *s)
{
  int	nb;
  int	neg;
  int	i;

  nb = 0;
  i = -1;
  neg = 1;
  while (s[++i] == '-')
    neg = neg * -1;
  while (s[i] >= '0' && s[i] <= '9')
    nb = nb * 10 + s[i++] - '0';
  return (nb * neg);
}

void	fprime(int nb)
{
  int	i;

  if (nb <= 1)
    printf("%c", nb + '0');
  while (nb > 1)
    {
      i = 1;
      while (nb % ++i != 0);
      nb /= i;
      printf((nb != 1 ? "%d*" : "%d"), i);
    }
}

int	main(int ac, char **av)
{
  if (ac == 2)
    fprime(my_getnbr(av[1]));
  printf("\n");
  return (0);
}
