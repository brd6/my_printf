/*
** my_putchar_x.c for my_putchar_x in /home/bongol_b/rendu/Piscine_C_J03
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Sep 30 10:21:41 2015 berdrigue bongolo-beto
** Last update Sun Feb 21 18:13:27 2016 Berdrigue BONGOLO BETO
*/

#include <unistd.h>

int	my_putchar_x(char c)
{
  write(1, &c, 1);
  return (1);
}
