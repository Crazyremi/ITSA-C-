#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        if((n%4==0 && n%100!=0) || (n%400==0))
            cout << "Bissextile Year\n";
        else 
            cout << "Common Year\n";
    }
}