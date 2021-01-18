# creation makefile C.A. Brunet janvier 2014
#
# CE MAKEFILE EST PARFAITEMENT FONCTIONNEL
#
graphicus-02: graphicus-02.o couche.o canevas.o forme.o tests.o rectangle.o carre.o cercle.o
	g++ -o graphicus-02 graphicus-02.o couche.o canevas.o forme.o tests.o rectangle.o carre.o cercle.o

graphicus-02.o: graphicus-02.cpp tests.cpp tests.h canevas.h
	g++ graphicus-02.cpp tests.cpp -g -c

tests.o: tests.cpp tests.h canevas.h
	g++ tests.cpp -g -c

couche.o: couche.cpp couche.h
	g++ couche.cpp -g -c

canevas.o: canevas.cpp canevas.h forme.h couche.h
	g++ canevas.cpp -g -c

forme.o: forme.cpp forme.h coordonnee.h
	g++ forme.cpp -g -c

rectangle.o: rectangle.cpp rectangle.h forme.h
	g++ rectangle.cpp -g -c
	
carre.o: carre.cpp carre.h rectangle.h forme.h
	g++ carre.cpp -g -c
	
cercle.o: cercle.cpp cercle.h forme.h
	g++ cercle.cpp -g -c
#
clean:
	rm  -f *.o		
#
# fin du makefile
#
