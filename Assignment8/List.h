//List.h
#include <iostream>
using namespace std;
template <class T>
class List
{
	public:
		List();
		List(int max);
		int getSize();
		int getMany();
		bool isFull();
		bool isEmpty();
		void insert(T value);
		T last() const;
		int occurs(T value);
		void deleteAll(T value);
		bool operator==(const List<T>& operand) const;
	//	friend ostream& operator<< <>(ostream& out, const List<T>& robject);
		void display(ostream& out);
	private:
		T *data;
		int howmany;
		int size;

};
template<class T>
List<T>::List()
{
	data = new T[10];
	howmany = 0;
	size = 10;
}
template<class T>
List<T>::List(int max)
{
	cout << "creating a const";
	data = new T [max];
	howmany = 0;
	size = max;
}
template<class T>
int List<T>::getSize()
{
	return size;
}
template<class T>
int List<T>::getMany()
{
	return howmany;
}
template<class T>
bool List<T>::isFull()
{
	return (howmany == size);
}
template<class T>
bool List<T>::isEmpty()
{
	return (howmany == 0);
}
template<class T>
void List<T>::insert(T value)
{
	if(isFull())
	{
		//throw new ListException();
	}
	data[howmany] = value;
	howmany++;
}
template<class T>
T List<T>::last() const
{
	if(isEmpty())
	{
		//throw new Exception();
	}
	return data[howmany-1];
}

template<class T>
int List<T>::occurs(T value)
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
template<class T>
void List<T>::deleteAll(T value)
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
template<class T>
bool List<T>::operator ==(const List<T>& operand) const
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
template<class T>
ostream& operator << (ostream& out, const List<T>& robject)
{
	out << "[ ";
	for (int i = 0; i < robject.getSize(); ++i)
	{
		out << robject.data[i] << ", ";
	}
	out << "]";
}
