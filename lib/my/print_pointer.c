/*
** print_pointer.c for print_pointer in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Nov 11 18:09:42 2015 berdrigue bongolo-beto
** Last update Wed Nov 11 20:27:30 2015 berdrigue bongolo-beto
*/

#include <stdarg.h>
#include "./include/my_printf.h"

int		print_pointer(va_list ap, t_pf_format *ptf_format)
{
  unsigned long	nbr;
  char		*base;
  int		cp;

  cp = 0;
  nbr = va_arg(ap, long);
  if (nbr == 0)
    {
      cp = cp + my_strlen("(nil)");
      my_putstr("(nil)");
    }
  else
    {
      cp = cp + 2;
      my_putstr("0x");
      cp = cp + my_putnbr_base(nbr, "0123456789abcdef");
    }
  return (cp);
}
