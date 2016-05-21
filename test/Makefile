##
## Makefile for my_printf in /home/bongol_b/rendu/my_printf
## 
## Made by berdrigue bongolo-beto
## Login   <bongol_b@epitech.net>
## 
## Started on  Sun Nov  1 21:13:19 2015 berdrigue bongolo-beto
## Last update Sat May 21 23:51:01 2016 Berdrigue BONGOLO BETO
##

CC      = gcc

RM      = rm -Rf

NAME	= test

SRCS	= main.c

OBJS	= $(SRCS:.c=.o)

CFLAGS  = -I../include/

LDFLAGS +=	-L../ -lmyprintf

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean, re, all, fclean
