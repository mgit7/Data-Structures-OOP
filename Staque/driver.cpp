//Manny G.

//  driver.cpp

#include <iostream>
#include "Staque.h"

int main ()
{

    Staque sk; // initializes an object

    char choice; // used for switch case
    int sNum; // items to put on staque
    int dNum; // item to be removed from staque
    int num1; // numbers to put on staque
    int num2; // numbers to remove from staque


    do // do-while statement
    {
    	cout << endl << "Choose one of the options below:" << endl;
    	cout << "**************************************" << endl;
    	    	cout << "\nA. Insert numbers into Staque" << endl << "B. Delete number from Staque" <<
    	    			endl << "C. Display the Staque" << endl << "D. Exit the program" << endl;

    	cout << "\nEnter letter: ";
    	cin >> choice;

    	switch(choice){

    	// Insert into Staque
    	case 'A':
    	case 'a':
    	    					cout << "\nHow many numbers do you want to insert onto the Staque? " << endl;
    	    					cout << "Enter: ";
    	    					cin >> sNum;
    	    					for(int i = 0; i < sNum; i++) // iterates to input numbers into staque
    	    					{
    	    						cout << "Enter number: ";
    	    						cin >> num1;
    	    						sk.push(num1);
    	    					}
    	    	  					break;

    	// Delete from Staque
    	case 'B':
    	case 'b':
    	    				cout << "\nHow many numbers do you want to delete from the Staque?" << endl;
    	    				cout << "Enter number: ";
    	    				cin >> dNum;
    	    				for(int i = 0; i < dNum; i++) // iterates to delete numbers on staque
    	    				{
    	    				   	cout << "\nEnter 1 to delete even number or 0 for odd number: " << endl;
    	    				   	cout << "Enter choice: ";
    	    				   	cin >> num2;
    	    				   	if(num2 == 0)
    	    				   		sk.odds.remove();
    	    				   	else if(num2 == 1)
    	    				   		sk.evens.remove();
    	    				   	else {
    	    				   		cout << "Invalid choice!" << endl;
    	    				   		break;
    	    				   		}
    	    				}
    	    				break;

    	// List numbers on the Staque
    	case 'C':
    	case 'c':
    						cout << "\nList of numbers: " << endl;
    						cout << sk << endl;
    						break;

    	// End the program
    	case 'D':
    	case 'd':
    	    				cout << "\nExiting the program... " << endl << "Goodbye!";
    	    				choice = false;
    	    				break;


    	}


    }while(choice); // ends do-while dependent on choice

    return 0;
}

