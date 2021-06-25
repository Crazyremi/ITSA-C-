#include<iostream>
#include<stack>
#include<string>
using namespace std;
int add(int,int);
int sub(int,int);
int times(int,int);
int devide(int,int);
int mod(int,int);
int main()
{   
    string str;
    while(cin >> str)
    {   
        if(str[0] == '0' && str[1] == '\0')
            break;
        stack<int> stk;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]<=57 && str[i]>=48)
            {
                stk.push(str[i]-'0');
            }
            else
            {   
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                int c;
                switch(str[i])
                {
                    case '+':
                        c = add(a,b);
                        break;
                    case '-':
                        c = sub(a,b);
                        break;
                    case '*':
                        c = times(a,b);
                        break;
                    case '/':
                        c = devide(a,b);
                        break;
                    case '%':
                        c = mod(a,b);
                        break;

                }
                stk.push(c);
            }
        }
        cout << stk.top() << endl;
        stk.pop();
    }
    return 0;
   
}
int add(int a,int b)
{
    return b+a;
}
int sub(int a,int b)
{
    return b-a;
}
int times(int a,int b)
{
    return b*a;
}
int devide(int a,int b)
{
    return b/a;
}
int mod(int a,int b)
{
    return b%a;
}