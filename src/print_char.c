/*
** print_char.c for print_char in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Nov  4 11:12:23 2015 berdrigue bongolo-beto
** Last update Thu Jan  7 23:44:30 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include "my_printf.h"

int	print_char(va_list ap, t_pf_format *ptf_format)
{
  char	c;
  int	cp;
  int	len_precision;
  int	width;

  c = (char)va_arg(ap, int);
  cp = 1;
  len_precision = 1;
  set_width(&width, ptf_format, ap);
  check_width(&width, cp);
  if (my_get_char_pos_x(ptf_format->flags, '-') != -1)
    {
      my_putchar_x(c);
      cp = cp + print_nchar(' ', width - len_precision);
    }
  else
    {
      cp = cp + print_nchar(' ', width - len_precision);
      my_putchar_x(c);
    }
  return (cp);
}
