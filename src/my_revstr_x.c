/*
** my_revstr_x.c for my_revstr_x in /home/bongol_b/rendu/Piscine_C_J06
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Mon Oct  5 11:11:18 2015 berdrigue bongolo-beto
** Last update Sat Nov 28 10:35:31 2015 berdrigue bongolo-beto
*/

void	my_revstr_swap(char *a, char *b)
{
  char	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}

int	my_revstr_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}

char	*my_revstr_x(char *str)
{
  int	i;
  int	str_len;

  i = 0;
  str_len = my_revstr_strlen(str);
  while (i < str_len / 2)
    {
      my_revstr_swap(&str[i], &str[str_len - i - 1]);
      i = i + 1;
    }
  return (str);
}
