/*
** check_format.c for check_format in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Mon Nov  9 11:24:00 2015 berdrigue bongolo-beto
** Last update Sun Feb 21 17:45:34 2016 Berdrigue BONGOLO BETO
*/

#include "my_printf.h"

int	check_format(char *str)
{
  int	i;
  int	test;

  i = 0;
  test = (str[i] == ' ');
  while (test && str[i] &&
	 (str[i] != '%' && is_num_x(str[i], 0) && !is_alpha_x(str[i], 0)))
    {
      if (str[i] != ' ')
	return (0);
      i = i + 1;
    }
  return (1);
}
