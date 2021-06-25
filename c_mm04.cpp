#include<iostream>
using namespace std;
int main()
{   
    int a,b;
    while(scanf("%d%d",&a,&b))
    {
        cout << a << " + " << b << " = " << a+b << endl;
        cout << a << " * " << b << " = " << a*b << endl;
        cout << a << " - " << b << " = " << a-b << endl;
        cout << a << " + " << b << " = " << a/b << "..." << a%b <<endl;

    }
}