
main: main.cpp Game.cpp Entity.cpp Player.cpp -lsfml-graphics -lsfml-window -lsfml-system
	g++ -Wall -o test main.cpp Game.cpp Entity.cpp Player.cpp -lsfml-graphics -lsfml-window -lsfml-system
	./test


test: test.cpp
	g++ -Wall -o test test.cpp
	./test
