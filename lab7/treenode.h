#ifndef TREENODE_H
#define TREENODE_H

class TreeNode
{
public:
    TreeNode();
    ~TreeNode();
    void setParent(TreeNode*);
    void setLeft(TreeNode*);
    void setRight(TreeNode*);
    void setWord(char*);
    TreeNode* getParent() const;
    TreeNode* getLeft() const;
    TreeNode* getRight() const;
    char* getWord() const;

private:
    char* word;
    TreeNode* parent;
    TreeNode* left;
    TreeNode* right;
};

#endif // TREENODE_H
