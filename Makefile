##
## Makefile for my_printf in /home/bongol_b/rendu/my_printf
##
## Made by berdrigue bongolo-beto
## Login   <bongol_b@epitech.net>
##
## Started on  Sun Nov  1 21:13:19 2015 berdrigue bongolo-beto
## Last update Sat May 21 23:51:14 2016 Berdrigue BONGOLO BETO
##

CC	= 	gcc

RM	= 	rm -Rf

AR	= 	ar cr

NAME 	= 	libmyprintf.a

CFLAGS	=	-I./include

LIBCPY	=	cp -f $(NAME) ../

SRCS	=	./src/check_format.c \
		./src/convert_base_x.c \
		./src/init_arg.c \
		./src/my_atoi_x.c \
		./src/my_get_char_pos_x.c \
		./src/my_getnbr_base_x.c \
		./src/my_itoa_x.c \
		./src/my_nbr_len_x.c \
		./src/my_printf.c \
		./src/my_putchar_x.c \
		./src/my_putnbr_base_x.c \
		./src/my_put_nbr_x.c \
		./src/my_putnbr_x.c \
		./src/my_putnstr_x.c \
		./src/my_putstr_x.c \
		./src/my_revstr_x.c \
		./src/my_strcpy_x.c \
		./src/my_strdup_x.c \
		./src/my_strlen_x.c \
		./src/my_utils.c \
		./src/print_binary.c \
		./src/print_char.c \
		./src/print_hexa.c \
		./src/print_nbr.c \
		./src/print_ncount.c \
		./src/print_nil.c \
		./src/print_octal.c \
		./src/print_percent.c \
		./src/print_pointer.c \
		./src/print_str2.c \
		./src/print_str.c \
		./src/print_unsigned_nbr.c \
		./src/print_utils2.c \
		./src/print_utils.c \

OBJS	= 	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)
	$(LIBCPY)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean, re, all, fclean
