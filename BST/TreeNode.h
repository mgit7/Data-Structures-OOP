//Manny G.

#ifndef BST_TreeNode_h
#define BST_TreeNode_h

using namespace std;

class TreeNode {
    friend class BST;
public:

    TreeNode()
    {
    	item = 0;
        Lchild = Rchild = NULL;
    };  //default constructor

    TreeNode(int i)
    {
        item = i;
        Lchild = NULL;
        Rchild = NULL;

    }

    int getItem () const
    {
        return item;
    }; // accessor function

private:
    int item;
    TreeNode *Lchild;
    TreeNode *Rchild;

};

// TreeNode::TreeNode(int i, TreeNode *L = 0, TreeNode *R = 0) : item(i), Lchild(L), Rchild(R)





#endif
