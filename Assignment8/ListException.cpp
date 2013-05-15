//ListException.cpp
#include "ListException.h"
#include <iostream>
using namespace std;
ListException::ListException(string massage)
{
	cout << "Error:" << massage << "\n"; 
}