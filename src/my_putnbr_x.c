/*
** my_putnbr_x.c for my_putnbr_x in /home/bongol_b/rendu/PSU_2015_my_printf/lib/my
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Sat Nov 14 18:34:01 2015 berdrigue bongolo-beto
** Last update Wed Apr 13 08:08:08 2016 Berdrigue BONGOLO BETO
*/

#include "my_printf.h"

int	my_putnbr_x(long nb)
{
  if (nb < 0)
    {
      my_putchar_x('-');
      nb = nb * (-1);
    }
  if (nb >= 0 && nb <= 9)
    my_putchar_x(nb + '0');
  if (nb > 9)
    {
      my_put_nbr_x(nb / 10);
      my_put_nbr_x(nb % 10);
    }
  return (1);
}
