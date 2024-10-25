#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <utility>
static int itemCount = 0;
class GridItem
{
    protected:
        int posX;
        int posY;
        int width;
        int height;
        

    public:
        GridItem(int x, int y, int width, int height) {
            posX = x;
            posY = y;
            this->width = width;
            this->height = height;
            itemCount++;
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
        static int getActiveGridItemCount() {return itemCount;}
        virtual ~GridItem() {itemCount--;}
};


#endif
