#include "point2d.h"
#include <iostream>

using namespace std;

Point2d::Point2d()
{
    x = 0;
    y = 0;
}
Point2d::Point2d(int a, int b)
{
    x = a;
    y = b;
}
void Point2d::display()
{
    std::cout<<" ( "<<x<<", "<<y<<" ) "<<endl;
}

void Point2d::buildPoint()
{
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
}
void Point2d::setNext(Point2d* nxt)
{
    next = nxt;
}
void Point2d::setPrev(Point2d* prv)
{
    prev = prv;
}
Point2d* Point2d::getNext() const
{
    return next;
}
Point2d* Point2d::getPrev() const
{
    return prev;
}
