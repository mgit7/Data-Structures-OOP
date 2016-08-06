//Manny G.


#include <iostream>
#include "BST.h"


using namespace std;



BST::BST()
{
    root = 0;
    current_size = 0;
}



bool BST::add(int value)
{
    if (root == 0)
        root = new TreeNode(value);
    else
    	insert(value, root, NULL, false);

    current_size++;
    mod_counter++;
    return true;
}

void BST::insert(int value, TreeNode * n, TreeNode *parent, bool was_left)

{
    if (n == NULL)
    { // if you reached the end of a branch insert here
        if (was_left)
            parent->Lchild = new TreeNode(value);
        else
            parent->Rchild = new TreeNode(value);
    }
    else if (value < root->item)
        insert(value, n->Lchild, n, true); //go down tree to the left
    else
        insert(value, n->Rchild, n, false); // go down right
}


bool BST::ddelete(int value)
{

    TreeNode * node = find(value, root);
    TreeNode * parent = remove(node, root);

    root = parent;
    current_size--;


    return true;

}

TreeNode * BST::find(int value, TreeNode * n) {
    if (n == NULL)
        return NULL;

    if (value < n->item) {
        return find(value, n->Lchild); //go left
    }
    else if (value > n->item) {
        return find(value, n->Rchild); //go right
    }
    else
        return n; //found!

}



TreeNode * BST::remove(TreeNode * node_to_delete, TreeNode * start_node)
{
    if( start_node == NULL )
        return start_node;   // Item not found; do nothing

    if(node_to_delete->item < start_node->item )
        start_node->Lchild = remove( node_to_delete, start_node->Lchild );
    else if(node_to_delete->item > start_node->item )
        start_node->Rchild = remove( node_to_delete, start_node->Rchild );
    else if( start_node->Lchild != NULL && start_node->Rchild != NULL ) // Two children
    {
        start_node->item = findMin( start_node->Rchild )->item;
        start_node->Rchild = remove( start_node, start_node->Rchild );
    }
    else
        start_node = ( start_node->Lchild != NULL ) ? start_node->Lchild : start_node->Rchild;
    return start_node;
}


TreeNode * BST::findMin( TreeNode * t )
{
    if( t == NULL )
        return NULL;
    else if( t->Lchild == NULL )
        return t;
    return findMin( t->Lchild );
}

TreeNode BST::search(int value)
{
	{
	    bool found = false;
		bool isEmpty = false;
	    if(isEmpty)
	    {
	        cout<<" This Tree is empty! "<<endl;
	    }
	    TreeNode* curr;
	    TreeNode* parent;
	    curr = root;
	    while(curr != NULL)
	    {
	        if(curr->item == value)
	        {
	            found = true;
	            cout << "Element " << value << " was found! " << endl;
	            break;
	        }
	        else
	        {
	    	    parent = curr;
	            if(value > curr->item) curr = curr->Rchild;
	            else curr = curr->Lchild;
	        }
	    }
	    if(!found)
	    {
	    	cout <<" Element not found! "<<endl;
	    }

	}
}

//traverse tree
void  BST::in_order_print(TreeNode * n) {
    if (n == NULL) {
        return;

    }
    in_order_print(n->Lchild);
    cout << n->item << endl;
    in_order_print(n->Rchild);
}

void  BST::in_order_print() {
    in_order_print(root);
}

void BST::pre_order_print()
{
    pre_order_print(root);
}

void BST::pre_order_print(TreeNode * n)
{
    if (n == NULL) {
        return;

    }
    cout << n->item <<endl;
    pre_order_print(n->Lchild);
    pre_order_print(n->Rchild);
}

void BST::post_order_print()
{
    post_order_print(root);
}

void BST::post_order_print(TreeNode *n)
{
    if (n == NULL) {
        return;

    }

    post_order_print(n->Lchild);
    post_order_print(n->Rchild);

     cout << n->item <<endl;
}

int BST::size()
{
    return current_size;
}
