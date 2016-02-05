/*
** print_str2.c for print_str2 in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Thu Nov 12 10:54:51 2015 berdrigue bongolo-beto
** Last update Sat Nov 14 16:13:36 2015 berdrigue bongolo-beto
*/

#include <stdarg.h>
#include "./include/my_printf.h"

int	is_printable(char c)
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
      if (!is_printable(str[i]))
	{
	  cp = cp + my_putchar('\\');
	  cp = cp + print_nchar('0', 3 - my_nbr_len(str[i]));
	  cp = cp + my_putnbr_base(str[i], "01234567");
	}
      else
	cp = cp + my_putchar(str[i]);
      i = i + 1;
    }
  return (cp);
}

int	print_str2(va_list ap, t_pf_format *ptf_format)
{
  char	*str;
  int	cp;

  cp = 0;
  ((str = (char *)va_arg(ap, char *)) == 0) ? str = "(null)" : 0;
  cp = cp + print_mod_str(str);
  return (cp);
}
