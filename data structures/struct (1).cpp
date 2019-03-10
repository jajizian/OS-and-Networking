#include <iostream>
#include <math.h>

using namespace std;

//data structure creation
struct Point
{
    float x;
    float y;
};

//distance function
float calculateDistance(Point *p1, Point *p2)
{
    float xData;
    float yData;
    
    // x portion of sqrt
    xData = pow(( (*p2).x - (*p1).x ),2);
    
    // y portion or sqrt
    yData = pow(( (*p2).y - (*p1).y ),2);
    
    //calc and return sqrt
    return sqrt(xData+yData);
}

int main()
{
    Point p1;
    Point p2;
    
    cout << "Enter an X coordinate followed by a Y coordinate for Point 1: " << endl;
    cin >> p1.x >> p1.y;
    
    cout << "Enter an X coordinate followed by a Y coordinate for Point 2: " << endl;
    cin >> p2.x >> p2.y;
    
    cout << "Distance between p1 and p2 is: " << calculateDistance(&p1, &p2) << endl;
}