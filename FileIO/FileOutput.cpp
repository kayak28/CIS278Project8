//FileOutput.cpp
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::string value; 
	ofstream outf("sample.dat", ios::app);
	cout << "enter value\n";
	cin >> value;
	if(!outf)
	{
		cerr <<"Uh,oh\n";
		//exit(1);
	}
	outf << "This is line 1" << endl;
	outf << "this is line 2" << endl;
	outf << "this is line 3" << endl;
	outf << "this is line 4" << endl;
	outf << value << endl;

	ifstream inf("sample.dat");
	if(!inf)
	{
		cerr << "Uh, oh\n";
	}
	while(inf)
	{
		std::string strInput;
		getline(inf, strInput);
		//inf >> strInput;
		cout << strInput << endl;
	}



	return 0;

}

