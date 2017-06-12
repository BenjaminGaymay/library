/*
** my_str_isupper.c for my_str_isupper in /home/benjamin.g/delivery/CPool_Day06
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Mon Oct 10 22:13:20 2016 Benjamin GAYMAY
** Last update Thu Jan 19 18:18:12 2017 Benjamin GAYMAY
*/

int	my_str_isupper(char *str)
{
  int	i;
  int	f;

  i = 0;
  f = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'A') || (str[i] > 'Z'))
	f++;
      i++;
    }
  return (f != 0 ? 0 : 1);
}
