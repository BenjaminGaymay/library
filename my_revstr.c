/*
** my_revstr.c for my_revstr in /home/benjamin.g/delivery/CPool_Day06
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Mon Oct 10 12:11:06 2016 Benjamin GAYMAY
** Last update Tue Feb 21 13:13:56 2017 Benjamin GAYMAY
*/

char	*my_revstr(char *str)
{
  int	i;
  int	f;
  int	tmp;

  i = -1;
  while (str[++i] != '\0');
  i--;
  f = 0;
  tmp = 0;
  while (i > f)
    {
      tmp = str[f];
      str[f++] = str[i];
      str[i--] = tmp;
    }
  return (str);
}
