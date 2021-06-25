#include<iostream>
using namespace std;
int main()
{
    float a[10];
    for(int i=0;i<10;i++)
        cin >> a[i];
    float min = a[0];
    float max = a[0];
    for(int i=1;i<10;i++)
    {
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    cout << "maximum: " << max << endl;
    cout << "minimum: " << min << endl;
}