/*
** my_strlowcase.c for my_strlowcase in /home/benjamin.g/delivery/CPool_Day06
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Mon Oct 10 20:17:00 2016 Benjamin GAYMAY
** Last update Thu Jan 19 18:19:02 2017 Benjamin GAYMAY
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'A') && (str[i] <= 'Z'))
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
