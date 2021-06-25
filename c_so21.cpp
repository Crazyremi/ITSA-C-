#include<iostream>
using namespace std;
#include <stdlib.h>
int cmp (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int size;
        cin >> size;
        int a[size];
        for(int j=0;j<size;j++)
        {
            cin >> a[j];
        }
        qsort(a,size,sizeof(int),cmp);
        int ans = 0;
        for(int j=0;j<size/2;j++)
        {
            ans += a[size-j-1] - a[j];
        }
        cout << ans;
    }
}