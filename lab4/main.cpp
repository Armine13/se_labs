#include <iostream>
#include "point2d.h"
#include "polygon2d.h"

using namespace std;

int main(int argc, char *argv[])

{
    Point2d* pPoint = new Point2d;

    Polygon2d polygon;
    polygon.buildPolygon();

    polygon.display();
//polygon.insertAt();
//    polygon.deleteAt();

    Point2d* p;
    p = polygon.getElement();
    p->display();

    int i = polygon.getPosition(p);

    polygon.display();
    return 0;
}
