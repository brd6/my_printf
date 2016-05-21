/*
** print_str2.c for print_str2 in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Thu Nov 12 10:54:51 2015 berdrigue bongolo-beto
** Last update Wed Apr 13 08:07:14 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include "my_printf.h"

int	is_printable_x(char c)
{
  return (c >= ' ' && c <= '~');
}

int	print_mod_str(char *str)
{
  int	i;
  int	cp;

  i = 0;
  cp = 0;
  while (str[i])
    {
      if (!is_printable_x(str[i]))
	{
	  cp = cp + my_putchar_x('\\');
	  cp = cp + print_nchar('0', 3 - my_nbr_len_x(str[i]));
	  cp = cp + my_putnbr_base_x(str[i], "01234567");
	}
      else
	cp = cp + my_putchar_x(str[i]);
      i = i + 1;
    }
  return (cp);
}

int	print_str2(va_list ap, t_pf_format *ptf_format)
{
  char	*str;
  int	cp;

  (void)(ptf_format);
  cp = 0;
  ((str = (char *)va_arg(ap, char *)) == 0) ? str = "(null)" : 0;
  cp = cp + print_mod_str(str);
  return (cp);
}
