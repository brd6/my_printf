/*
** print_binary.c for print_binary in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Thu Nov 12 10:42:28 2015 berdrigue bongolo-beto
** Last update Thu Nov 12 10:44:37 2015 berdrigue bongolo-beto
*/

#include <stdarg.h>
#include "./include/my_printf.h"

int		print_binary(va_list ap, t_pf_format *ptf_format)
{
  unsigned long	nbr;
  int		cp;

  nbr = va_arg(ap, long);
  cp = cp + my_putnbr_base(nbr, "01");
  return (my_nbr_len(nbr));
}
