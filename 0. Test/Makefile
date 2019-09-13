compile:
	g++ src/main.cpp -o main
compile-all:
	g++ ./src/Temperatura.cpp -c -o ./src/Temperatura.o
	g++ ./src/Fraccion.cpp -c -o ./src/Fraccion.o
	g++ ./src/main.cpp ./src/Temperatura.o ./src/Fraccion.o -o main
compile-criba:
	g++ ./src/Elemento.cpp -c -o ./src/Elemento.o
	g++ ./src/myCriba.cpp ./src/Elemento.o  -o criba
compile-ortoedro:
	g++ ./src/Coordenada.cpp -c -o ./src/Coordenada.o
	g++ ./src/Rectangulo.cpp -c -o ./src/Rectangulo.o
	g++ ./src/Ortoedro.cpp -c -o ./src/Ortoedro.o
	g++ ./src/ortoMain.cpp ./src/Coordenada.o ./src/Rectangulo.o ./src/Ortoedro.o -o ortoMain
run:
	./main
clean:
	-rm main