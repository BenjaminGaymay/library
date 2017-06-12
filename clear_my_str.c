/*
** clear_my_str.c for clear_my_str in /home/benjamin.g
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Thu Jan 19 17:19:46 2017 Benjamin GAYMAY
** Last update	Mon Jun 12 23:13:45 2017 Benjamin GAYMAY
*/

#include <stdlib.h>
#include "my.h"
#include "macro.h"
#include "minishell2.h"

char		*transform_char(char *str, char old, const char new)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == old)
	str[i] = new;
      ++i;
    }
  return (str);
}

char		*clear_my_str(char *str, const char separator)
{
  int		i;
  int		h;
  char		*new;

  h = 0;
  i = 0;
  if ((new = my_calloc(my_strlen(str) + 1, sizeof(char))) == NULL)
    return (NULL);
  while (str[i] == separator)
    ++i;
  while (str[i] != '\0')
    {
      if (str[i] == separator)
	new[h++] = separator;
      while (str[i] == separator)
	++i;
      if (str[i] != '\0')
	new[h++] = str[i++];
    }
  if (h > 0 && new[h - 1] == separator)
    new[h - 1] = '\0';
  free(str);
  return (new);
}
