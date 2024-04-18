#include<iostream>
using namespace std;
int main()
{
    int num1 , num2 ;
    cout<<"Enter the value of number 1 : ";
    cin>>num1;

    cout<<"Enter the value of number 2  : ";
    cin>>num2;

    if(num1 > num2)
    {
        cout<<num1<<" is greatest of two";
    }
    else
    {
        cout<<num2<<" is geatest of two";
    }
}