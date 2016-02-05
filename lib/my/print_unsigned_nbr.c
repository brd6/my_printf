/*
** print_unsigned_nbr.c for print_unsigned_nbr in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Nov 11 17:42:06 2015 berdrigue bongolo-beto
** Last update Sat Nov 14 15:28:09 2015 berdrigue bongolo-beto
*/

#include <stdarg.h>
#include "./include/my_printf.h"

void	reset_len_p(t_pf_format *ptf_format, int *width, int *len_precision)
{
  if (my_get_char_pos(ptf_format->flags, '0') != -1 &&
      my_get_char_pos(ptf_format->flags, '-') == -1)
    {
      *len_precision = *width;
      *width = 0;
    }
}

int		print_unsigned_nbr(va_list ap, t_pf_format *ptf_format)
{
  unsigned int	nbr;
  int		cp;
  char		*str;
  int		len_precision;
  int		width;
  int		res_set_prec;
  int		dies_pos;

  dies_pos = my_get_char_pos(ptf_format->flags, '#');
  ptf_format->flags[dies_pos] = '_';
  nbr = va_arg(ap, unsigned int);
  set_width(&width, ptf_format, ap);
  res_set_prec = set_prec_len(&len_precision, ptf_format, ap);
  str = convert_base(my_itoa(nbr), "0123456789", "0123456789");
  ((!res_set_prec || len_precision < my_strlen(str)) ? len_precision = 0 : 0);
  cp = my_strlen(str);
  width = (width > my_strlen(str) ? width : 0);
  check_width_and_precision2(&width, &len_precision, str, ptf_format);
  reset_len_p(ptf_format, &width, &len_precision);
  if (my_get_char_pos(ptf_format->flags, '-') != -1)
    cp = cp + prt_cond(width, len_precision, str, ptf_format);
  else
    cp = cp + prt_cond2(width, len_precision, str, ptf_format);
  return (cp);
}
