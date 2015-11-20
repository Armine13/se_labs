#ifndef CTABLE_H
#define CTABLE_H

class CTable
{
public:
    CTable(int i =10, int minVal = 0, int maxVal = 100);
    ~CTable();
    void tableBuilder();
    void display();
    void insertAt();
    void bubbleSort();
    void quickSort();

private:
    int n;
    int* table;
    int min;
    int max;
};

#endif // CTABLE_H
