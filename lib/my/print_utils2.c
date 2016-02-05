/*
** print_utils2.c for print_utils2 in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Mon Nov  9 16:20:30 2015 berdrigue bongolo-beto
** Last update Sat Nov 28 10:20:50 2015 berdrigue bongolo-beto
*/

#include <stdarg.h>
#include "./include/my_printf.h"

int	set_prec_len(int *len, t_pf_format *ptf_format, va_list ap)
{
  if (ptf_format->precision != 0 && ptf_format->precision[0] == '*')
    {
      *len = va_arg(ap, int);
      return (1);
    }
  else if (ptf_format->precision != 0 && ptf_format->precision[0] != '*')
    {
      *len = my_atoi(ptf_format->precision);
      return (1);
    }
  return (0);
}

void	set_width(int *width, t_pf_format *ptf_format, va_list ap)
{
  if (ptf_format->field_width != 0 && ptf_format->field_width[0] == '*')
    *width = va_arg(ap, int);
  else if (ptf_format->field_width != 0 && ptf_format->field_width[0] != '*')
    *width = my_atoi(ptf_format->field_width);
  else
    *width = -1;
}

void	check_width(int *width, int cp)
{
  if (*width < cp && *width != -1)
    *width = cp;
  else if (*width == -1)
    *width = 0;
}

void	check_width_and_precision(int *wd, int *lp, int nbr, t_pf_format *ptf_f)
{
  if (*lp > my_nbr_len(nbr))
    *lp = *lp - my_nbr_len(nbr);
  else
    *lp = 0;
  if (*wd > (my_nbr_len(nbr) + *lp))
    *wd = *wd - (my_nbr_len(nbr) + *lp);
  else
    *wd = 0;
}

void	check_width_and_precision2(int *wd, int *lp, char *s, t_pf_format *ptf)
{
  if (*lp > my_strlen(s))
    *lp = *lp - my_strlen(s);
  else
    *lp = 0;
  if (*wd > (my_strlen(s) + *lp))
    *wd = *wd - (my_strlen(s) + *lp);
  else
    *wd = 0;
}
