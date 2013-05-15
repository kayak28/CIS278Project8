//Apps.cpp
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
using std::ifstream;
using std::ofstream;

#include "Ractangle.h"

int main()
{
	ifstream in;
	ofstream out; 
	string fileName;

	cout << "What is the name of the input file??\n";
	cin >> fileName;

	in.open(fileName.c_str());
	out.open("myfile4.txt");

	//create ractangle
	Ractangle rec1;
	Ractangle rec2;
	Ractangle rec3;

	//read info
	in >> rec1;
	in >> rec2;
	in >> rec3;

	//output rectangle info
	//cout << rec1 << " " << rec2 << " " << rec3  << " " << "\n"; 
	out << rec1 << endl;
	out << rec2 << endl;
	out << rec3 << endl;

	in.close();
	out.close();  
}



