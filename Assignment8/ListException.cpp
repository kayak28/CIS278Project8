//ListException.cpp
#include "ListException.h"
#include <iostream>
using namespace std;
ListException::ListException(string massage)
{
	erorr = massage; 
}
ListException::getError()
{
	return erorr;
}