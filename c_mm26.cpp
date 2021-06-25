#include<iostream>
using namespace std;
int main()
{
    int a;
    while(scanf("%d",&a))
    {
        for(int i=1;i<=a;i++)
        {
            cout << i << "*" << i << "=" << i*i<< endl;
        }
    }
}