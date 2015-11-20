#include "tree.h"
#include "treenode.h"
#include <iostream>
#include <cstring>

using namespace std;

Tree::Tree()
{
    root = new TreeNode;
}
void Tree::preOrderTrav()
{
}
void Tree::postOrderTrav()
{
}
void Tree::inOrderTrav()
{
}
void Tree::insertNode(char* w)
{
    TreeNode* tempNode = root;

    int r;
    while(tempNode != 0)
    {
        r = strcmp(w, tempNode->getWord());
        if (r >= 0) {
            tempNode = tempNode->getRight();
            continue;}
        if (r < 0) {
            tempNode = tempNode->getLeft();
            continue;}
    }
}
void Tree::setRoot(char* w)
{
    root->setWord(w);
}
TreeNode* Tree::getRoot()const
{
    return root;
}
void Tree::TreeBuilder()
{//this function does not work as expected
    int n;
    char* tempWord;
    cout<<"How many words do you want to add to the dictionary? ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter a word to add: ";
        cin >> tempWord;
        if (i == 0) setRoot(tempWord);
        else insertNode(tempWord);
    }
}
