/*
** my_strlen_x.c for my_strlen_x in /home/bongol_b/rendu/Piscine_C_J04
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Thu Oct  1 09:29:01 2015 berdrigue bongolo-beto
** Last update Sat Nov 28 10:34:54 2015 berdrigue bongolo-beto
*/

int	my_strlen_x(char *str)
{
  int	cp;

  cp = 0;
  while (str[cp])
    cp = cp + 1;
  return cp;
}
