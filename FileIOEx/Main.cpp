//Main.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	string name;
	string fileName;
	cout << "What is the name of input file??\n";
	cin >> fileName;

	in.open(fileName.c_str());
	out.open("myfile2.txt",ios::app);
	//in >> name;
	getline(in, name);
	out << name;

	in.close();
	out.close();
}


