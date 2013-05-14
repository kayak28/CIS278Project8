//List.h 
#include <iostream>
#ifndef LIST_H
#define LIST_H
using namespace std;

template <class T>
class List
{
	public:
		List()
		{
			data = new T[10];
		}
		List(int max)
		{
			data = new T [max];
		}
		bool isFull()
		{
			return (size == howmany);
		}
		bool isEmpty()
		{
			return (howmany == 0);
		}
		void insert(T value)
		{
			if(isFull())
			{
				cout << "Attempt to exceed capacity in array\n";
			}
			else
			{
				data[howmany++] = value;
			}
		}
		T last() const
		{
			if(isEmpty())
			{
				cout << "this array is empty\n";
				return; 
			}
			else
			{
				return data[howmany];
			}
			
		}
		int occurs(T value)
		{
			int count = 0;
			for (int i = 0; i < size; ++i)
			{
				if(data[i] == value)
				{
					count++;
				}
			}
			return count;
		}	
		void deleteAll(T value)
		{
			for(int i = 0; i < size; i++)
			{
				if(data[i] == value)
				{
					data[i] = 0;
				}
			}
		}
		bool operator == (const List<T>& operand)const
		{
			return (data == operand.data);
		}
		int getHowmany()
		{
			return howmany;
		}
	private:
		T* data; 
		int howmany;
		int size;
};

#endif

