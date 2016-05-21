/*
** my_atoi_x.c for my_atoi_x in /home/bongol_b/rendu/Piscine_C_bistromathique
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Sun Oct 25 15:21:25 2015 berdrigue bongolo-beto
** Last update Sun Oct 25 15:25:35 2015 berdrigue bongolo-beto
*/

int	my_atoi_x(char *nbr)
{
  int	i;
  int	res;

  res = 0;
  i = 0;
  while (nbr[i] >= '0' && nbr[i] <= '9')
    {
      res = res * 10 + nbr[i] - 48;
      i = i + 1;
    }
  return (res);
}
