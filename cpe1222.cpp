#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int e,f,c;
        int count = 0;
        cin >> e >> f >> c;
        int empty_bottle = e+f;
        int num;
        while(empty_bottle >= c)
        {
            num = empty_bottle / c;
            count += num;
            int rest = empty_bottle % c;
            empty_bottle = num+rest;
        }
        cout << count << endl;

    }
}