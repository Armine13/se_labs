#include <iostream>
#include "ctable.h"

using namespace std;

int main(int argc, char *argv[])
{
    CTable tab;
    tab.tableBuilder();
    tab.display();
//    tab.insertAt();
//    tab.bubbleSort();
    tab.quickSort();
    tab.display();
    
    return 0;
}
