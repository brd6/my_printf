/*
** print_percent.c for print_percent in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Sun Nov  8 17:06:20 2015 berdrigue bongolo-beto
** Last update Wed Apr 13 08:03:47 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include "my_printf.h"

int	print_percent(va_list ap, t_pf_format *ptf_format)
{
  (void)(ap);
  (void)(ptf_format);
  my_putchar_x('%');
  return (1);
}
