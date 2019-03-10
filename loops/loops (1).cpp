#include <iostream>
using namespace std;


int main()
{
    
int pos =0;
int neg =0;
int zero =0;
double sum =0.0;
double avg =0.0;
int input =0;


    
    
    
    for(int x =1; x < 11; x++)
    {
        cout << "Enter number " << x << endl;
        cin >> input;
        
        sum += input;
        avg = sum / 10;
        
         
   if (input > 0)
   {
        pos++;
    }
   if (input < 0)
   {
      neg++;
   }
   if (input == 0)
   {
       zero++;
       
   }
    }
    
   
   
    
    cout << "Your list of numbers has " << pos << " positive numbers" << endl;
    cout << "\nYour list of numbers has " << neg << " negative numbers" << endl;
    cout << "\nYour list of numbers has " << zero << " zeroes" << endl;
    cout << "\nThe sum of your list of numbers is " << sum << endl;
    cout << "\nThe average of your list of numbers is " << avg << endl;
    
    
    
    return 0;
}