#include <iostream>
#include "Entity.h"
#include "Player.h"

using namespace std;

Player::Player(int r, int x, int y) : Entity(r, x, y) {}
Player::~Player() {}