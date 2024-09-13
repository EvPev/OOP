#include <iostream>
#include "Entity.h"
#include "Player.h"

using namespace std;

Player::Player(int px, int py) : Entity(px,py) {}
Player::Player() : Player(0,0) {}
Player::~Player() {}