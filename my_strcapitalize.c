/*
** my_strcapitalize.c for my_strcapitalize in /home/benjamin.g/delivery/CPool_Day06
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Mon Oct 10 20:19:30 2016 Benjamin GAYMAY
** Last update Thu Jan 19 18:10:44 2017 Benjamin GAYMAY
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  if ((str[i] >= 'a') && (str[i] <= 'z'))
    str[i] = str[i] - 32;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a') && (str[i] <= 'z'))
	if ((str[i - 1] >= ' ') && (str[i - 1] <= '@'))
	  str[i] = str[i] - 32;
      if ((str[i] >= 'A') && (str[i] <= 'Z'))
	{
	  if ((str[i - 1] >= '0') && (str[i - 1] <= '9'))
	    str[i] = str[i] + 32;
	  if ((str[i - 1] >= 'a') && (str[i - 1] <= 'z'))
	    str[i] = str[i] + 32;
	}
      i++;
    }
  return (str);
}
