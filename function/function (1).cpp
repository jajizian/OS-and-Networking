#include <iostream>
using namespace std;

void swapInts(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


int main()
{
    int num1;
    int num2;
    
    cout << "Please enter an integer: " << endl;
    cin >> num1;
    
    cout << "Please enter a second integer: " << endl;
    cin >> num2;
    
    swapInts(&num1, &num2);
    cout << "Your swapped integers are: " << endl;
    cout << num1 << endl << num2 << endl;
    
    return 0;
}