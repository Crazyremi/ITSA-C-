#include<iostream>
using namespace std;
int main()
{   
    int a;
    while(cin >> a)
    {   
        int ans=0;
        for(int i=1;i<=a;i++)
        {
            if(i%3==0)
                ans+=i;
        }
        cout << ans;
    }
}