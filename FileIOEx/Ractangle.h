//Ractangle.h
#include <iostream>
using namespace std;

class Ractangle
{
	public: 
		Ractangle();
		Ractangle(int ht, int wd) ;
		friend istream& operator>>(istream& inobj, Ractangle& myrec);
		friend ostream& operator<< (ostream& outobj, const Ractangle& out);
	private: 
		int height;
		int width; 
};


