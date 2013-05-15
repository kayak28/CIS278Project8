//Application.cpp
#include <fstream>
#include <iostream>
using namespace std; 
#include "List.h"

int main()
{
	int listSize; 
	int value; 
	int counter = 0;
	string fileName = "char" + ".txt";
	cout << "enter the list size\n";
	cin >> listSize;
	List<int> list(listSize);
	List<int> list2(listSize); 
	//ofstream outff(fileName);
	ofstream outf("intList.txt", ios::app);//open file with append mode

	while(value != -1 && counter < list.getSize())
	{
		cout << "enter value\n";
		cin >> value;
		list.insert(value);
		//list2.insert(value);
		counter++;
		
	}
	list.display(cout);
	cout << "\n";
	cout << "occurs = " << list.occurs(3);
	//list.deleteAll(3);
	list.display(cout);
	cout << "\n";
	/*
	bool indentical = list == list2;
	if(indentical)
	{
		cout << "both are the same\n";
	}
	else
	{
		cout << "both are NOT the same\n";
	}
	*/







	//Insert all data in the current array into file named intList.txt
	if(!outf)
	{
		cerr << "can not access file successfully\n";
	}
	else
	{
		list.appendFile(outf);
		//list.appendFile(outff);
		outf << endl;
		//outff << endl;
		/*for(int i = 0; i < list.getSize(); i++)
		{
			outf << list.data[i] << endl;
		}
		*/
	}
	//Read all data in the file
	ifstream inf("intList.txt");
	if(!inf)
	{
		cerr << "can not access to file successfully\n";
	}
	else
	{
		while(inf)
		{
			std::string bufferdReader;
			getline(inf, bufferdReader);
			cout << bufferdReader << endl;
		}
	}





	cout << "create an istance\n";
	
	 

	return 0;
}


