//IntList.h
//template class(generic class in java) must define 
//in the class in side of h file!!
//
#include <iostream>
using namespace std;

template<class T>
class IntList
{
	public:
		IntList();
		//create empty IntList with initial cap of 50
		IntList(int size);
		//create empty IntList wiht intial cap of 'size'
		void insert(T value);
		//insert 'value' into the list
		//if the list is full, capacity will doubles
		void deleteItem(T value);
		//delete first occurrance of 'value' from the list
		//Precond: at least one occurence of value is int he list
		bool isThere(T value) const;
		//determine id value' is in the list 
		bool isEmpty() const;
		//check if the list is empty
		bool isFull() const;
		//check if the list is full
		void display(ostream& out);
		//for output of IntList object to an ostream

	private: 
		T *storage; //storage for int value
		int howmany; //number of int value currently stored
		int capacity; //current capacity of list.
		//==> valies depending on how many times array size is ensured
};

template<class T>
IntList<T>::IntList()
{
	storage = new T [50];
	howmany = 0;
	capacity = 50;
}
template<class T>
IntList<T>::IntList(int size)
{
	storage = new T [size];
	howmany = 0;
	capacity = size;
}
template<class T>
void IntList<T>::insert(T value)
{
	if(howmany == capacity)
	{
		T *temp = new T[capacity * 2];//create larger array
		for(int index = 0; index < howmany; index++)
		{
			temp[index] = storage[index];
		}
		delete [] storage;
		storage = temp;
		capacity = capacity * 2;
	}
	storage[howmany++] = value;
}
template <class T>
void IntList<T>::deleteItem(T value)
{
	int index = 0;//
	while(storage[index] != value)
	{//looking for where the target value is, so 
	//unless it finds the target, index keeps increment
 		index++;
	}

	for(int pos = index+1; pos <= howmany -1; pos++ )
	{
		storage[pos - 1] = storage[pos];
	}
	howmany--;
}
template <class T>
bool IntList<T>::isThere(T value) const
{
	int index = 0;
	while(index < howmany && storage[index] != value)
	{
		index++;
	}
	return (index < howmany);
}
template<class T>
bool IntList<T>::isEmpty() const
{
	return howmany == 0;
}
template<class T>
bool IntList<T>::isFull() const
{
	return capacity == howmany;
}
template <class T>
void IntList<T>::display(ostream& out)
{
	out << "[";
	for(int i = 0; i < howmany; i++)
	{
		out<< " " << storage[i];
	}
	out << "] \n capacity : " << capacity; 
}