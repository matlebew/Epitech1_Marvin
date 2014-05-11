##
## Makefile for Makefile in /afs/epitech.net/users/all/baudy_m/rendu/lib/my
## 
## Made by marie baudy
## Login   <baudy_m@epitech.net>
## 
## Started on  Mon Oct 18 16:23:21 2010 marie baudy
## Last update Sun Nov 28 15:11:57 2010 marie baudy
##

NAME	=	libmy

SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

CC	=	cc -c

RM	=	rm -rf

all		: create_o create_lib create_index mv_lib clean


create_o	:
		$(CC) $(SRC)

create_lib	: create_o
		ar rc libmy.a *.o

create_index	: create_lib
		ranlib libmy.a

mv_lib		: create_index
		chmod 754 libmy.a
		mv libmy.a ..
clean		:
		$(RM) *.o
		$(RM) *~