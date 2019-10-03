all: sumas.x datos.txt fig.pdf

sumas.x : sumatorias.cpp 
	g++ $^ -o $@

datos.txt : sumas.x
	./sumas.x > $@

fig.pdf : plot.gp datos.txt
	gnuplot $<

.PHONY : clean

clean :
	rm -f sumas.x datos.txt fig.pdf
