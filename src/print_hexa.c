/*
** print_hexa.c for print_hexa in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Nov 11 17:49:40 2015 berdrigue bongolo-beto
** Last update Thu Jan  7 23:44:25 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include "my_printf.h"

int	prt_cond_hexa(int width, int len_p, char *str, t_pf_format *ptf_f)
{
  int	cp;

  cp = 0;
  if (my_get_char_pos_x(ptf_f->flags, '#') != -1 && len_p == 0)
    {
      if (ptf_f->conv_char == 'x')
	my_putstr_x("0x");
      else
	my_putstr_x("0X");
      cp = cp + my_strlen_x("0x");
      width = width - 1;
    }
  else
    cp = cp + print_nchar('0', len_p);
  my_putstr_x(str);
  cp = cp + print_nchar(' ', width);
  return (cp);
}

int	prt_cond_hexa2(int width, int len_p, char *str, t_pf_format *ptf_f)
{
  int	cp;

  cp = 0;
  if (my_get_char_pos_x(ptf_f->flags, '#') != -1 && len_p == 0)
    width = width - 2;
  cp = cp + print_nchar(' ', width);
  if (my_get_char_pos_x(ptf_f->flags, '#') != -1 && len_p == 0)
    {
      if (ptf_f->conv_char == 'x')
	my_putstr_x("0x");
      else
	my_putstr_x("0X");
      cp = cp + my_strlen_x("0x");
    }
  else
    cp = cp + print_nchar('0', len_p);
  my_putstr_x(str);
  return (cp);
}

int		print_hexa(va_list ap, t_pf_format *ptf_format)
{
  int		cp;
  char		*str;
  int		len_precision;
  int		width;
  int		res_set_prec;
  char		*base;

  if (ptf_format->conv_char == 'x')
    base = "0123456789abcdef";
  else
    base = "0123456789ABCDEF";
  set_width(&width, ptf_format, ap);
  res_set_prec = set_prec_len(&len_precision, ptf_format, ap);
  str = convert_base_x(my_itoa_x(va_arg(ap, unsigned int)), "0123456789", base);
  ((!res_set_prec || len_precision < my_strlen_x(str)) ? len_precision = 0 : 0);
  cp = my_strlen_x(str);
  width = (width > my_strlen_x(str) ? width : 0);
  check_width_and_precision2(&width, &len_precision, str, ptf_format);
  reset_len_p(ptf_format, &width, &len_precision);
  if (my_get_char_pos_x(ptf_format->flags, '-') != -1)
    cp = cp + prt_cond_hexa(width, len_precision, str, ptf_format);
  else
    cp = cp + prt_cond_hexa2(width, len_precision, str, ptf_format);
  return (cp);
}
