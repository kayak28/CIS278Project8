#include <iostream>

using namespace std; 
#include "IntList.h"
int main()
{
	IntList<int> mylist(2); //create array with int type with cap = 2
	IntList<char> yourlist; 

	mylist.insert(6);
	mylist.insert(66);
	
	if(mylist.isFull())
	{
		cout << "this array is full";
	}
	else
	{
		cout << "this array has still space";
	}
	mylist.insert(65);
	mylist.display(cout);
	cout << endl << endl;

	cout << "searching" << endl;
	if(mylist.isThere(6))
	{
		cout << "found the terget --good " << endl;
	}
	else
	{
		cout << "problem the terget not found" << endl;
	}
	if(mylist.isThere(15))
	{
		cout << "found the terget!!!" << endl;
	}
	else
	{
		cout << "the terget not found" << endl;
	}
	mylist.deleteItem(66);
	cout << "\n\nmylist after deleting 66\n" << endl;
	mylist.display(cout);
	mylist.deleteItem(65);
	cout << "\n\nmylist after deleting 65\n" << endl;
	mylist.display(cout);
	
	cout << "\n\n\n------NOW play with chars--------";
	yourlist.insert('k');
	yourlist.insert('a');
	yourlist.insert('y');
	yourlist.insert('a');
	yourlist.display(cout);
	cout << endl << endl;
	if (yourlist.isThere('k'))
	{
		cout << "there is k!\n";
	}
	else
	{
		cout << "there is not k.\n";
	}
	if(yourlist.isThere('o'))
	{
		cout << "there is o!!\n";
	}
	else
	{
		cout << "there is not o.\n";
	}
	yourlist.deleteItem('k');
	cout << "\n\nList after deleting\n";
	yourlist.display(cout);

	yourlist.deleteItem('a');
	cout << "\n\nList after deleting\n";
	yourlist.display(cout);
	cout << endl; 
}//main