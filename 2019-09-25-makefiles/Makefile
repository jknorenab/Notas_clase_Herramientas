#Bandera para activar el nivel de optimización 2,para hacer las cosas más rápido
CXXFLAGS= -O2 -Wall #Wall, activa los warnings del compilador

all: sumas.x datos.txt fig.pdf

sumas.x : sumatorias.cpp 
	g++ $(CXXFLAGS) $^ -o $@

datos.txt : sumas.x
	./sumas.x > $@

fig.pdf : plot.gp datos.txt
	gnuplot $<

.PHONY : clean

clean :
	rm -f sumas.x datos.txt fig.pdf
