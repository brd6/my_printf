/*
** my_itoa_x.c for my_itoa_x in /home/bongol_b/rendu/Piscine_C_bistromathique
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Fri Oct 30 12:58:22 2015 berdrigue bongolo-beto
** Last update Thu Apr  7 18:28:03 2016 Berdrigue BONGOLO BETO
*/

#include <stdlib.h>
#include "my_printf.h"

void	recurr_itoa_x(char *str, long nbr, int *i)
{
  if (nbr >= 0 && nbr <= 9)
    {
      str[*i] = nbr + '0';
      *i = *i + 1;
    }
  else if (nbr > 9)
    {
      recurr_itoa_x(str, nbr / 10, i);
      recurr_itoa_x(str, nbr % 10, i);
    }
}

char	*my_itoa_x(long nbr)
{
  char	*str;
  int	i;

  str = malloc(my_nbr_len_x(nbr) + 1);
  if (str == 0)
    return (0);
  i = 0;
  if (nbr < 0)
    {
      str[i] = '-';
      i = i + 1;
      nbr = nbr * (-1);
    }
  recurr_itoa_x(str, nbr, &i);
  str[i] = 0;
  return (str);
}
