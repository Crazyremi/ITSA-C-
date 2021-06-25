#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{		
	int i=0;
	int j=0;
    int n;
    while(scanf("%d",&n)!=EOF)
    {   
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];

        }
        for(i=0;i<n;i++)
        {	
            int max = a[0], max_idx = 0;
            for(j=0;j<n-i;j++)
            {
                if(a[j] > max)
                {
                    max = a[j];
                    max_idx = j;
                }
            }
            int temp = a[n-i-1];
            a[n-i-1] = max;
            a[max_idx] = temp;
        }
        for(i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
	}
	return 0;
}
