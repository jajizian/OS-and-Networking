#include <iostream>
using namespace std;

int main()
{
    
    int grade = 0;
    
    cout << "Please enter the integer grade you received." << endl;
    cin >> grade;
    
  if(grade >= 90)
  {
      cout << "You received an A" << endl;
  }
  if(grade >= 80 && grade <90)
  {
      cout << "You received a B" << endl;
  }
  if(grade >= 70 && grade <80)
  {
      cout << "You received a C" << endl;
  }
  if(grade >= 60 && grade<70)
  {
      cout << "You received a D" << endl;
  }
  if(grade < 60)
  {
      cout << "You received a F" << endl;
  }
    
    
    
    return 0;
}