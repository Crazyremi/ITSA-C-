#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    double dist = sqrt(x*x + y*y);
    if(dist <= 100)
        cout << "inside" << endl;
    else
    {
        cout << "outside" << endl;
    }
    
}