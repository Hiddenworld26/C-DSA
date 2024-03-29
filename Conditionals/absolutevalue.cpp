#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the value  of number : \n";
    cin>>num;
    if(num>0)
    {
        cout<<"The absolute value of number is : "<<num;
    }
    else if(num==0)
    {
        cout<<"The absolute value of number is : "<<num;
    }
    else
    {
         cout<<"The absolute value of number is : "<<(-num);
    }
}