# makefile No 1 du programme graphicus-01
# compilation separee simple..
# Atelier APP No 1.  14 janvier 2020 
# But principal:
# graphicus construire programme graphicus
# But secondaires:
#  clean
#
graphicus-02: graphicus-02.o tests.o canevas.o couche.o forme.o rectangle.o carre.o
	g++ -o graphicus-02 graphicus-02.o tests.o canevas.o couche.o forme.o rectangle.o carre.o
#
graphicus-02.o:	graphicus-01.cpp tests.cpp tests.h canevas.h couche.h forme.h coordonnee.h rectangle.h carre.h
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
rectangle.o: rectangle.cpp rectangle.h forme.h
	g++ rectangle.cpp -g -c
#
carre.o: carre.cpp carre.h rectangle.h forme.h
	g++ carre.cpp -g -c
#
clean:
	rm  -f *.o	
#
# fin du makefile
#
