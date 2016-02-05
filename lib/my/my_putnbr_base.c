/*
** my_putnbr_base.c for my_putnbr_base in /home/bongol_b/rendu/Piscine_C_J06
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Tue Oct  6 09:01:45 2015 berdrigue bongolo-beto
** Last update Thu Nov 12 11:27:37 2015 berdrigue bongolo-beto
*/

int	my_putnbr_base_len(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}

void	rec_base(long nbr, char *base, int *cp)
{
  int	base_len;

  base_len = my_putnbr_base_len(base);
  if (nbr >= base_len)
    rec_base(nbr / base_len, base, cp);
  *cp = *cp + my_putchar(base[nbr % base_len]);
}

int	my_putnbr_base(long nbr, char *base)
{
  int	cp;

  cp = 0;
  if (nbr < 0)
    {
      my_putchar('-');
      cp = cp + 1;
      nbr = nbr * (-1);
    }
  rec_base(nbr, base, &cp);
  return (cp);
}
