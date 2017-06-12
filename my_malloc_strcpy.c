/*
** my_malloc_strcpy.c for my_malloc_strcpy in /home/benjamin.g/save/Create/library
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Thu Jan 19 18:13:18 2017 Benjamin GAYMAY
** Last update Tue Feb 21 13:11:53 2017 Benjamin GAYMAY
*/

#include <stdlib.h>

char	*my_strcpy(char *s1, char *s2)
{
  int	i;

  if ((s1 = malloc(sizeof(char) * (my_strlen(s2) + 1))) == NULL)
    return (NULL);
  i = 0;
  while (s2[i] != '\0')
    s1[i] = s2[i++];
  s1[i] = '\0';
  return (s1);
}
