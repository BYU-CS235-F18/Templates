#include <iostream>
#include "MV.h"
#include <string>
using std::cout;
using std::endl;
using std::string;
int main()
{
    MV<int> intcontainer;
    cout << "Inserting"<<endl;
    intcontainer.put(5);
    cout << "Getting "<<intcontainer.get()<<endl;
    
    MV<string> stringcontainer;
    cout << "Inserting"<<endl;
    stringcontainer.put("Hello");
    cout << "Getting "<<stringcontainer.get()<<endl;
    
}

