# makefile No 1 du programme graphicus-01
# compilation separee simple..
# Atelier APP No 1.  14 janvier 2020 
# But principal:
# graphicus construire programme graphicus
# But secondaires:
#  clean
#
graphicus-01: graphicus-01.o tests.o canevas.o couche.o forme.o
	g++ -o graphicus-01 graphicus-01.o tests.o canevas.o couche.o forme.o
#
graphicus-01.o:	graphicus-01.cpp tests.cpp tests.h canevas.h couche.h forme.h coordonnee.h
	g++ graphicus-01.cpp -g -c
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
clean:
	rm  -f *.o	
#
# fin du makefile
#
