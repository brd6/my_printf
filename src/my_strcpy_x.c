/*
** my_strcpy_x.c for my_strcpy_x in /home/bongol_b/rendu/Piscine_C_J06
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Mon Oct  5 09:03:10 2015 berdrigue bongolo-beto
** Last update Thu Nov 26 14:49:17 2015 berdrigue bongolo-beto
*/

char	*my_strcpy_x(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = 0;
  return (dest);
}
