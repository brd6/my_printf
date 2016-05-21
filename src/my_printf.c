/*
** my_printf.c for my_printf in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Mon Nov  2 09:06:07 2015 berdrigue bongolo-beto
** Last update Sun Feb 21 17:47:56 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include "my_printf.h"

void			set_printftab_and_init_var(t_printf printf_tab[12],
						   int *i, int *cp)
{
  *i = 0;
  *cp = 0;
  init_struct(&printf_tab[0], "", &print_nil);
  init_struct(&printf_tab[1], "di", &print_nbr);
  init_struct(&printf_tab[2], "o", &print_octal);
  init_struct(&printf_tab[3], "u", &print_unsigned_nbr);
  init_struct(&printf_tab[4], "xX", &print_hexa);
  init_struct(&printf_tab[5], "c", &print_char);
  init_struct(&printf_tab[6], "s", &print_str);
  init_struct(&printf_tab[7], "p", &print_pointer);
  init_struct(&printf_tab[8], "n", &print_ncount);
  init_struct(&printf_tab[9], "b", &print_binary);
  init_struct(&printf_tab[10], "S", &print_str2);
  init_struct(&printf_tab[11], "%", &print_percent);
}

int	format_tab_search(char c, t_printf printf_tab[12])
{
  int	i;

  i = 0;
  while (i != 12)
    {
      if (my_get_char_pos_x(printf_tab[i].type, c) != -1)
	return (i);
      i = i + 1;
    }
  return (0);
}

void	simple_print_handle(char *format, int *i, int *cp)
{
  if (format[*i] == '%' && format[*i + 1] == ' '  &&
      !check_next_char(&format[*i + 1]))
    {
      my_putstr_x("% ");
      *cp = *cp + 2;
      *i = *i + 1;
      skip_space(format, i);
      *i = *i - 1;
    }
  else
    {
      my_putchar_x(format[*i]);
      *cp = *cp + 1;
    }
}

int			my_printf(char *format, ...)
{
  int			i;
  int			cp;
  va_list		ap;
  t_pf_format		ptf_format;
  int			tab_index;
  t_printf		printf_tab[12];

  va_start(ap, format);
  set_printftab_and_init_var(printf_tab, &i, &cp);
  tab_index = 5;
  while (format != 0 && format[i])
    {
      if ((format[i] == '%' && check_format(&format[i])) &&
	  check_next_char(&format[i + 1]))
	{
	  init_ptf_format(format, &i, &ptf_format, &cp);
	  tab_index = format_tab_search(ptf_format.conv_char, printf_tab);
	  cp = cp + printf_tab[tab_index].func(ap, &ptf_format);
	}
      else
	simple_print_handle(format, &i, &cp);
      i = i + 1;
    }
  va_end(ap);
  return ((format == 0) ? -1 : cp);
}
