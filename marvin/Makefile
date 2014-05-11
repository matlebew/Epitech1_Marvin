##
## Makefile for Makefile in /home/baudy_m//Desktop/Rush/marvin
## 
## Made by marie baudy
## Login   <baudy_m@epitech.net>
## 
## Started on  Fri Nov 26 21:35:07 2010 marie baudy
## Last update Sun Nov 28 23:06:29 2010 marie baudy
##

NAME	=	marvin

SRC	=	marvin.c		\
		tab.c			\
		aff_erreur_syn.c	\
		x_malloc.c		\
		erreur_syn.c		\
		verif_total.c		\
		dbtab.c			\
		same.c			\
		declaration.c		\
		fonc_elem.c		\
		gere_func.c

OBJ	=	$(SRC:.c=.o)

CC	=	cc -o 

FLAGS	=	-W -Wall -ansi -pedantic

LIB	=	-L . -lmy

RM	=	rm -rf

all	:
	$(CC) $(NAME) $(SRC) $(LIB) $(FLAGS)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	:
	fclean all