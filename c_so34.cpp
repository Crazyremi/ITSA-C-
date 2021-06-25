#include<iostream>
using namespace std;
#include<stdlib.h>
int cmp(const void* a, const void* b)
{
    return (float*)a-(float*)b;
}
int main()
{
    int n;
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    qsort(a,n,sizeof(float),cmp);
    cout << a[0] << endl;
    cout << a[n-1] << endl;


}