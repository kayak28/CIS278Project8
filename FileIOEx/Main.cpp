//Main.cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using std::ifstream;
using std::ofstream;

int main()
{
	ifstream in;
	ofstream out;
	string name;
	string fileName;
	cout << "What is the name of input file??\n";
	cin >> fileName;

	in.open(fileName.c_str());
	cout << "after open file\n";
	out.open("myfile2.txt",ios::app);
	cout << "create myfile2\n";
	
	in >> name;
	in.ignore(50, '\n');
	cout << "after in\n";
	std::getline(in, name);

	cout << "after get lline\n";
	//out << name;

	in.close();
	out.close();
}


