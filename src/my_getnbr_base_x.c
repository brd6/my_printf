/*
** my_getnbr_base_x.c for my_getnbr_base_x in /home/bongol_b/rendu/Piscine_C_J06
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Tue Oct  6 11:22:12 2015 berdrigue bongolo-beto
** Last update Wed Apr 13 08:07:39 2016 Berdrigue BONGOLO BETO
*/

#include "my_printf.h"

int	my_get_sign(char *str, int *nbr_start)
{
  int	i;
  int	sign;

  i = 0;
  sign = 1;
  while (str[i] == '+' || str[i] == '-')
    {
      if (str[i] == '-')
	sign = sign * (-1);
      i = i + 1;
    }
  *nbr_start = i;
  return (sign);
}

int	my_check_base(char *base)
{
  int	i;
  int	j;

  i = 0;
  if (!my_strlen_x(base))
    return (0);
  while (base[i])
    {
      j = 0;
      while (base[j])
	{
	  if (i != j)
	    if (base[i] == base[j])
	      return (0);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (1);
}

int	checkint_limit(int nbr)
{
  return (nbr >= -2147483647 && nbr <= 2147483646);
}

long	my_getnbr_base_x(char *str, char *base)
{
  long	res;
  int	sign;
  int	j;
  int	base_len;
  int	nbr_pos;

  j = 0;
  base_len = my_strlen_x(base);
  res = 0;
  nbr_pos = 0;
  sign = my_get_sign(str, &nbr_pos);
  if (!my_check_base(base) || !my_strlen_x(str))
    return (0);
  while (str[nbr_pos])
    {
      while (j <= base_len && str[nbr_pos] != base[j])
	j = j + 1;
      if (str[nbr_pos] == base[j] && checkint_limit(res))
	res = res * base_len + j;
      else
	return (0);
      j = 0;
      nbr_pos = nbr_pos + 1;
    }
  return (res > 0) ? (res * sign) : (0);
}
