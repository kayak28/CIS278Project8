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
		void display(ostream& out) const;
		void appendFile(ostream& out) const;
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
	//cout << "creating a const";
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
		cout << "Full array!\n";
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
	int *placeholder = new int[size];
	int counter = 0;
	cout << "in delete\n";
	for(int i = 0; i < size; i++)
	{	
		cout << "in for \n";
		if(data[i] == value)
		{

			placeholder[counter] = i;
			counter++;
			/*
			//data[i] = data[i + 1];
			cout << "in if\n";
			for(int j = i; j < size; j++)
			{
				cout << "into foor\n";
				data[j - 1] = data[j];
				cout << "after deleting\n";
				//i--;
			}
			*/
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
/*
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
*/
template <class T>
void List<T>::display(ostream& out) const
{
	out << "[";
	for (int i = 0; i < howmany; ++i)
	{
		out << this->data[i];
		if(i != size-1)
		{
			out << ", ";
		}
	}
	out << "]";
}
template <class T>
void List<T>::appendFile(ostream& out) const
{
	for (int i = 0; i < size; ++i)
	{
		out << this->data[i] << endl;
	}
}
