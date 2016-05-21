/*
** my_utils.c for my_utils in /home/bongol_b/rendu_ok/PSU_2015_minishell1/lib/my_printf
**
** Made by Berdrigue BONGOLO BETO
** Login   <bongol_b@epitech.net>
**
** Started on  Sun Jan 24 19:27:47 2016 Berdrigue BONGOLO BETO
** Last update Wed Apr 13 07:57:33 2016 Berdrigue BONGOLO BETO
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"

int	is_alpha_x(char c, int flag)
{
  if (flag == 0)
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
  else if (flag == 1)
    return (c >= 'a' && c <= 'z');
  else if (flag == 2)
    return (c >= 'A' && c <= 'Z');
  return (0);
}

int	is_num_x(char c, int flag)
{
  if (flag == 0)
    return (c >= '0' && c <= '9');
  else if (flag == 1)
    return (c >= '1' && c <= '9');
  return (0);
}

int	cp_str_nbr(char *format, int start)
{
  int	cp;
  int	j;

  cp = 0;
  j = start;
  while (is_num_x(format[j], 1) && format[j] != '\0')
    {
      cp = cp + 1;
      j = j + 1;
    }
  return (cp);
}

char	*get_str_nbr(char *format, int *i)
{
  char	*field_w;
  int	j;

  field_w = malloc(cp_str_nbr(format, *i));
  if (field_w == 0)
    return (0);
  j = 0;
  while (is_num_x(format[*i], 0) && format[*i] != '\0')
    {
      field_w[j] = format[*i];
      j = j + 1;
      *i = *i + 1;
    }
  return (field_w);
}

void	skip_space(char *str, int *i)
{
  while (str[*i] == ' ' && str[*i] != 0)
    *i = *i + 1;
}
