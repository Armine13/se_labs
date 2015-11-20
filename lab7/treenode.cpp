#include "treenode.h"

TreeNode::TreeNode():
    word(0), parent(0), left(0), right(0)
{
}
TreeNode::~TreeNode()
{
    delete parent;
    delete left;
    delete right;
    delete word;
}
void TreeNode::setParent(TreeNode* p)
{
    parent = p;
}
void TreeNode::setLeft(TreeNode* l)
{
    left = l;
}
void TreeNode::setRight(TreeNode* r)
{
    right = r;
}
void TreeNode::setWord(char* w)
{
    word = w;
}
TreeNode* TreeNode::getParent() const
{
    return parent;
}
TreeNode* TreeNode::getLeft() const
{
    return left;
}
TreeNode* TreeNode::getRight() const
{
    return right;
}
char* TreeNode::getWord() const
{
    return word;
}

