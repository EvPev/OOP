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
    protected:
        std::tuple<int,int> position;
        
        enum GameEntityType type;
        

    public:
        GameEntity(int x, int y, GameEntityType type);

        std::tuple<int,int> getPos();
        GameEntityType getType();

        void setPos(std::tuple<int,int> pos);
        void setType(GameEntityType type);
};

#endif


