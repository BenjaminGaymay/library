/*
** my_strupcase.c for my_strupcase in /home/benjamin.g/delivery/CPool_Day06
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Mon Oct 10 20:07:23 2016 Benjamin GAYMAY
** Last update Thu Jan 19 18:20:59 2017 Benjamin GAYMAY
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a') && (str[i] <= 'z'))
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
