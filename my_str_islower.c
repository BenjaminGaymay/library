/*
** my_str_islower.c for my_str_islower in /home/benjamin.g/delivery/CPool_Day06
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Mon Oct 10 22:11:32 2016 Benjamin GAYMAY
** Last update Thu Jan 19 18:16:47 2017 Benjamin GAYMAY
*/

int	my_str_islower(char *str)
{
  int	i;
  int	f;

  i = 0;
  f = 0;
  while (str[i] != '\0')
    {
      if (!(str[i] >= 'a') && (str[i] <= 'z'))
	f++;
      i++;
    }
  return (f != 0 ? 0 : 1);
}
