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

	/* Resize vector */
	void resize(int newCapacity)
	{
		cout << "In resize (new capacity is " << newCapacity << ")" << endl;
		capacity = newCapacity; // Set capacity
		int* newArray = new int[capacity]; // Allocate new memory
		for(int i = 0; i < length; i++)
			newArray[i] = array[i]; // Copy old values into new memory
		delete [] array; // Deallocate old memory
		array = newArray; // Point "array" at new memory
	}

public:

	/* Constructor */
	MyVector()
	{
		cout << "In constructor" << endl;
		length = 0;
		capacity = INIT_CAPACITY;
		array = new int[capacity]; // Allocate memory
	}

	/* Destructor */
	~MyVector()
	{
		cout << "In destructor" << endl;
		delete [] array; // Deallocate memory
	}

	/* Insert value at end */
	void pushBack(T value)
	{
		cout << "In pushBack (value=" << value << ")" << endl;
		// Resize if needed
		if(length == capacity)
			resize(capacity*2);
		array[length] = value; // Set value
		length++; // Increment length
	}
	
	/* Insert value at given index */
	void insertAt(int index, T value)
	{
		cout << "In insertAt" << endl;
		// Check index bounds
		if(index >= length || index < 0)
		{
			stringstream message;
			message << "Cannot remove index " << index << " for MyVector of size " << length << endl;
			throw message.str();
		}
		// Resize if needed
		if(length == capacity)
			resize(capacity*2);
		// Copy values from [index, length-1] up an index
		for(int i = length-1; i >= index; i--)
			array[i+1] = array[i];
		array[index] = value; // Set array[index] to value
		length++; // Increment length
	}

	/* Remove the element at index */
	void removeAt(int index)
	{
		cout << "In remove" << endl;
		// Check index bounds
		if(index >= length || index < 0)
		{
			stringstream message;
			message << "Cannot remove index " << index << " for MyVector of size " << length << endl;
			throw message.str();
		}
		// Copy values from [index, length-1] down an index
		for(int i = index; i < length; i++)
			array[i] = array[i+1];
		// Decrement length
		length--;
	}
	
	/* Get value at index */
	T at(int index)
	{
		cout << "In at" << endl;
		// Check index bounds
		if(index >= length || index < 0)
		{
			stringstream message;
			message << "Cannot access index " << index << " for MyVector of size " << length << endl;
			throw message.str();
		}
		return array[index]; // Return value at index
	}

	/* Get number of values in vector */
	int size()
	{
		cout << "In size" << endl;
		return length;
	}
};
