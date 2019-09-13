compile:
	g++ src/main.cpp -o main
compile-all:
	g++ ./src/Temperatura.cpp -c -o ./src/Temperatura.o
	g++ ./src/Fraccion.cpp -c -o ./src/Fraccion.o
	g++ ./src/main.cpp ./src/Temperatura.o ./src/Fraccion.o -o main
compile-criba:
	g++ ./src/Elemento.cpp -c -o ./src/Elemento.o
	g++ ./src/myCriba.cpp ./src/Elemento.o  -o criba
run:
	./main
clean:
	-rm main