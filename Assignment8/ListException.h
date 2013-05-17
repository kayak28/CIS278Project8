//ListException.h
#include <iostream>
#include <string>
using namespace std;
class ListException
{
	public:
		ListException(string massage);
		ListException();
		string getError();
		//~ListException();
	private: 
		string error;
};