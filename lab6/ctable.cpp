#include "ctable.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int *quickSortSolver(int*, int, int);
int quickSortPart(int*, int, int);

CTable::CTable(int i, int minVal, int maxVal):
    n(i),
    min(minVal),
    max(maxVal) {
    table = new int[n]();
}
CTable::~CTable()
{
    delete[] table;
}
void CTable::tableBuilder()
{
    int k;
    for(int i = 0; i < n; ++i)
    {
        k = min + (rand() % (int)(max - min + 1));
        table[i] = k;
    }
}
void CTable::display()
{
    for(int i = 0; i < n; i++)
        cout << table[i]<<" ";
    cout<<endl;
}
void CTable::insertAt()
{
    cout<<"enter new element : ";
    int e = 0;
    cin >> e;

    cout << "enter the position to insert " << e << " at: ";
    int idx = 0;
    cin >> idx;
    if (e >= n) return;

    int* tempTable = new int[n+1]();
    for(int i = 0; i < n+1; i++)
    {
        if (i < idx)
        {
            tempTable[i] = table[i];
            continue;
        }
        if ( i == idx)
        {
            tempTable[i] = e;
            continue;
        }
        tempTable[i] = table[i-1];
    }

    delete[] table;
    table = tempTable;
    n++;
}

void CTable::bubbleSort()
{
    int temp = 0;
    for(int k = n; k > 0; k--)
        for(int i = 1; i < k; i++)
        {
            if (table[i - 1] > table[i])
            {
                temp = table[i];
                table[i] = table[i - 1];
                table[i - 1] = temp;
            }
        }
}
void CTable::quickSort()
{

    quickSortSolver(table, 1, n);
    cout<<"asdf"<<endl;

}
int* quickSortSolver(int* list, int lo, int hi)
{
    int p;
    if (lo < hi)
        p = quickSortPart(list, lo, hi);
    quickSortSolver(list, lo, p - 1);
    quickSortSolver(list, p + 1, hi);
}
int quickSortPart(int* list, int lo, int hi)
{
    int temp;
    int pivot = list[hi];
    int i = lo;
    for (int j = lo; j < hi; j++)
        if (list[j] <= pivot)
        {
            temp = list[i];
            list[i] = list[j];
            list[j] = temp;
            i++;
        }
    temp = list[i];
    list[i] = list[hi];
    list[hi] = temp;
    return i;
}







