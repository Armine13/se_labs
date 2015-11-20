#include "polygon2d.h"
#include <iostream>
#include <QVector>
#include "point2d.h"

using namespace std;

Polygon2d::Polygon2d()
{
    start = 0;
    n = 0;
}
Polygon2d::~Polygon2d()
{
//    delete start;
    Point2d* point = start;
    Point2d* point2;
    do
    {
        point2 = point->getNext();
        delete point;
        point = point2;
    }while(point != start);
    //delete all points
}
void Polygon2d::buildPolygon()
{
    cout << "Enter the number of points: ";
    cin >> n;
    Point2d* point1;
    Point2d* point2;

    point1 = new Point2d();
    point1->buildPoint();
    start = point1;

    for(int i = 1; i < n; i++)
    {
        point2 = new Point2d();
        point2->buildPoint();
        point1->setNext(point2);
        point2->setPrev(point1);
        point1 = point2;
    }
    start->setPrev(point2);
    point1->setNext(start);

}
void Polygon2d::display() const
{
    Point2d* point;
    int i = 0;
    point = start;
    do
    {
        cout<<"Points at position "<< i ;
        point->display();
        cout<< "\t\tnext is ";
        point->getNext()->display();
        cout<< "\t\tprev is ";
        point->getPrev()->display();
        point = point->getNext();
        i++;
    }
    while(point != start);
}
Point2d* Polygon2d::getElement()const
{
    int pos;
    cout << "insert index: ";
    cin >> pos;

    int i = 0;
    Point2d* point = start;

    while (i < pos)
    {
        point = point->getNext();
        i++;
    }
    return point;
}
int Polygon2d::getPosition(Point2d* pointX )const
{
    int i = 0;
    Point2d* point = start;

    while (point != pointX  )
    {
        point = point->getNext();
        i++;
    }
    return i;
}
void Polygon2d::insertAt()
{
    cout<<"element insertion..\n";
    Point2d* point = new Point2d();
    point->buildPoint();

    int idx;
    cout<<"Which position do you want to add this point at? ";
    cin>>idx;

    //find the point of insertion
    Point2d* prevPoint = start;
    int i = 0;
    while (i < idx)
    {
        prevPoint = prevPoint->getNext();
        i++;
    }
    //save the previous point
    Point2d* nextPoint = prevPoint->getNext();

    //insert new element between prev and nex
    prevPoint->setNext(point);
    point->setPrev(prevPoint);

    point->setNext(nextPoint);
    nextPoint->setPrev(point);

}
void Polygon2d::deleteAt()
{
    cout<<"element deletion..\n";
    Point2d* point;
    Point2d* prevPoint;
    Point2d* nextPoint;

    int idx;
    cout<<"Which element do you want to delete? ";
    cin>>idx;

    int i = 0;
    point = start;

    while (i < idx)
    {
        point = point->getNext();
        i++;
    }
    prevPoint = point->getPrev();
    nextPoint = point->getNext();
    delete point;
    prevPoint->setNext(nextPoint);
    nextPoint->setPrev(prevPoint);
}















