/*
** my_put_nbr.c for my_put_nbr in /home/benjamin.g/delivery/CPool_Day03
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Thu Oct  6 09:04:03 2016 Benjamin GAYMAY
** Last update Tue Feb 21 13:12:51 2017 Benjamin GAYMAY
*/

int	my_put_nbr(int n)
{
  if (n < 0)
    {
      my_putchar('-');
      n *= -1;
    }
  if ((n >= 0) && (n <= 9))
    my_putchar(n + '0');
  if (n > 9)
    {
      my_put_nbr(n / 10);
      my_put_nbr(n % 10);
    }
  return (0);
}
