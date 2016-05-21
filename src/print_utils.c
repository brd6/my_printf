/*
** print_utils.c for print_utils in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Fri Nov  6 22:12:15 2015 berdrigue bongolo-beto
** Last update Wed Apr 13 08:02:15 2016 Berdrigue BONGOLO BETO
*/

#include "my_printf.h"

int	print_nchar(char c, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      my_putchar_x(c);
      i = i + 1;
    }
  n = (n < 0) ? 0 : n;
  return (n);
}

void	print_space(char c, int *cp)
{
  if (c == ' ')
    {
      my_putchar_x(c);
      *cp = *cp + 1;
    }
}

int	check_next_char(char *format)
{
  int	i;

  i = 0;
  skip_space(format, &i);
  if (my_get_char_pos_x("diouxXcsSpnb-+*.hl#%", format[i]) != -1 ||
      is_num_x(format[i], 0))
    return (1);
  return (0);
}

void	nbr_space_handler(t_pf_format *ptf_f, int nbr, int *cp)
{
  if (my_get_char_pos_x(ptf_f->flags, ' ') != -1 && nbr > 0)
    *cp = *cp + my_putchar_x(' ');
}

void	nbr_limit_check(int *nbr, long *nbr2, int *sign)
{
  *nbr2 = 0;
  *sign = 1;
  if (*nbr == -2147483648)
    {
      *nbr2 = 2147483648;
      *sign = 0;
    }
}
