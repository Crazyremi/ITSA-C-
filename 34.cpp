#include<iostream>
using namespace std;
int main()
{
    int h_1,sex;
    while(cin >> h_1 >> sex)
    {
        if(sex==1)
        {
            float weight = (h_1-80)*0.7;
            cout << weight;
        }
        else if(sex==2)
        {
            float weight = (h_1-70)*0.6;
            cout << weight;
        }
        
    }
}