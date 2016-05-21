/*
** main.c for main in /home/bongol_b/rendu/my_printf
**
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
**
** Started on  Sun Nov  1 21:22:42 2015 berdrigue bongolo-beto
** Last update Sat May 21 23:50:50 2016 Berdrigue BONGOLO BETO
*/

#include <stdio.h>
#include "my_printf.h"

int	main()
{
  my_printf("#5\t :  1\n");
  my_printf("______________________________\n");
  printf("\n%d\n", my_printf("%02d", 1));
  printf("\n%d ✓\n", printf("%02d", 1));
  my_printf("______________________________\n\n\n");
  my_printf("#7\t :  -10\n");
  my_printf("______________________________\n");
  printf("%d\n", my_printf("%03d", -10));
  printf("%d ✓\n", printf("%03d", -10));
  my_printf("______________________________\n\n\n");

  my_printf("#7\t :  -10\n");
  my_printf("______________________________\n");
  printf("%d\n", my_printf("%04d", -10));
  printf("%d ✓\n", printf("%04d", -10));
  my_printf("______________________________\n\n\n");

  my_printf("#14\t :  -10\n");
  my_printf("______________________________\n");
  printf("%d\n", my_printf("'%05.3d'", +10));
  printf("%d ✓\n", printf("'%05.3d'", +10));
  my_printf("______________________________\n\n\n");

  printf("%d\n", printf("'%+#3o' ok %o\n", 429496729599, 12));
  printf("%d\n", my_printf("'%+#3o' ok %o\n", 429496729599, 12));

  printf("%d\n", printf("'%#X'\n", 42));
  printf("%d\n", my_printf("'%#X'\n", 42));

  my_printf("# chaine vide (0)\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%s", 0));
  printf("%d ✓\n", printf("%s", 0));
  my_printf("______________________________\n\n\n");

  my_printf("#1 %%\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%      %c", 'd'));
  printf("%d ✓\n", printf("%      %c", 'd'));
  my_printf("______________________________\n\n\n");

  my_printf("#2 %%\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%%"));
  printf("%d ✓\n", printf("%%"));
  my_printf("______________________________\n\n\n");

  my_printf("#3 %%\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("|% |"));
  printf("%d ✓\n", printf("|% |"));
  my_printf("______________________________\n\n\n");

  my_printf("\nTests - chaine de caracteres\n");
  my_printf("##############################\n\n");

  my_printf("#1\t : 'Hello'\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("'%s'", "Hello"));
  printf("%d ✓\n", printf("'%s'", "Hello"));
  my_printf("______________________________\n\n\n");

  my_printf("#2\t : 'Hello'\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("'%10s'", "Hello"));
  printf("%d ✓\n", printf("'%10s'", "Hello"));
  my_printf("______________________________\n\n\n");

  my_printf("#3\t : 'Hello'\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("'%-10s'", "Hello"));
  printf("%d ✓\n", printf("'%-10s'", "Hello"));
  my_printf("______________________________\n\n\n");

  my_printf("#1\t : toto bonjour\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%12s %12s", "toto", "bonjour"));
  printf("%d ✓\n", printf("%12s %12s", "toto", "bonjour"));
  my_printf("______________________________\n\n\n");

  my_printf("#2\t : toto bonjour\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-12s %-12s", "toto", "bonjour"));
  printf("%d ✓\n", printf("%-12s %-12s", "toto", "bonjour"));
  my_printf("______________________________\n\n\n");

  my_printf("#3\t : toto bonjour\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%0s %0s", "toto", "bonjour"));
  printf("%d ✓\n", printf("%0s %0s", "toto", "bonjour"));
  my_printf("______________________________\n\n\n");

  my_printf("#4\t : toto bonjour\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%012s %012s", "toto", "bonjour"));
  printf("%d ✓\n", printf("%012s %012s", "toto", "bonjour"));
  my_printf("______________________________\n\n\n");

  my_printf("#5\t : toto bonjour\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-012s %012s", "toto", "bonjour"));
  printf("%d ✓\n", printf("%-012s %012s", "toto", "bonjour"));
  my_printf("______________________________\n\n\n");

  my_printf("#6\t : toto bonjour\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-+5s %-+5s", "toto", "bonjour"));
  printf("%d ✓\n", printf("%-+5s %-+5s", "toto", "bonjour"));
  my_printf("______________________________\n\n\n");

  my_printf("#7\t : toto bonjour\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-+05s %-+05s", "toto", "bonjour"));
  printf("%d ✓\n", printf("%-+05s %-+05s", "toto", "bonjour"));
  my_printf("______________________________\n\n\n");

  my_printf("#8\t : toto bonjour\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%+-5s %+-5s", "toto", "bonjour"));
  printf("%d ✓\n", printf("%+-5s %+-5s", "toto", "bonjour"));
  my_printf("______________________________\n\n\n");

  my_printf("#9\t : toto bonjour\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("ok %.s ok %.s ok", "toto", "bonjour"));
  printf("%d ✓\n", printf("ok %.s ok %.s ok", "toto", "bonjour"));
  my_printf("______________________________\n\n\n");

  my_printf("#10\t : toto bonjour\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%.6s %.6s", "toto", "bonjour"));
  printf("%d ✓\n", printf("%.6s %.6s", "toto", "bonjour"));
  my_printf("______________________________\n\n\n");

  my_printf("#11\t : Hello, world\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("'%-14.10s'", "Hello, world"));
  printf("%d ✓\n", printf("'%-14.10s'", "Hello, world"));
  my_printf("______________________________\n\n\n");

  my_printf("##############################\n\n");

  my_printf("\nTests - Caracteres\n");
  my_printf("##############################\n\n");

  my_printf("# chaine vide (0)\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%c", 0));
  printf("%d ✓\n", printf("%c", 0));
  my_printf("______________________________\n\n\n");

  my_printf("#0\t :  d\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%c", 'd'));
  printf("%d ✓\n", printf("%c", 'd'));
  my_printf("______________________________\n\n\n");

  my_printf("#1\t :  d\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%  c ", 'd'));
  printf("%d ✓\n", printf("%  c ", 'd'));
  my_printf("______________________________\n\n\n");

  my_printf("#2\t :  d\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%1c ", 'd'));
  printf("%d ✓\n", printf("%1c ", 'd'));
  my_printf("______________________________\n\n\n");

  my_printf("#3\t :  d\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%0c ", 'd'));
  printf("%d ✓\n", printf("%0c ", 'd'));
  my_printf("______________________________\n\n\n");

  my_printf("#4\t :  d\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%1.0c ", 'd'));
  printf("%d ✓\n", printf("%1.0c ", 'd'));
  my_printf("______________________________\n\n\n");

  my_printf("#4\t :  d\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%1.12c ", 'd'));
  printf("%d ✓\n", printf("%1.12c ", 'd'));
  my_printf("______________________________\n\n\n");

  my_printf("#5\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%c %c", 'a', 'c'));
  printf("%d ✓\n", printf("%c %c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#6\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%12c %12c", 'a', 'c'));
  printf("%d ✓\n", printf("%12c %12c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#7\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-12c %-12c", 'a', 'c'));
  printf("%d ✓\n", printf("%-12c %-12c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#8\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%0c %0c", 'a', 'c'));
  printf("%d ✓\n", printf("%0c %0c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#9\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%012c %012c", 'a', 'c'));
  printf("%d ✓\n", printf("%012c %012c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#10\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-012c %012c", 'a', 'c'));
  printf("%d ✓\n", printf("%-012c %012c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#11\t :  a\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%*c %*c", 'a', 'a', 6, 6, 6));
  printf("%d ✓\n", printf("%*c %*c", 'a', 'a', 6, 6, 6));
  my_printf("______________________________\n\n\n");

  my_printf("#12\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%+c %+c", 'a', 6, 'c', 6));
  printf("%d ✓\n", printf("%+c %+c", 'a', 6, 'c', 6));
  my_printf("______________________________\n\n\n");

  my_printf("#12\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%+12c %+12c", 'a', 6, 'c', 6));
  printf("%d ✓\n", printf("%+12c %+12c", 'a', 6, 'c', 6));
  my_printf("______________________________\n\n\n");

  my_printf("#13\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-+5c %-+5c", 'a', 'c'));
  printf("%d ✓\n", printf("%-+5c %-+5c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#14\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-+05c %-+05c", 'a', 'c'));
  printf("%d ✓\n", printf("%-+05c %-+05c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#15\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%+-5c %+-5c", 'a', 'c'));
  printf("%d ✓\n", printf("%+-5c %+-5c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#16\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%.c %.c", 'a', 'c'));
  printf("%d ✓\n", printf("%.c %.c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#17\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%.12c %.12c", 'a', 'c'));
  printf("%d ✓\n", printf("%.12c %.12c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#18\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%c  %c", 0, 'a', 24, 'c'));
  printf("%d ✓\n", printf("%c  %c", 0, 'a', 24, 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("#19\t :  a c\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%.6c  %.6c", 'a', 'c'));
  printf("%d ✓\n", printf("%.6c  %.6c", 'a', 'c'));
  my_printf("______________________________\n\n\n");

  my_printf("##############################\n\n");

  my_printf("\nTests - Nombres i et d\n");
  my_printf("##############################\n\n");

  my_printf("#0\t :  0\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-3d", 0));
  printf("%d ✓\n", printf("%-3d", 0));
  my_printf("______________________________\n\n\n");

  my_printf("#1\t :  123456789\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-3d", 123456789));
  printf("%d ✓\n", printf("%-3d", 123456789));
  my_printf("______________________________\n\n\n");

  my_printf("#2\t :  -10\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-3d", -10));
  printf("%d ✓\n", printf("%-3d", -10));
  my_printf("______________________________\n\n\n");

  my_printf("#3\t :  -123456789\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%-3d", -123456789));
  printf("%d ✓\n", printf("%-3d", -123456789));
  my_printf("______________________________\n\n\n");

  my_printf("#4\t :  0\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%03d", 0));
  printf("%d ✓\n", printf("%03d", 0));
  my_printf("______________________________\n\n\n");

  my_printf("#5\t :  1\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%03d", 1));
  printf("%d ✓\n", printf("%03d", 1));
  my_printf("______________________________\n\n\n");

  my_printf("#6\t :  123456789\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%03d", 123456789));
  printf("%d ✓\n", printf("%03d", 123456789));
  my_printf("______________________________\n\n\n");

  my_printf("#7\t :  -10\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%03d", -10));
  printf("%d ✓\n", printf("%03d", -10));
  my_printf("______________________________\n\n\n");

  my_printf("#8\t :  10\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%03d", 10));
  printf("%d ✓\n", printf("%03d", 10));
  my_printf("______________________________\n\n\n");

  my_printf("#9\t :  -123456789\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("%03d", -123456789));
  printf("%d ✓\n", printf("%03d", -123456789));
  my_printf("______________________________\n\n\n");

  my_printf("#10\t :  10\n");
  my_printf("______________________________\n");
  my_printf("%d\n", my_printf("'%+5d'", 10));
  printf("%d ✓\n", printf("'%+5d'", 10));
  my_printf("______________________________\n\n\n");

  my_printf("#11\t :  -10\n");
  my_printf("______________________________\n");
  printf("%d\n", my_printf("'%+5d'", -10));
  printf("%d ✓\n", printf("'%+5d'", -10));
  my_printf("______________________________\n\n\n");

  my_printf("#12\t :  +10\n");
  my_printf("______________________________\n");
  printf("%d\n", my_printf("'%+5d'", +10));
  printf("%d ✓\n", printf("'%+5d'", +10));
  my_printf("______________________________\n\n\n");

  my_printf("#13\t :  -10\n");
  my_printf("______________________________\n");
  printf("%d\n", my_printf("'%+05d'", -10));
  printf("%d ✓\n", printf("'%+05d'", -10));
  my_printf("______________________________\n\n\n");

  my_printf("#14\t :  -10\n");
  my_printf("______________________________\n");
  printf("%d\n", my_printf("'%05.3d'", +10));
  printf("%d ✓\n", printf("'%05.3d'", +10));
  my_printf("______________________________\n\n\n");

  printf("%d\n", printf("'%+4d'", -42));
  my_printf("%d\n", my_printf("'%+4d'", -42));

  printf("%d\n", printf("'%10.3d'", -42));
  my_printf("%d\n", my_printf("'%10.3d'", -42));

  printf("%d\n", printf("'%10d'", -42));
  my_printf("%d\n", my_printf("'%10d'", -42));

  printf("%d\n", printf("'%10d'", 42));
  my_printf("%d\n", my_printf("'%10d'", 42));

  printf("%d\n", printf("'%d'", 42));
  my_printf("%d\n", my_printf("'%d'", 42));

  printf("%d\n", printf("'%d'", -42));
  my_printf("%d\n", my_printf("'%d'", -42));
}
