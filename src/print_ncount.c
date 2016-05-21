/*
** print_ncount.c for print_ncount in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Nov 11 20:02:44 2015 berdrigue bongolo-beto
** Last update Thu Jan  7 23:44:13 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include "my_printf.h"

int		print_ncount(va_list ap, t_pf_format *ptf_format)
{
  int		*nbr;

  nbr = va_arg(ap, int *);
  *nbr = my_atoi_x(ptf_format->field_width);
  return (0);
}
