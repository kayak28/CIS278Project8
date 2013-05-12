//List.h
#include <iostream>
using namespace std;
template <class T>
class List
{
	public:
		List();
		List(int max);
		bool isFull();
		bool isEmpty();
		void insert(T value);
		T last() const;
		int occurs(T value);
		void deleteAll(T value);
		bool operator==(const List<T>& operand) const;
		friend ostream& operator<<(ostream& out, const List<T>& robject);
	private:
		T *data;
		int howmany;
		int size;

};
template<class T>
List::List()
{
	data = new T[10];
	howmany = 0;
	size = 10;
}
template<class T>
List::List(int max)
{
	data = new T [max];
	howmany = 0;
	size = max;
}
template<class T>
int List::getSize()
{
	return size;
}
template<class T>
int List::getMany()
{
	return howmany;
}
template<class T>
bool List::isFull()
{
	return (howmany == size);
}
bool List::isEmpty()
{
	return (howmany == 0);
}
void List::insert(T value)
{
	if(isFull())
	{
		throw new ListException();
	}
	data[howmany] = value;
	howmany++;
}
T List::last()
{
	if(isEmpty())
	{
		throw new Exception();
	}
	return data[howmany];
}
int List::occurs(T value)
{
	int occurence = 0;
	for(int i = 0; i < size; i++)
	{
		if(data[i] == value)
		{
			occurence++;
		}
	}
	return occurence;
}
void List::deleteAll(T value)
{
	for(int i = 0; i < size; i++)
	{
		if(data[i] == value)
		{
			for(int j = i; j < size; j++)
			{
				data[j] = data[j + 1];
			}
		}
	}
}
bool operator ==(const List<T>& operand) const;
{
	//bool idential = false;
	if(this->getSize() == operand.getSize())
	{
		if(this->getMany() == operand.getMany())
		{
			for(int i = 0; i < this->getSize(); i++)
			{
				if(data[i] != operand.data[i])
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
} 
ostream& operator << (ostream& out, const List<T>& robject)
{
	out << "[ ";
	for (int i = 0; i < robject.getSize(); ++i)
	{
		out << robject.data[i] << ", ";
	}
	out << "]";
}
