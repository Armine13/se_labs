#include <iostream>
#include "treenode.h"
#include "tree.h"

using namespace std;

int main()
{
    Tree* tree = new Tree;

    tree->TreeBuilder();

    delete tree;
    return 0;
}
