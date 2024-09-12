
main: main.cpp -lsfml-graphics -lsfml-window -lsfml-system
	g++ -Wall -o test main.cpp -lsfml-graphics -lsfml-window -lsfml-system
	./test


test: test.cpp
	g++ -Wall -o test test.cpp
	./test
