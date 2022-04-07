NAME = awesomeprog
# nom de mon programme 

SRC = source.c \
    test.c
# il va accueillir l'ensemble des sources c que je souhaite compiler
# Si j'ai besoin de plus ligne je peux utliser \ à la fin de chaque ligne puis sauter une ligne
 

all: $(NAME)

$(NAME):
    gcc -o $(NAME) $(SRC) -Wall -Wextra -Werror
# Je fais que ma variable NAME sera une règle de compilation 
# J'utilise gcc pour compiler et l'option "-o" pour donner un nom à mon exécutable. Le nom sera donc la valeur de $(NAME)
# En suite, je lui donne les fichier sources à compiler qui ce trouve dans ma variable SRC 

clean:
    /bin/rm -f *.o
# La regle clean va supprimer tout les fichier .o généré à la compilation 
# je peux évidamment modifier la règle pour supprimer d'autres fichier comme les fichier til dans le shell 

fclean: clean
    /bin/rm -f $(NAME)
# fclean va supprimer l'éxecutable

re: fclean all 
# la regle re permet de reset la compilation. Avec fclean je supprime tout et avec all je re compile mon programme.