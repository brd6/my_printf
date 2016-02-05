/*
** my_put_nbr.c for my_put_nbr in /home/bongol_b/rendu/Piscine_C_J03
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Thu Oct  1 00:37:24 2015 berdrigue bongolo-beto
** Last update Sat Nov 28 10:37:15 2015 berdrigue bongolo-beto
*/

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0 && nb <= 9)
    my_putchar(nb + '0');
  if (nb > 9 || nb == -2147483648)
    {
      if (nb == -2147483648)
	{
	  my_put_nbr((nb / 10) * (-1));
	  my_put_nbr((nb % 10) * (-1));
	}
      else
	{
	  my_put_nbr(nb / 10);
	  my_put_nbr(nb % 10);
	}
    }
}
