/*
** my_putnstr_x.c for my_putnstr_x in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Fri Nov  6 22:13:49 2015 berdrigue bongolo-beto
** Last update Sun Feb 21 18:21:37 2016 Berdrigue BONGOLO BETO
*/

#include "my_printf.h"

int	my_putnstr_x(char *str, int n)
{
  int	i;

  i = 0;
  while (str[i] && i < n)
    {
      my_putchar_x(str[i]);
      i = i + 1;
    }
  return (1);
}
