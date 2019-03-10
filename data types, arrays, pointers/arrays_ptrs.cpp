#include <iostream>
using namespace std;


int main()
{
    int my_ints[4];
    int *my_ptrs[4];
    int x;
    int temp;
    
    cout << "Begin populating array elements." << endl;
    
    for(int x =0; x < 4; x++)
    {
        cout << "Enter number " << x+1 << endl;
        cin >> my_ints[x];
       
    }
    
    for(int x=0;x<4;x++)
    {
        cout << "my_ints array elements are as follows: Element " << x+1 << ": " << my_ints[x] << endl;
    }
    
    for(int x=0; x<4;x++)
    {
        my_ptrs[x] = &my_ints[x];
        cout << "The elements pointed to by pointer array are: Element " << x+1 << ": " << *my_ptrs[x] << endl;
    }
    
    for(int x=0; x<4;x++)
    {
        for(int i=0;i<4;i++)
        {
            if(*my_ptrs[x] < *my_ptrs[i])
            {
                temp = *my_ptrs[x];
                *my_ptrs[x] = *my_ptrs[i];
                *my_ptrs[i] = temp;
            }
        }
    }
    
    for(x=0;x<4;x++)
    {
        cout << "The sorted array elements of the pointer array are as follows: Element: " << x+1 << ": " << *my_ptrs[x] << endl;
    }
    
    
    
    return 0;
}
