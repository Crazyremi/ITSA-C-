#include<iostream>
using namespace std;
int main()
{
    int rest;
    cin >> rest;
    int count1=0, count2=0, count3=0;
    while(rest>0)
    {
        while(rest>=10)
        {
            rest -=10;
            count3++;
        }
        while(rest>=5)
        {
            rest -= 5;
            count2++;
        }
        while (rest>=1)
        {
            rest -= 1;
            count1++;
        }
    }
    cout << "NT10=" << count3 << "\nNT5=" <<count2 << "\nNT1=" << count1 << endl;
}