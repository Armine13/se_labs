#ifndef TREE_H
#define TREE_H
#include "treenode.h"

class Tree
{
public:
    Tree();
    void TreeBuilder();
    void preOrderTrav();
    void postOrderTrav();
    void inOrderTrav();
    void insertNode(char* );
    void setRoot(char* );
    TreeNode* getRoot()const;

private:
    TreeNode* root;
};

#endif // TREE_H
