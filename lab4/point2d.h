#ifndef POINT2D_H
#define POINT2D_H

class Point2d
{
public:
    Point2d();
    Point2d(int, int);
    void display();
    void buildPoint();
    void setNext(Point2d* nxt);
    void setPrev(Point2d* prv);
    Point2d* getNext() const;
    Point2d* getPrev() const;

private:
    float x;
    float y;
    Point2d* prev;
    Point2d* next;

};

#endif // POINT2D_H
