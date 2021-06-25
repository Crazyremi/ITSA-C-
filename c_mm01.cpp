#include<iostream>
using namespace std;
int main()
{
    int top,bottom,height;
    while(cin >> top >> bottom >> height)
    {   
        cout << "Trapezoid area: " << (top+bottom)*height/2.0 << endl;
    }
    
}