#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b))
    {
        if(a<=100&&b<=100)
            cout << "inside" << endl;
        else  
            cout << "outside" << endl;
    }
}