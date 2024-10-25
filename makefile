main-1: main-1.cpp GameEntity.cpp Utils.cpp
	g++ -Wall -o test main-1.cpp GameEntity.cpp Utils.cpp 
	./test

main-2: main-2.cpp GameEntity.cpp Utils.cpp Effect.cpp Explosion.cpp Ship.cpp Mine.cpp
	g++ -Wall -o test main-2.cpp GameEntity.cpp Utils.cpp Explosion.cpp Ship.cpp Mine.cpp
	./test