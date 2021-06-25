#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a1,a2,a3;
    cin >> a1 >> a2 >> a3;
    int rest = n-(15*a1+20*a2+30*a3);
    int count1=0, count2=0, count3=0;
    while(rest>0)
    {
        while(rest>=50)
        {
            rest -=50;
            count3++;
        }
        while(rest>=5)
        {
            rest -= 5;
            count2++;
        }
        while (rest>=1)
        {
            rest -= 1;
            count1++;
        }
    }
    cout << count1 << " " << count2 << " " << count3 << endl;
    printf("%d %d %d\n",count1,count2,count3);
}