/*
** my_strcat.c for strcat in /home/benjamin.g/delivery/CPool_Day07/lib/my
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Tue Oct 11 13:10:25 2016 Benjamin GAYMAY
** Last update Tue Feb 21 13:11:30 2017 Benjamin GAYMAY
*/

#include <stdlib.h>

char	*my_malloc_strcat(char *dest, char *src)
{
  int	i;
  int	f;
  char	*new;

  i = my_strlen(dest) + my_strlen(src);
  f = 0;
  if ((new = malloc(sizeof(*new) * (i + 1))) == NULL)
    return (NULL);
  i = 0;
  new[0] = '\0';
  while (dest[i] != '\0')
    new[i] = dest[i++];
  while (src[f] != '\0')
    new[i++] = src[f++];
  new[i] = '\0';
  return (new);
}
