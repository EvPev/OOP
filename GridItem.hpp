#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <utility>

class GridItem
{
    protected:
        int posX;
        int posY;
        int width;
        int height;
        static int itemCount;

    public:
        GridItem(int x, int y, int width, int height) {
            posX = x;
            posY = y;
            this->width = width;
            this->height = height;
        }
        GridItem(): GridItem(0,0,0,0) {}

        void setCoordinates(int x, int y) {
            posX = x;
            posY = y;
        }

        std::pair<int,int> getCoordinates() {
            std::pair <int,int> position(posX, posY);
            return position;
        }

        static void setItemCount(int num) {itemCount = num;}
        int getGridWidth() {return width;}
        int getGridHeight() {return height;}
        int getActiveGridItemCount() {return itemCount;}
        virtual ~GridItem() {itemCount--;}
};


#endif
