/*
** print_str.c for print_str in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Nov  4 16:21:56 2015 berdrigue bongolo-beto
** Last update Thu Jan  7 23:40:00 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include <unistd.h>
#include "my_printf.h"

int	print_str(va_list ap, t_pf_format *ptf_format)
{
  char	*str;
  int	cp;
  int	len_precision;
  int	width;
  int	res_set_prec;

  set_width(&width, ptf_format, ap);
  res_set_prec = set_prec_len(&len_precision, ptf_format, ap);
  ((str = (char *)va_arg(ap, char *)) == 0) ? str = "(null)" : 0;
  (!res_set_prec ? len_precision = my_strlen_x(str) : 0);
  cp = (len_precision > my_strlen_x(str) ? my_strlen_x(str) : len_precision);
  check_width(&width, cp);
  if (my_get_char_pos_x(ptf_format->flags, '-') != -1)
    {
      my_putnstr_x(str, len_precision);
      cp = cp + print_nchar(' ', width - len_precision);
    }
  else
    {
      cp = cp + print_nchar(' ', width - len_precision);
      my_putnstr_x(str, len_precision);
    }
  return (cp);
}
