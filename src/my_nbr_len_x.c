/*
** my_nbr_len_x.c for my_nbr_len_x in /home/bongol_b/rendu/Piscine_C_bistromathique
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Fri Oct 30 13:02:50 2015 berdrigue bongolo-beto
** Last update Sat Nov 14 16:06:57 2015 berdrigue bongolo-beto
*/

int	my_nbr_len_x(long nbr)
{
  int	i;

  i = !nbr;
  if (nbr < 0)
    {
      i = i + 1;
      nbr = nbr * (-1);
    }
  while (nbr)
    {
      nbr = nbr / 10;
      i = i + 1;
    }
  return (i);
}
