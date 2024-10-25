#include "Explosion.h"
#include "Effect.h"

Explosion::Explosion(int x, int y, GameEntityType type) : GameEntity(x, y, GameEntity::ExplosionType) {}

void Explosion::apply(GameEntity& entity) {
    entity.setPos(make_tuple(-1,-1));
    entity.setType(GameEntity::NoneType);
}   