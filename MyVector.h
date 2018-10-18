#include "VectorInterface.h"
template <class T>
class MyVector: public VectorInterface<T>
{
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
	void push_back(T value)
	{
		cout << "In push_back" << endl;
	}
	
	/* Insert value after given index */
	void insertAt(int index, T value)
	{
		cout << "In insertAt" << endl;
	}

	/* Remove the element at index */
	void remove(int index)
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
		return 0;
	}
};
