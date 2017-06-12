/*
** my_str_isalpha.c for my_str_isalpha in /home/benjamin.g/delivery/CPool_Day06
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Mon Oct 10 20:52:44 2016 Benjamin GAYMAY
** Last update Thu Jan 19 18:16:18 2017 Benjamin GAYMAY
*/

int	my_str_isalpha(char *str)
{
  int	i;
  int	f;

  i = 0;
  f = 0;
  while (str[i] != '\0')
    {
      if (!(str[i] >= 'A') && (str[i] <= 'Z'))
	f++;
      if (!(str[i] >= 'a') && (str[i] <= 'z'))
	f++;
      i++;
    }
  return (f != 0 ? 0 : 1);
}
