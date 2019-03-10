#include <iostream>
using namespace std;


int main()
{
    int myInt = 15;
    int *myPointer;
    myPointer = &myInt;
    
    cout << "Memory location of myInt: "<< &myInt << endl;
    cout << "Value of myPointer: " << myPointer << endl;
    
    cout<< "Value of myInt: " << myInt << endl;
    cout << "Value pointed to by myPointer: " << *myPointer << endl;
    
    myInt = 10;
    cout << "Memory location of myInt: " << &myInt << endl;
    cout << "Value of myPointer: " << myPointer << endl;
    cout << "Value of myInt: " << myInt << endl;
    cout << "Value pointed to by myPointer: " << *myPointer << endl;
    
    
    
    return 0;
}