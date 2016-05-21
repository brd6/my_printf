/*
** my_get_char_pos_x.c for my_get_char_pos_x in /home/bongol_b/rendu/Piscine_C_bistromathique
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Fri Oct 30 17:49:30 2015 berdrigue bongolo-beto
** Last update Thu Nov  5 21:40:40 2015 berdrigue bongolo-beto
*/

int	my_get_char_pos_x(char *str, char c)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	return (i);
      i = i + 1;
    }
  return (-1);
}
