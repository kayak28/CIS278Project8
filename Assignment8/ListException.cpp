//ListException.cpp

#include <iostream>
#include <string>

using namespace std;
#include "ListException.h"
ListException::ListException(string massage)
{
	error = massage; 
}
ListException::ListException()
{
	error = "Error!!!";
}
string ListException::getError()
{
	return error;
}