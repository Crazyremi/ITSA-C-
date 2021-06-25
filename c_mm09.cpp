#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin >> a)
    {   
        if(a>31)
        {
            cout << "Value of more than 31\n";
            continue;
        }
        int ans=1;
        for(int i=0;i<a;i++)
        {
            ans*=2;
        }
        cout << ans << endl;

    }
}