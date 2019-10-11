all : 1.x datos.txt 1.pdf

%.x : %.cpp
	g++ $^ -o $@

datos.txt : 1.x
	./1.x > $@

1.pdf : 1.gp datos.txt
	gnuplot $< 

.PHONY: clean
clean:
	rm -f *.x
