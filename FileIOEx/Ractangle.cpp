//Ractangle.cpp 
#include "Ractangle.h"
Ractangle::Ractangle()
{
	height = 1;
	width = 1;
}
Ractangle::Ractangle(int ht, int wd)
{
	height = ht;
	width = wd;
}
istream& operator>>(istream& in, Ractangle& myrec)
{
	in >> myrec.height;
	in >> myrec.width;
	return in;
}
ostream& operator<<(ostream& out, const Ractangle& myrec)
{
	out << myrec.height;
	out << myrec.width;
	return out;
}