# makefile No 1 du programme graphicus-02
# compilation separee simple..
# APP No 1.  18 janvier 2021 
# But principal:
# graphicus construire programme graphicus
# But secondaires:
#  clean
#
graphicus-02: graphicus-02.o tests.o canevas.o couche.o forme.o rectangle.o carre.o cercle.o vecteur.o
	g++ -o graphicus-02 graphicus-02.o tests.o canevas.o couche.o forme.o rectangle.o carre.o cercle.o vecteur.o
#
graphicus-02.o:	graphicus-01.cpp tests.cpp tests.h canevas.h couche.h forme.h coordonnee.h rectangle.h cercle.h carre.h vecteur.h
	g++ graphicus-01.cpp -g -c -o graphicus-02.o
#
tests.o: tests.cpp tests.h canevas.h couche.h forme.h coordonnee.h
	g++ tests.cpp -g -c
#
canevas.o: canevas.cpp canevas.h couche.h forme.h coordonnee.h
	g++ canevas.cpp -g -c
#
couche.o: couche.cpp couche.h
	g++ couche.cpp -g -c
#
forme.o: forme.cpp forme.h coordonnee.h
	g++ forme.cpp -g -c
#
cercle.o: cercle.cpp cercle.h forme.h
	g++ cercle.cpp -g -c
#
rectangle.o: rectangle.cpp rectangle.h forme.h
	g++ rectangle.cpp -g -c
#
carre.o: carre.cpp carre.h rectangle.h forme.h
	g++ carre.cpp -g -c
#
vecteur.o: vecteur.cpp vecteur.h
	g++ vecteur.cpp -g -c
#
clean:
	rm  -f *.o	
#
# fin du makefile
#
