#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin >> a)
    {   
        int ans=1;
        for(int i=1;i<=a;i++)
            ans*=i;
        cout << ans << endl;
    }
}