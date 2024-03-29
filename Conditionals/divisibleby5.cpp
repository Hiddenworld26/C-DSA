#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the value of number : \n";
    cin>>num;
    if((num%5)==0)
    {
        cout<<"Input number is divisible by 5"<<endl;
    }
    else
    {
        cout<<"Input number is not divisible by 5"<<endl;
    }
}