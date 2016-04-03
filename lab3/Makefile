Clock: Clock.o Clock_main.o
	g++ -o Clock Clock.o Clock_main.o
Clock.o: Clock.h Clock.cpp
	g++ -c Clock.cpp
Clock_main.o: Clock_main.cpp Clock.h
	g++ -c Clock_main.cpp
clean:
	rm Clock *.o
