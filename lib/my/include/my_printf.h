/*
** my_printf.h for my_printf in /home/bongol_b/rendu/PSU_2015_my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Mon Nov  2 09:06:00 2015 berdrigue bongolo-beto
** Last update Sat Nov 28 10:43:11 2015 berdrigue bongolo-beto
*/

#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_

# include <stdarg.h>

typedef	struct	s_pf_format
{
  char		flags[3];
  char		*field_width;
  char		*precision;
  char		length_modifier;
  char		conv_char;
}		t_pf_format;

typedef	struct	s_printf
{
  char		*type;
  int		(*func)(va_list ap, t_pf_format *format);
}		t_printf;

int	my_putchar(char c);
int	my_putstr(char *str);
char	*my_strdup(char *src);
int	my_put_nbr(int nb);
int	my_nbr_len(long nbr);
int	my_putnbr(long nb);
char	*convert_base(char *nbr, char *base_from, char *base_to);
long	my_getnbr_base(char *str, char *base);
char    *my_revstr(char *str);
char	*my_itoa(long nbr);
int	my_printf(char *format, ...);
void	init_flags(char flag, int *flag_cp, t_pf_format *ptf_format, int *);
void	init_struct(t_printf *, char *, int (*func)(va_list, t_pf_format *));
void	init_ptf_format(char *format, int *i, t_pf_format *ptf_format, int *cp);
int	is_alpha(char c, int flag);
int	is_num(char c, int flag);
int	cp_str_nbr(char *format, int start);
char	*get_str_nbr(char *format, int *i);
int	print_char(va_list ap, t_pf_format *format);
int	print_nbr(va_list ap, t_pf_format *format);
int	print_str(va_list ap, t_pf_format *format);
int	print_nil(va_list ap, t_pf_format *format);
int	print_percent(va_list ap, t_pf_format *format);
int	print_octal(va_list ap, t_pf_format *format);
int	print_unsigned_nbr(va_list ap, t_pf_format *format);
int	print_hexa(va_list ap, t_pf_format *format);
int	print_pointer(va_list ap, t_pf_format *format);
int	print_ncount(va_list ap, t_pf_format *format);
int	print_binary(va_list ap, t_pf_format *format);
int	print_str2(va_list ap, t_pf_format *format);
#endif /* !MY_PRINTF_H_ */
