/*
** my_strdup_x.c for my_strdup_x in /home/bongol_b/rendu/Piscine_C_J08/ex_01
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Oct  7 13:36:20 2015 berdrigue bongolo-beto
** Last update Sun Feb 21 18:11:10 2016 Berdrigue BONGOLO BETO
*/

#include <stdlib.h>
#include "my_printf.h"

char	*my_strdup_x(char *src)
{
  char	*src_cp;
  int	src_len;

  src_len = my_strlen_x(src);
  src_cp = malloc((src_len + 1));
  if (src_cp == 0)
    return (0);
  my_strcpy_x(src_cp, src);
  src_cp[src_len] = 0;
  return (src_cp);
}
