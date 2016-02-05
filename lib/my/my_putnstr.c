/*
** my_putnstr.c for my_putnstr in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Fri Nov  6 22:13:49 2015 berdrigue bongolo-beto
** Last update Fri Nov  6 22:17:10 2015 berdrigue bongolo-beto
*/

int	my_putnstr(char *str, int n)
{
  int	i;

  i = 0;
  while (str[i] && i < n)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (1);
}
