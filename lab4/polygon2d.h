#ifndef POLYGON2D_H
#define POLYGON2D_H
#include "point2d.h"
#include <QVector>

class Polygon2d
{
public:
    Polygon2d();
    ~Polygon2d();
    void buildPolygon();
    void display() const;
    Point2d* getElement()const;
    int getPosition(Point2d* )const;
    void insertAt();
    void deleteAt();

private:
    Point2d* start;
    int n;
};

#endif // POLYGON2D_H
