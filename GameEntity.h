#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <vector>
#include <tuple>




class GameEntity {
    public:
        enum GameEntityType {
            ExplosionType,
            MineType,
            NoneType,
            ShipType
        };
    private:
        std::tuple<int,int> position;
        
        enum GameEntityType type;
        

    public:
        GameEntity(int x, int y, GameEntityType type);

        std::tuple<int,int> getPos();
        GameEntityType getType();
};

#endif


