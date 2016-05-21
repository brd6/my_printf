/*
** my_put_nbr_x.c for my_put_nbr_x in /home/bongol_b/rendu/Piscine_C_J03
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Thu Oct  1 00:37:24 2015 berdrigue bongolo-beto
** Last update Wed Apr 13 07:58:22 2016 Berdrigue BONGOLO BETO
*/

#include "my_printf.h"

int	my_put_nbr_x(int nb)
{
  if (nb < 0)
    {
      my_putchar_x('-');
      nb = nb * (-1);
    }
  if (nb >= 0 && nb <= 9)
    my_putchar_x(nb + '0');
  if (nb > 9 || nb == -2147483648)
    {
      if (nb == -2147483648)
	{
	  my_put_nbr_x((nb / 10) * (-1));
	  my_put_nbr_x((nb % 10) * (-1));
	}
      else
	{
	  my_put_nbr_x(nb / 10);
	  my_put_nbr_x(nb % 10);
	}
    }
  return (1);
}
