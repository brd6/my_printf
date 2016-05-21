/*
** print_binary.c for print_binary in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Thu Nov 12 10:42:28 2015 berdrigue bongolo-beto
** Last update Wed Apr 13 08:06:54 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include "my_printf.h"

int		print_binary(va_list ap, t_pf_format *ptf_format)
{
  long		nbr;

  (void)(ptf_format);
  nbr = va_arg(ap, long);
  my_putnbr_base_x(nbr, "01");
  return (my_nbr_len_x(nbr));
}
