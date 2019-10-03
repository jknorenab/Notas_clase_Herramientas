#Como se repiten tanto los .o, podemos guardarlos en una especie de variable llamada objetos, como sigue

OBJ=sum1.o sum2.o sum3.o
#Tal que cambian los targets, como sigue

all: $(OBJ) main-sumas.x # sum1.o sum2.o sum3.o main-sumas.x
#La regla genérica siguiente, me permite escribir en una sola linea, las tres lineas comentadas más abajo! Así, le digo que voy a hacer muchas cosas .o, a partir de implementaciones con el mismo nombre .cpp y que la regla para crearlo, será como se hace usualmente con un único archivo

%.o : %.cpp
	g++ -c $< -o $@

# #sum1.o : sum1.cpp
# 	#g++ -c $< -o $@

# #sum2.o : sum2.cpp
# 	#g++ -c $< -o $@

# #sum3.o : sum3.cpp
# 	#g++ -c $< -o
#La siguiente linea, tambien se puede generalizar, como sigue:
#main-sumas.x: main-sumas.cpp $(OBJ)     #sum1.o sum2.o sum3.o
#	g++ $^ -o $@ Donde, le estamos diciendo que tome el mismo nombre de los .cpp y los convierta en ejecutables .x a través de la regla puesta en la segunda línea. Esto mismo sucede con la regla general %.o ...

%.x : %.cpp
	g++ $^ -o $@

#Finalmente, le digo que hay un archivo que quiero que cree en particular, llamado main-sumas.x, pero como ya le enseñé a crear archivos tipo .x no es necesario escribir la regla para ello, así

main-sumas.x: main-sumas.cpp $(OBJ)

.PHONY: clean
clean :
	rm -f *.o *.x
