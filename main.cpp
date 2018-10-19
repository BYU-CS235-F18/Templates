#include <iostream>
#include "MyVector.h"
#include <string>

using namespace std;

int main()
{
	// Constructor
	MyVector<int> nums;

	// Push Back
	nums.pushBack(5);
	nums.pushBack(8);
	nums.pushBack(10);
	cout << "Size: " << nums.size() << endl;

	// At
	try
	{
		cout << "Value at position 0: " << nums.at(0) << endl;
		cout << "Value at position 1: " << nums.at(1) << endl;
		cout << "Value at position 2: " << nums.at(2) << endl;
		cout << "Value at position 3: " << nums.at(3) << endl;
	} catch(string message)
	{
		cout << "Error caught: " << message << endl;
	}

	// Insert At
	nums.insertAt(0, 1);
	nums.insertAt(3, 9);
	nums.pushBack(12);
	for(int i = 0; i < nums.size(); i++)
		cout << "Value at position " << i << ": " << nums.at(i) << endl;

	// Remove At
	nums.removeAt(5);
	nums.removeAt(2);
	for(int i = 0; i < nums.size(); i++)
		cout << "Value at position " << i << ": " << nums.at(i) << endl;

	// Destructor for nums called at end of scope

	// Test with different data type
	MyVector<string> strs;
	strs.pushBack("Ash");
	strs.pushBack("fell");
	strs.pushBack("from");
	strs.pushBack("the");
	strs.pushBack("sky");
	for(int i = 0; i < strs.size(); i++)
		cout << strs.at(i) << " ";
	cout << endl;
}
