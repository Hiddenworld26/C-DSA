#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the two numbers : \n";
    cin>>num1>>num2;
    char ch;
    cout<<"Enter the operation you want to perform : \n";
    cin>>ch;
    
    switch(ch)
    {
        case '+':
        {
           cout<<(num1+num2);
           break;
        }
        case '-':
        {
           cout<<(num1-num2);
           break;
        }
        case '*':
        {
           cout<<(num1*num2);
           break;
        }
        case '/':
        {
           cout<<(num1/num2);
           break;
        }
        case '%':
        {
           cout<<(num1%num2);
           break;
        }
        default:
        {
            cout<<"Invalid Character";
        }
    }
}