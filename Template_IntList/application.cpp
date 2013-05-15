//application.cpp
#include <iostream>
#include <fstream>
#include <string>
#include "List.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

int main()
{
	int number, number2;
	char occurance, remover;
	string fileName;
	ifstream instream;
	ofstream outsteam;

	//create a new list
	cout << "How many values do you want to store??\n";
	cin >> number;
	List<char> charList(number);

	cout << "Read values from a file. please input the file name\n";
	cin >> fileName;
	instream.open(fileName.c_str());

	if(!instream)
	{
		cout << "file opren fail\n"; 
	}
	else
	{
		while(instream.get())
		{
			charList.inseart(instream.get());
		}
		instream.close();
	}
	//show the list
	cout << "file infor\n";
	if(charList.isEmpty())
	{
		cout << "List is empty\n";
	}
	else
	{
		cout << "input more int values:\n";
	}

}
