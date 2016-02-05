/*
** print_octal.c for print_octal in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Nov 11 17:01:15 2015 berdrigue bongolo-beto
** Last update Sat Nov 28 10:24:05 2015 berdrigue bongolo-beto
*/

#include <stdarg.h>
#include "./include/my_printf.h"

int	prt_cond(int width, int len_p, char *str, t_pf_format *ptf_f)
{
  int	cp;

  cp = 0;
  if (my_get_char_pos(ptf_f->flags, '#') != -1 && len_p == 0)
    {
      cp = cp + my_putchar('0');
      width = width - 1;
    }
  else
    cp = cp + print_nchar('0', len_p);
  my_putstr(str);
  cp = cp + print_nchar(' ', width);
  return (cp);
}

int	prt_cond2(int width, int len_p, char *str, t_pf_format *ptf_f)
{
  int	cp;

  cp = 0;
  if (my_get_char_pos(ptf_f->flags, '#') != -1 && len_p == 0)
    width = width - 1;
  cp = cp + print_nchar(' ', width);
  if (my_get_char_pos(ptf_f->flags, '#') != -1 && len_p == 0)
    cp = cp + my_putchar('0');
  else
    cp = cp + print_nchar('0', len_p);
  my_putstr(str);
  return (cp);
}

int		print_octal(va_list ap, t_pf_format *ptf_format)
{
  unsigned int	nbr;
  int		cp;
  char		*str;
  int		len_precision;
  int		width;
  int		res_set_prec;

  nbr = va_arg(ap, unsigned int);
  set_width(&width, ptf_format, ap);
  res_set_prec = set_prec_len(&len_precision, ptf_format, ap);
  str = convert_base(my_itoa(nbr), "0123456789", "01234567");
  ((!res_set_prec || len_precision < my_strlen(str)) ? len_precision = 0 : 0);
  cp = my_strlen(str);
  width = (width > my_strlen(str) ? width : 0);
  check_width_and_precision2(&width, &len_precision, str, ptf_format);
  if (my_get_char_pos(ptf_format->flags, '-') != -1)
    cp = cp + prt_cond(width, len_precision, str, ptf_format);
  else
    cp = cp + prt_cond2(width, len_precision, str, ptf_format);
  return (cp);
}
