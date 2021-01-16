# creation makefile C.A. Brunet janvier 2014
#
# CE MAKEFILE EST PARFAITEMENT FONCTIONNEL
#
graphicus-02: graphicus-02.o couche.o canevas.o forme.o tests.o
	g++ -o graphicus-02 graphicus-02.o couche.o canevas.o forme.o tests.o

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
#
clean:
	rm  -f *.o		
#
# fin du makefile
#
