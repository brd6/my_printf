/*
** my_putchar.c for my_putchar in /home/bongol_b/rendu/Piscine_C_J03
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Wed Sep 30 10:21:41 2015 berdrigue bongolo-beto
** Last update Tue Nov  3 22:18:32 2015 berdrigue bongolo-beto
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (1);
}
