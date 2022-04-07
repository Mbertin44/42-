SRCS = main.c fct.c

OBJS = ${SRCS:.c=.o}
# OBJS va générer des .o à partir des .c qui ce trouve dans SRCS 

NAME = hello

all: ${OBJS} 
	cc -o ${NAME} ${SRCS}

# Pour que la regle all s'applique je lui dis j'ai besoin de OBJS (donc de mes .o). ...
# ...C'est le même principe qu'une condition. ...
# ...Si je ne lui donne pas cette condition ma commande make ne fonctionnera pas.
# all va générer le fichier hello à partir des fichier main.o et fct.o qui ce trouve dans OBJS
# cc link les .o qui ce trouve dans SRCS



# On déclare les regle avec ":"
# On déclare les variable avec "="
# Si je modifie un fichier (fct.c par exemple) make va re générer un nouveau fct.o mais pas main.o ...
# ...C'est utile quand on à beaucoup de fichier différent dans un même programme.