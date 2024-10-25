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
        GridItem(int x, int y, int width, int height);
        GridItem();

        void setCoordinates(int x, int y);

        std::pair<int,int> getCoordinates();

        static void setItemCount(int num);
        int getGridWidth();
        int getGridHeight();
        static int getActiveGridItemCount();
        virtual ~GridItem();
};


#endif


 GridItem::GridItem(int x, int y, int width, int height) {
    posX = x;
    posY = y;
    this->width = width;
    this->height = height;
    itemCount++;
}
GridItem::GridItem(): GridItem(0,0,0,0) {}

void GridItem::setCoordinates(int x, int y) {
    posX = x;
    posY = y;
}

std::pair<int,int> GridItem::getCoordinates() {
    std::pair <int,int> position(posX, posY);
    return position;
}

void GridItem::setItemCount(int num) {itemCount = num;}
int GridItem::getGridWidth() {return width;}
int GridItem::getGridHeight() {return height;}
int GridItem::getActiveGridItemCount() {return itemCount;}
GridItem::~GridItem() {itemCount--;}

