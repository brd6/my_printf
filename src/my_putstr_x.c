/*
** my_putstr_x.c for my_putstr_x in /home/bongol_b/rendu/Piscine_C_J04
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Thu Oct  1 09:13:04 2015 berdrigue bongolo-beto
** Last update Sun Feb 21 18:21:20 2016 Berdrigue BONGOLO BETO
*/

#include "my_printf.h"

int	my_putstr_x(char *str)
{
  while (*str)
    {
      my_putchar_x(*str);
      str = str + 1;
    }
  return (0);
}
