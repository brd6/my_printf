/*
** init_arg.c for init_arg in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Nov  4 11:19:58 2015 berdrigue bongolo-beto
** Last update Wed Apr 13 07:58:59 2016 Berdrigue BONGOLO BETO
*/

#include <stdarg.h>
#include "my_printf.h"

void	init_flags(char flag, int *flag_cp, t_pf_format *ptf_f, int *v_set)
{
  if (*v_set == 0)
    {
      ptf_f->flags[0] = 0;
      ptf_f->field_width = 0;
      ptf_f->precision = 0;
      ptf_f->length_modifier = 0;
      *flag_cp = 0;
      *v_set = 1;
    }
  if (my_get_char_pos_x("-+ 0#", flag) != -1 && *flag_cp < 3)
    {
      ptf_f->flags[*flag_cp] = flag;
      if (*flag_cp == 1)
	ptf_f->flags[2] = '\0';
      else
	ptf_f->flags[1] = '\0';
      *flag_cp = *flag_cp + 1;
    }
}

void	init_field_width(char *format, int *i, int *var_set, t_pf_format *pt_f)
{
  if (*var_set == 1 && format[*i - 1] != '.')
    {
      if (format[*i] == '*')
	{
	  pt_f->field_width = my_strdup_x("*");
	  *var_set = 2;
	}
      else if (is_num_x(format[*i], 1) && pt_f->field_width == 0)
	{
	  pt_f->field_width = get_str_nbr(format, i);
	  *var_set = 2;
	}
    }
}

void	init_precision(char *format, int *i, int *var_set, t_pf_format *pt_f)
{
  (void)(var_set);
  if (format[*i - 1] == '.' && format[*i] != '*')
    {
      pt_f->precision = get_str_nbr(format, i);
    }
  else if (format[*i - 1] == '.' && format[*i] == '*')
    {
      pt_f->precision = my_strdup_x("*");
    }
}

void	init_struct(t_printf *t, char *tp, int (*func)(va_list, t_pf_format *))
{
  t->type = tp;
  t->func = func;
}

void	init_ptf_format(char *format, int *i, t_pf_format *ptf_format, int *cp)
{
  int	flag_cp;
  int	var_set;

  *i = *i + 1;
  var_set = 0;
  while (format[*i])
    {
      init_flags(format[*i], &flag_cp, ptf_format, &var_set);
      skip_space(format, i);
      init_field_width(format, i, &var_set, ptf_format);
      init_precision(format, i, &var_set, ptf_format);
      if (my_get_char_pos_x("hl", format[*i]) != -1)
	ptf_format->length_modifier = format[*i];
      else if (is_alpha_x(format[*i], 0) || format[*i] == '%')
	{
	  if (format[*i] == 'n')
	    ptf_format->field_width = my_strdup_x(my_itoa_x(*cp));
	  ptf_format->conv_char = format[*i];
	  return;
	}
      *i = *i + 1;
    }
}
