/*
** print_nbr.c for print_nbr in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Nov  4 16:07:30 2015 berdrigue bongolo-beto
** Last update Wed Apr 13 08:01:55 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include "my_printf.h"

void	set_nb_sign(int *nbr, int *nbr_bak)
{
  if (*nbr < 0)
    {
      *nbr_bak = *nbr;
      *nbr = *nbr * (-1);
    }
}

void	set_mod_len_p(t_pf_format *ptf_f, int *width, int *len_p, int nbr)
{
  if (my_get_char_pos_x(ptf_f->flags, '0') != -1 &&
      ptf_f->precision == 0)
    {
      *len_p = *width;
      *width = 0;
      if (nbr < 0)
	*len_p = *len_p - 1;
    }
}

int	nbr_precision_handler(int width, int len_p, int nbr, t_pf_format *ptf_f)
{
  int	cp;

  cp = 0;
  if (my_get_char_pos_x(ptf_f->flags, '+') != -1 && (nbr < 0 || nbr < 0))
    {
      my_putchar_x('-');
      nbr = nbr * (-1);
      width = width - 1;
      cp = cp + 1;
    }
  else if (my_get_char_pos_x(ptf_f->flags, '+') != -1 && nbr > 0)
    my_putchar_x('+');
  nbr_space_handler(ptf_f, nbr, &cp);
  cp = cp + print_nchar('0', len_p);
  my_put_nbr_x(nbr);
  cp = cp + print_nchar(' ', width);
  return (cp);
}

int		pnbr_sd(t_pf_format *ptf_format, int *nbr, int width, int len_p)
{
  int		cp;
  int		sign;
  long		nbr2;

  cp = 0;
  set_mod_len_p(ptf_format, &width, &len_p, *nbr);
  if (my_get_char_pos_x(ptf_format->flags, '+') != -1 || *nbr < 0)
    {
      width = width - 1;
      cp = cp + 1;
    }
  cp = cp + print_nchar(' ', width);
  nbr_limit_check(nbr, &nbr2, &sign);
  if ((my_get_char_pos_x(ptf_format->flags, '+') != -1 && *nbr < 0) ||
      *nbr < 0 || !sign)
    {
      my_putchar_x('-');
      *nbr = *nbr * (-1);
    }
  else if ((my_get_char_pos_x(ptf_format->flags, '+') != -1 && *nbr > 0))
    my_putchar_x('+');
  nbr_space_handler(ptf_format, *nbr, &cp);
  cp = cp + print_nchar('0', len_p);
  (nbr2 == 0) ? my_put_nbr_x(*nbr) : my_putnbr_x(nbr2);
  return (cp);
}

int	print_nbr(va_list ap, t_pf_format *ptf_format)
{
  int	nbr;
  int	nbr_bak;
  int	cp;
  int	len_precision;
  int	width;
  int	res_set_prec;

  set_width(&width, ptf_format, ap);
  res_set_prec = set_prec_len(&len_precision, ptf_format, ap);
  nbr = va_arg(ap, int);
  nbr_bak = nbr;
  set_nb_sign(&nbr, &nbr_bak);
  if (!res_set_prec || len_precision < my_nbr_len_x(nbr))
    len_precision = 0;
  cp = my_nbr_len_x(nbr);
  width = (width > my_nbr_len_x(nbr) ? width : 0);
  check_width_and_precision(&width, &len_precision, nbr, ptf_format);
  if (my_get_char_pos_x(ptf_format->flags, '-') != -1)
    cp = cp + nbr_precision_handler(width, len_precision, nbr_bak, ptf_format);
  else
    cp = cp + pnbr_sd(ptf_format, &nbr_bak, width, len_precision);
  return (cp);
}
