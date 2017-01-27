# Vector
In this learning activity, we will explore templates which will be used in developing a vector template class.  This will be very similar to the list class that you will be developing for Lab 2.
To get started, you should be aware of the [sample code included with the book](http://bcs.wiley.com/he-bcs/Books?action=resource&bcsId=2949&itemId=0471467553&resourceId=7105&chapterId=21528).  It will give you a lot of help in how to implement your list class and we will use it to implement our vector class as well.  I suggest that you upload the material for chapter 4 to c9.io or your development environment now.
To get started, we need to understand templates.  Templates allow us to create a class that can contain any other class.  So, if we are building a vector container, it should be able to handle ints, strings or any other type.  The syntax is a bit confusing, so lets start with a simple example
```c++
template <class T>
class MV {
    T element;
  public:
    void put(T arg) {element = arg;};
    T get () {return element;}
};
```
We declare a template and indicate that the type will be contained in a variable "T". The "T" will be replaced by the actual class name anywhere it is used in the rest of this class.
So, "T element" will be replaced with "int element" when we instantiate this class with an integer.  And "put(T arg)" will be replaced with "put(int arg)".

To use this class, we declare a variable in the same way we would declare a vector.
```c++
#include <iostream>
#include "MV.h"
using std::cout;
using std::endl;
int main()
{
    MV<int> container;
    cout << "Inserting"<<endl;
    container.put(5);
    cout << "Getting"<<container.get()<<endl;
    
}
```
We could also declare a MV or type string.
```c++
    MV<string> container;
    cout << "Inserting"<<endl;
    container.put("Hello");
    cout << "Getting "<<container.get()<<endl;
```
