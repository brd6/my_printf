/*
** print_pointer.c for print_pointer in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Nov 11 18:09:42 2015 berdrigue bongolo-beto
** Last update Wed Apr 13 08:05:23 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include "my_printf.h"

int		print_pointer(va_list ap, t_pf_format *ptf_format)
{
  unsigned long	nbr;
  int		cp;

  (void)(ptf_format);
  cp = 0;
  nbr = va_arg(ap, long);
  if (nbr == 0)
    {
      cp = cp + my_strlen_x("(nil)");
      my_putstr_x("(nil)");
    }
  else
    {
      cp = cp + 2;
      my_putstr_x("0x");
      cp = cp + my_putnbr_base_x(nbr, "0123456789abcdef");
    }
  return (cp);
}
