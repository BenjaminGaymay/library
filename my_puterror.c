/*
** my_puterror.c for my_puterror in /home/benjamin.g/delivery/CPool_Day04
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Thu Oct  6 15:28:00 2016 Benjamin GAYMAY
** Last update Tue Feb 21 13:12:26 2017 Benjamin GAYMAY
*/

#include <unistd.h>

int	my_puterror(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != 0);
  write(2, str, i);
  return (0);
}
