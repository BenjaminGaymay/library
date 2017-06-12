/*
** my_strncpy.c for my_strncpy in /home/benjamin.g/delivery/CPool_Day06
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Mon Oct 10 10:27:00 2016 Benjamin GAYMAY
** Last update Sun Nov 20 13:51:27 2016 Benjamin GAYMAY
*/

#include "my.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  int	g;

  g = my_strlen(dest);
  if (g > n)
    {
      dest[n] = '\0';
    }
  while (i < n)
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
