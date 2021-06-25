#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        float h,w;
        scanf("%f %f",&h,&w);
        h /= 100;
        float bmi = w/(h*h); 
        if(bmi < 18.5)
            cout << "Underweight\n" << bmi;
        else if(bmi >= 18.5 && bmi <= 23.9)
            cout << "Normalweight" << bmi;
        else if(bmi >= 24.0 && bmi <= 27.9)
            cout << "Overweight" << bmi;
        else
            cout << bmi << "Obsese" << endl;
    }
}