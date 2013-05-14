//main.cpp

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
			charList.insert(instream.get());
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
	while(getchar())
	{
		charList.insert(getchar());
		if(getchar() == '\n')
		{
			break;
		}		
	}
	cout << "input a value to check how many times it occurs in the list\n";
	cin >> occurance;
	cout << "this value occurs" << charList.occurs(occurance) 
		 << "times in the list\n";
	//enter a value and remove all entered value
	cout << "enter value that you want to delete\n";
	cin >> remover;
	charList.deleteAll(remover);
	cout << "this value is removed from the list\n";

	//make a 2nd list
	cout << "How many values you would like to create in this 2nd list??\n";
	cin >> number2;
	List<char> arrayChar(number2*2);
	if(arrayChar.isEmpty())
	{
		cout << "List is empty\n";
	}
	else
	{
		cout << "Not empty!\n";
	}
	//chech if both are identical or not 
	if(arrayChar == charList)
	{
		cout << "there two list are indetical\n";
	}
	else
	{
		cout << "there are to list are diff\n";
	}
	//output
	outsteam.open("output.txt");
	for(int i = 0; i < arrayChar.getHowmany(); i++)
	{
		outsteam.close();
	}
	return 0;

}
