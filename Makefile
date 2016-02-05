##
## Makefile for my_printf in /home/bongol_b/rendu/my_printf
##
## Made by berdrigue bongolo-beto
## Login   <bongol_b@epitech.net>
##
## Started on  Sun Nov  1 21:13:19 2015 berdrigue bongolo-beto
## Last update Sat Nov 14 18:36:37 2015 berdrigue bongolo-beto
##

CC      = gcc

RM      = rm -Rf

AR		= ar cr

RAN		= ranlib

NAME 	= libmy.a

SRCS	= ./lib/my/my_strlen.c \
		./lib/my/my_nbr_len.c \
		./lib/my/my_printf.c \
		./lib/my/my_utils.c \
		./lib/my/my_strdup.c \
		./lib/my/my_putchar.c \
		./lib/my/print_char.c \
		./lib/my/my_put_nbr.c \
		./lib/my/init_arg.c \
		./lib/my/my_get_char_pos.c \
		./lib/my/print_nbr.c \
		./lib/my/my_strcpy.c \
		./lib/my/print_str.c \
		./lib/my/my_putstr.c \
		./lib/my/print_nil.c \
		./lib/my/my_atoi.c \
		./lib/my/print_utils.c \
		./lib/my/my_putnstr.c \
		./lib/my/print_percent.c \
		./lib/my/check_format.c \
		./lib/my/print_utils2.c \
		./lib/my/my_putnbr_base.c \
		./lib/my/print_octal.c \
		./lib/my/print_unsigned_nbr.c \
		./lib/my/print_hexa.c \
		./lib/my/print_pointer.c \
		./lib/my/print_ncount.c \
		./lib/my/my_itoa.c \
		./lib/my/print_binary.c \
		./lib/my/print_str2.c \
		./lib/my/convert_base.c \
		./lib/my/my_getnbr_base.c \
		./lib/my/my_revstr.c \
		./lib/my/my_putnbr.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@$(RAN) $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean, mrproper, re, all, fclean
