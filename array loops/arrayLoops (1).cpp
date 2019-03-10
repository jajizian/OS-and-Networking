#include <iostream>
using namespace std;


int main()
{
    int x;
    int y;
    int temp;
    
    int array[10];
    
    //entering user inputs into array
   for(int x =0; x < 10; x++)
    {
        cout << "Enter number " << x+1 << endl;
        cin >> array[x];
    }
     
     //printing array elements as they were input
     cout << "Array elements listed below:" << endl;
     
     for(int x=0; x < 10; x++)
     {
         cout << array[x] << endl;
     }
     
    
    //printing reversed array
     cout << "The reversed array elements are listed below:" << endl;
     
    for (int x=9; x>=0; x--)
    {
        cout << array[x] << endl;
    }
     
     //printing array in descending order
     cout << "The descending order of the array is listed below: " << endl;
     for(int x = 0; x < 10; x++)
     {
         for(int y = x+1; y < 10; y++)
         {
             if(array[x] > array[y])
             {
                 temp = array[x];
                 array[x] = array[y];
                 array[y] = temp;
             }
         }
         cout << array[x] << endl;
     }
 
 return 0;  
}