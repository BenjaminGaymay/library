/*
** my_str_isprintable.c for my_str_isprintable in /home/benjamin.g/delivery/CPool_Day07/lib/my
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Tue Oct 11 08:52:01 2016 Benjamin GAYMAY
** Last update Thu Jan 19 18:18:19 2017 Benjamin GAYMAY
*/

int	my_str_isprintable(char *str)
{
  int	i;
  int	f;

  i = 0;
  f = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < ' ') && (str[i] >= 127))
	f++;
      i++;
    }
  return (f != 0 ? 0 : 1);
}
