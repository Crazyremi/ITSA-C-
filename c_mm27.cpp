#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin >> a >> b)
    {   
        int ans=0;
        for(int i=a;i<=b;i++)
        {
            ans+=i;
        }
        cout << ans << endl;
    }
}