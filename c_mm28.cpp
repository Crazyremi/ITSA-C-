#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin >> a)
    {   
        for(int i=1;i<=a;i++)
        {
            if(i%5==0&&i%7==0)
            {
                cout << i << endl;
            }
        }
    }
}