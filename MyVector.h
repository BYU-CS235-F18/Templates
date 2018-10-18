#pragma once
#include "VectorInterface.h"
#include <sstream>
#define INIT_CAPACITY 2

template <class T>
class MyVector: public VectorInterface<T>
{
private:
	int* array;
	int length;
	int capacity;
	void resize(int newCapacity)
	{
		cout << "In resize (new capacity is " << newCapacity << ")" << endl;
	}
public:

	/* Constructor */
	MyVector()
	{
		cout << "In constructor" << endl;
	}

	/* Destructor */
	~MyVector()
	{
		cout << "In destructor" << endl;
	}

	/* Insert value at end */
	void pushBack(T value)
	{
		cout << "In pushBack (value=" << value << ")" << endl;
	}
	
	/* Insert value at given index */
	void insertAt(int index, T value)
	{
		cout << "In insertAt" << endl;
	}

	/* Remove the element at index */
	void removeAt(int index)
	{
		cout << "In remove" << endl;
	}
	
	/* Get value at index */
	T at(int index)
	{
		cout << "In at" << endl;
	}

	/* Get number of values in vector */
	int size()
	{
		cout << "In size" << endl;
	}
};
