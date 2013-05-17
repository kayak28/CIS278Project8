//Application.cpp
#include <fstream>
#include <iostream>
using namespace std; 
#include "List.h"
//#include "ListException.h"

int main()
{
	int listSize; 
	int value = 0; 
	int counter = 0;

	string fileName;
	cout << "Enter a file name\n";
	cin >> fileName;
	cout << "enter the list size\n";
	cin >> listSize;
	List<int> list(listSize);
	List<int> list2(listSize); 
	//ofstream outff(fileName);
	ofstream outf(fileName.c_str(), ios::app);//open file with append mode

	int action = 0;
	do
	{
		cout << "\n";
		cout << "1: insert a data\n";
		cout << "2: delete all data that are duplicated\n";
		cout << "3: count occurence\n";
		cout << "4: compare both\n";
		cout << "5: display the list\n";
		cout << "6: read data from file\n";
		cout << "7: save data in your list\n";
		cout << "8: show the last list\n";
		cout << "10: Good by!\n";
		cin >> action;
		
		if(action == 1)
		{
			try
			{
				cout << "enter value\n";
				cin >> value;
				list.insert(value);

			}catch(ListException ex)
			{
				cout << ex.getError();
			}
		}
		else if(action == 2)
		{
			int target = 0;
			cout << "enter the value you want to delete\n";
			list.deleteAll(target);
			list.display(cout);

		}
		else if (action == 3)
		{
			cout << "occurs = " << list.occurs(3) << "\n";
		}
		else if(action == 4)
		{
			if(list == list2)
			{
				cout << "both are the same\n";
			}
			else
			{
				cout << "both are NOT the same\n";
			}
		}
		else if(action == 5)
		{
			int last;
			last = list.last();
			cout << "the last = " << last; 
			//list.display(cout);
		}
		else if(action == 6)
		{
				//Read all data in the file
			ifstream inf(fileName.c_str());
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
		}
		else if(action == 7)
		{
			//Insert all data in the current array into file named intList.txt				if(!outf)
			if(!outf)
			{
				cerr << "can not access file successfully\n";
			}
			else
			{
				list.appendFile(outf);
				//list.appendFile(outff);					outf << endl;
			}
		}
		else if(action == 8)
		{
			try
			{
				int last = list.last();
				cout << "last value = " << last << "\n"; 
			}
			catch(ListException e)
			{
				cout << e.getError();
				cout << "\n";
			}
		}
		else if(action == 10)			
		{
			cout << "Programed by Kaya Ota\n";
		}
		else
		{
			cout << "Invalid action\n";
		}
		

	}while(action != 10);
	
		




	cout << "create an istance\n";
	
	 

	return 0;
}


