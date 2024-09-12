#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>

using namespace std;

class Entity
{
    protected:
        int px;
        int py;
    public:
        Entity(int px, int py);
        Entity();
        ~Entity();

        void set_px(int px);
        void set_py(int py);

        int get_px();
        int get_py();
};

#endif
