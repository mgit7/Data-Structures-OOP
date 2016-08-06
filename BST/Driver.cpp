//Manny G.

#include <iostream>
#include "BST.h"

using namespace std;

int main(int argc, const char * argv[])
{
	char choice;
	int numS;
	int numR;

	BST * tree = new BST();
    tree->add(5);
    tree->add(3);
    tree->add(2);
    tree->add(1);
    tree->add(8);
    tree->add(23);
    tree->add(32);

	cout << "Numbers inserted into tree: 5, 3, 2, 1, 8, 23, 32" << endl;

	do // do-while statement
	    {
	    	cout << endl << "Choose one of the options below:" << endl;
	    	cout << "**************************************" << endl;
	    	    	cout << "\nA. Display In-Order Traversal" << endl << "B. Display Pre-Order Traversal" << endl << "C. Display Post-Order Traversal" << endl
	    	    			<< "D. Search for an element" << endl << "E. Remove an element"  << endl << "F. Exit the program" << endl;

	    	cout << "\nEnter letter: ";
	    	cin >> choice;

	    	switch(choice){

	    	// Insert into BST
	    	case 'A':
	    	case 'a':
	    	    cout << "In-Order Traversal: " << endl;
	    	    cout << "*******************" << endl;
	    	    tree->in_order_print();
	    	    cout << endl;
	    	   	break;

	    	// List numbers in Pre-Order
	    	case 'B':
	    	case 'b':
	    		cout << "Pre-Order Traversal: " << endl;
	    		cout << "*******************" << endl;
	    		tree->pre_order_print();
	    		cout << endl;
	    		break;

	    	// List numbers in Post-order
	    	case 'C':
	    	case 'c':
	    		cout << "Post-order Traversal: " << endl;
	    		cout << "*******************" << endl;
	    		tree->post_order_print();
	    		cout << endl;
	    		break;

	    	// Search for element
	    	case 'D':
	    	case 'd':
	    		cout << "Search for an Element" << endl;
	    		cout << "*******************" << endl;
	    		cout << "Enter number you want to search for :";
	    		cin >> numS;
	    		tree->search(numS);
	    		break;

	    	case 'E':
	    	case 'e':
	    		cout << "Remove an Element" << endl;
	    		cout << "*******************" << endl;
	    		cout << "Enter number you want to remove: ";
	    		cin >> numR;
	    		tree->ddelete(numR);
	    		break;

	    	// End the program
	    	case 'F':
	    	case 'f':
	    	    cout << "\nExiting the program... " << endl << "Goodbye!";
	    	    choice = false;
	    	    break;


	    	}


	    }while(choice); // ends do-while dependent on choice

	return 0;


}
