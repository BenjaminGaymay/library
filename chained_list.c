/*
** chained_list.c for chained_list in /home/benjamin.g/save/test
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Tue Jan 24 19:01:02 2017 Benjamin GAYMAY
** Last update Wed Apr  5 16:07:54 2017 Benjamin GAYMAY
*/

#include <stdlib.h>
#include <unistd.h>
#include "chained_list.h"

int		my_put_in_list(t_list **list, void *my_struct)
{
  t_list	*element;

  if ((element = malloc(sizeof(*element))) == NULL)
    return (84);
  element->my_struct = my_struct;
  element->next = *list;
  *list = element;
  return (0);
}

void		my_show_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_put(tmp->my_struct);
      write(1, "\n", 1);
      tmp = tmp->next;
    }
}

int		my_len_list(t_list *list)
{
  t_list	*tmp;
  int		i;

  tmp = list;
  i = 0;
  while (tmp != NULL)
    {
      ++i;
      tmp = tmp->next;
    }
  return (i);
}
