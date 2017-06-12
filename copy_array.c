/*
** copy_array.c for copy_array in /home/benjamin.g/save/Create/library
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Thu Jan 19 17:58:30 2017 Benjamin GAYMAY
** Last update Tue Feb 21 13:10:51 2017 Benjamin GAYMAY
*/

#include <stdlib.h>

char	**copy_array(char **old, char **new)
{
  int	i;
  int	j;

  i = 0;
  while (old[i] != NULL)
    i++;
  if ((old = malloc(sizeof(char *) * (i + 1))) == NULL)
    return (NULL);
  i = 0;
  while (old[i] != NULL)
    {
      j = 0;
      if ((new[i] = malloc(sizeof(char) * (my_strlen(old[i] + 1)))) == NULL)
	return (NULL);
      while (old[i][j] != '\0')
	new[i][j] = old[i][j++];
      i++;
    }
  return (new);
}
