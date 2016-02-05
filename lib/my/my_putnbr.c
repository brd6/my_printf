/*
** my_putnbr.c for my_putnbr in /home/bongol_b/rendu/PSU_2015_my_printf/lib/my
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Sat Nov 14 18:34:01 2015 berdrigue bongolo-beto
** Last update Sat Nov 28 10:36:50 2015 berdrigue bongolo-beto
*/

int	my_putnbr(long nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0 && nb <= 9)
    my_putchar(nb + '0');
  if (nb > 9)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
}
