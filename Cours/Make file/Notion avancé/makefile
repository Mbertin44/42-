SRCS = main.c fct.c

OBJS = ${SRCS:.c=.o}

NAME = hello

CC = cc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

.c.o: 
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
# Il s'agit d'une regle de base, elle sait déja ce qu'elle a à faire mais dans ce cas la je la modifie pour ...
# ... Qu'elle fasse autre chose.
# Donc maintenant ma regle .c.o va compiler les .c qu'on a en entrée et ca va générer des .o 
# $< veut dire que mes .c vont être substituer par des .o (-c $< -o)
# Il va prendre le compilateur dans {CC} et les flags dans {CFLAGS} puis compiler les .c et les transormer en .o

${NAME}: ${OBJS} 
	${CC} -o ${NAME} ${SRCS}
#compiler puis nomme le programme avec le nom de NAME en prenant les fichier .o dans SRCS

all: ${NAME}
# all est une convention. Il appel la fonction name qui finalement englobe toute les règles.

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
# re permet de tout nettoyer puis recompiler

.PHONY: all clean fclean re
# Dans le cas ou j'aurais déja un fichier clean dans mon répertoire par exemple. Quand je vais utiliser make clean...
# ... Il va me préciser que clean est up do date. .PHONY sert justement à dire "all" ou "clean" etc .. n'est pas un fichier...


#r -> remplace les objets de la lib
#c -> crée la lib si elle n' existe pas
#s- > crée un index d'archive